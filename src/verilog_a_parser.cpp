#include "verilog_a_parser.h"
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
        
        // Build symbol tables and Jacobian builders for all modules
        for (auto& mod : modules_) {
            if (!buildSymbolTableForModule(mod)) {
                return false;
            }
            if (!buildJacobianForModule(mod)) {
                return false;
            }
        }
        
        return true;
        
    } catch (const std::exception& e) {
        setError("Parsing error: " + std::string(e.what()));
        return false;
    }
}

bool VerilogAParser::buildSymbolTableForModule(const std::shared_ptr<ModuleDecl>& mod) {
    auto symtab = std::make_shared<SymbolTable>();
    for (auto& pname : mod->ports){//add ports as independent solver unknowns
        symtab->addSymbol(pname, true /* independent */, 0.0);
    }
    for (auto& param : mod->params){//add parameters
        symtab->addSymbol(param.name, false /* not independent */, param.value);
        int pidx = symtab->find(param.name);
        if (pidx >= 0) symtab->setInitialValue(pidx, param.value, false, true);
    }
    for (auto& net : mod->electrical_nets){//add electrical nets
        if (symtab->find(net) == -1) {
            symtab->addSymbol(net, true /* independent */, 0.0);
        }
    }
    for (auto& kv : user_initials_) {//Apply user-provided initials
        const std::string& name = kv.first;
        double val = kv.second;
        int idx = symtab->find(name);
        if (idx == -1) {
            idx = symtab->addSymbol(name, true /* independent */, 0.0);
        }
        symtab->setInitialValue(idx, val, true, false);
    }
    
    module_data_[mod->name].symtab = symtab;
    return true;
}

bool VerilogAParser::buildJacobianForModule(const std::shared_ptr<ModuleDecl>& mod) {
    auto& data = module_data_[mod->name];
    if (!data.symtab) {
        setError("Symbol table not built for module: " + mod->name);
        return false;
    }
    
    std::vector<std::shared_ptr<AnalogAssign>> assigns;//get all analog assignments
    if (!mod->analog_blocks.empty()) {
        for (auto& ab : mod->analog_blocks) {
            for (auto& a : ab->assigns) {
                if (a) assigns.push_back(a);
            }
        }
    } else {
        for (auto& a : mod->analog_assigns) {
            if (a) assigns.push_back(a);
        }
    }
    //create Jacobian builder
    data.jacobian_builder = std::make_shared<JacobianBuilder>(*data.symtab, assigns);
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

bool VerilogAParser::evaluateModule(const std::string& moduleName, 
                                   std::vector<double>& residuals,
                                   std::vector<double>& jacobian_flat) {
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
        
        data.jacobian_builder->evaluate(data.current_values, t, dt, prevValues, 
                                       residuals, jacobian_flat);
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