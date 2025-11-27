#include "verilog_a_parser.h"
#include "ast_preprocessor.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <antlr4-runtime/antlr4-runtime.h>
#include "VerilogLexer.h"
#include "VerilogParser.h"
using namespace antlr4;

VerilogAParser::VerilogAParser() {
    //constructor not used currently
}

bool VerilogAParser::parseFile(const std::string& filename) {
    clearError();
    
    std::ifstream ifs(filename);
    if (!ifs.is_open()) {
        setError("Cannot open file: " + filename);
        return false;
    }
    
    std::string src((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
    return parseString(src, filename);
}


bool VerilogAParser::parseString(const std::string& source, const std::string& filename) {
    clearError();
    
    try {
        //preprocess
        Preprocessor prep("");
        std::string preprocessed = prep.processString(source, filename);
        
        //ANTLR parsing
        ANTLRInputStream input(preprocessed);
        VerilogLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        VerilogParser parser(&tokens);
        
        tokens.fill();
        tree::ParseTree* tree = parser.source_text();
        
        //build AST
        ASTBuilder builder;
        builder.visit(tree);

        //store results
        modules_ = builder.modules;
        disciplines_ = builder.disciplines;
        natures_ = builder.natures;
        
        if (modules_.empty()) {
            setError("No modules found in Verilog-A source");
            return false;
        }
        
        // // Build symbol tables and Jacobian builders for all modules
        // for (auto& mod : modules_) {
        //     if (!buildSymbolTableForModule(mod)) {
        //         return false;
        //     }
        //     if (!buildJacobianForModule(mod)) {
        //         return false;
        //     }
        // }
        
        
        return true;
        
    } catch (const std::exception& e) {
        setError("Parsing error: " + std::string(e.what()));
        return false;
    }
}
bool VerilogAParser::buildSymbolTableAndJacobianForModule(){
        for (auto& mod : modules_) {
            if (!buildSymbolTableForModule(mod)) {
                return false;
            }
            if (!buildJacobianForModule(mod)) {
                return false;
            }
        }
        
        
        return true;
}
bool VerilogAParser::buildSymbolTableForModule(const std::shared_ptr<ModuleDecl>& mod) {
    auto symtab = std::make_shared<SymbolTable>();

    // Add ports as independent solver unknowns
    for (auto& pname : mod->ports) {
        symtab->addSymbol(pname, true /* independent */, 0.0);
    }
    
    // Add parameters as constants
    for (auto& param : mod->params) {
        symtab->addSymbol(param.name, false /* not independent */, param.value);
        int pidx = symtab->find(param.name);
        if (pidx >= 0) symtab->setInitialValue(pidx, param.value, false, true);
    }
    
    // Add electrical nets as independent
    for (auto& net : mod->electrical_nets) {
        if (symtab->find(net) == -1) {
            symtab->addSymbol(net, true /*independent*/, 0.0);
        }
    }
    
    //Apply user FIXED values
    for (auto& kv : user_fixed_) {
        const std::string& name = kv.first;
        double val = kv.second;
        int idx = symtab->find(name);
        if (idx == -1) {
            idx = symtab->addSymbol(name, false /*NOT independent*/, val);
            symtab->setFixed(idx, true);
        } else {
            symtab->setFixed(idx, true);
            symtab->setValue(idx, val);
        }
    }
    
    // Apply user INITIAL GUESSES (nodes remain independent but start at given value)
    for (auto& kv : user_initials_) {
        const std::string& name = kv.first;
        double val = kv.second;
        int idx = symtab->find(name);
        if (idx == -1) {
            idx = symtab->addSymbol(name, true /* independent */, val);
        } else {
            // Only set initial guess if node is not fixed
            if (!symtab->isFixed(idx)) {
                symtab->setInitialValue(idx, val, true, false);
                symtab->setValue(idx, val);
            } else {
                std::cout << "Warning: Ignoring initial guess for fixed node '" << name << "'" << std::endl;
            }
        }
    }
    
    module_data_[mod->name].symtab = symtab;
    return true;
}

void VerilogAParser::collectAssignmentsFromStatements(const std::vector<AnalogStmtPtr>& stmts, std::vector<std::shared_ptr<AnalogAssign>>& assigns) {
    for (const auto& stmt : stmts) {
        if (auto assign = std::dynamic_pointer_cast<AnalogAssign>(stmt)) {
            assigns.push_back(assign);
        } else if (auto ifStmt = std::dynamic_pointer_cast<AnalogIf>(stmt)) {
            //recursively collect from then branch
            collectAssignmentsFromStatements(ifStmt->thenStmts, assigns);
            //recursively collect from else branch  
            collectAssignmentsFromStatements(ifStmt->elseStmts, assigns);
        } else if (auto blockStmt = std::dynamic_pointer_cast<AnalogBlockStmt>(stmt)) {
            //recursively collect from nested block
            collectAssignmentsFromStatements(blockStmt->stmts, assigns);
        }
    }
}
bool VerilogAParser::buildJacobianForModule(const std::shared_ptr<ModuleDecl>& mod) {
    auto& data = module_data_[mod->name];
    if (!data.symtab) {
        setError("Symbol table not built for module: " + mod->name);
        return false;
    }
    
    //build current node values from user initials and symbol table
    std::vector<double> currentNodeValues(data.symtab->size(), 0.0);//Default to 0
    for (int i = 0; i < data.symtab->size(); ++i) {
        const Symbol& sym = (*data.symtab)[i];
        double value = 0.0;
        
        if (sym.isFixed) {
            value = sym.value;
        } else if (sym.initialFromUser) {
            value = sym.initialValue;
        } else if (sym.hasInitial) {
            value = sym.initialValue;
        } else {
            value = sym.value;
        }
        
        currentNodeValues[i] = value;
    }
    //collect all statements from all analog blocks
    std::vector<AnalogStmtPtr> allStatements;
    for (auto& analog_block : mod->analog_blocks) {
        if (analog_block) {
            for (auto& stmt : analog_block->stmts) {
                allStatements.push_back(stmt);
            }
        }
    }
    
    if (allStatements.empty()) {
        setError("No analog statements found in module: " + mod->name);
        return false;
    }
    
    //use ASTPreprocessor to get active assignments based on current node values
    ASTPreprocessor preprocessor(*data.symtab);
    auto activeAssigns = preprocessor.processAST(allStatements, currentNodeValues);

    //create Jacobian builder with the preprocessed active assignments
    data.jacobian_builder = std::make_shared<JacobianBuilder>(*data.symtab, activeAssigns);
    data.jacobian_builder->buildIfNeeded();
    
    //initialize current values
    auto indepIdx = data.symtab->independentIndices();
    data.current_values.resize(indepIdx.size());
    for (size_t i = 0; i < indepIdx.size(); ++i) {
        int sidx = indepIdx[i];
        const Symbol& S = (*data.symtab)[sidx];
        
        if (S.initialFromUser) {
            data.current_values[i] = S.initialValue;
        } else if (S.hasInitial) {
            data.current_values[i] = S.initialValue;
        } else {
            data.current_values[i] = S.value;
        }
    }
    
    return true;
}

std::shared_ptr<SymbolTable> VerilogAParser::getSymbolTable(const std::string& moduleName) const {
    auto it = module_data_.find(moduleName);
    if (it != module_data_.end()) {
        return it->second.symtab;
    }
    return nullptr;
}

std::shared_ptr<JacobianBuilder> VerilogAParser::getJacobianBuilder(const std::string& moduleName) const {
    auto it = module_data_.find(moduleName);
    if (it != module_data_.end()) {
        return it->second.jacobian_builder;
    }
    return nullptr;
}

std::vector<std::string> VerilogAParser::getModuleNames() const {//get name of all modules in the file
    std::vector<std::string> names;
    for (const auto& mod : modules_) {
        names.push_back(mod->name);
    }
    return names;
}

void VerilogAParser::setUserInitials(const std::unordered_map<std::string, double>& initials) {
    user_initials_ = initials;
}

bool VerilogAParser::evaluateModule(const std::string& moduleName, std::vector<double>& residuals, std::vector<double>& jacobian_flat) {
    clearError();
    
    auto it = module_data_.find(moduleName);
    if (it == module_data_.end()) {
        setError("No module1: " + moduleName);
        return false;
    }
    
    auto& data = it->second;
    if (!data.jacobian_builder) {
        setError("No module2: " + moduleName);
        return false;
    }
    
    try {
        std::vector<double> prevValues(data.symtab->size(), 0.0);
        double t = 0.0;//add time setting
        double dt = 1e-6;
        
        data.jacobian_builder->evaluate(t, dt, prevValues, residuals, jacobian_flat);
        return true;
        
    } catch (const std::exception& e) {
        setError("Evaluation error: " + std::string(e.what()));
        return false;
    }
}



std::vector<double> VerilogAParser::getCurrentValues(const std::string& moduleName) const {
    auto it = module_data_.find(moduleName);
    if (it != module_data_.end()) {
        return it->second.current_values;
    }
    return {};
}

void VerilogAParser::printAST(std::ostream& os) const {//print ast, disciplines and natures
    for (auto& m : modules_) {
        m->dump(os, 0);
    }
    os << "Disciplines:\n";
    for (auto& d : disciplines_) {
        if (d) d->dump(os, 0);
    }
    os << "Natures:\n";
    for (auto& n : natures_) {
        if (n) n->dump(os, 0);
    }
}

void VerilogAParser::printSymbolTable(const std::string& moduleName, std::ostream& os) const {
    auto symtab = getSymbolTable(moduleName);
    if (symtab) {
        auto indep = symtab->independentIndices();
        for (size_t i = 0; i < indep.size(); ++i) {
            int idx = indep[i];
            const Symbol& s = (*symtab)[idx];
            os << "var " << i << " -> symbol index " << idx << " name=" << s.name 
               << " value=" << s.value << " initial=" << s.initialValue 
               << (s.initialFromUser ? " (user)" : (s.hasInitial ? " (source)" : "")) << "\n";
        }
    }
}

void VerilogAParser::setError(const std::string& message) {
    error_message_ = message;
    std::cerr << "VerilogAParser Error: " << message << std::endl;
}