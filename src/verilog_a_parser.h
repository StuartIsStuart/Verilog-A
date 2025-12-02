#ifndef VERILOG_A_PARSER_H
#define VERILOG_A_PARSER_H

#include <string>
#include <vector>
#include <memory>
#include <unordered_map>
#include "ast_builder.h"
#include "jacobian_builder.h"
#include "Preprocessor.h"

class VerilogAParser {
public:
    // Constructor
    VerilogAParser();
    
    // Main parsing interface
    bool parseFile(const std::string& filename);
    bool parseString(const std::string& source, const std::string& filename = "input.v");
    
    // Access parsed data
    const std::vector<std::shared_ptr<ModuleDecl>>& getModules() const { return modules_; }
    const std::vector<std::shared_ptr<DisciplineDecl>>& getDisciplines() const { return disciplines_; }
    const std::vector<std::shared_ptr<NatureDecl>>& getNatures() const { return natures_; }
    
    // Symbol table and Jacobian builder for a specific module
    std::shared_ptr<SymbolTable> getSymbolTable(const std::string& moduleName) const;
    std::shared_ptr<JacobianBuilder> getJacobianBuilder(const std::string& moduleName) const;
    std::vector<double> make_X_vector(const std::string& moduleName) const;
    // Get all available module names
    std::vector<std::string> getModuleNames() const;
    
    // Set user initial conditions
    void setUserInitials(const std::unordered_map<std::string, double>& initials);
    
    // Evaluate a specific module
    bool evaluateModule(std::vector<double> x_current, const std::string& moduleName, std::vector<double>& residuals, std::vector<double>& jacobian_flat);

    // Get current variable values for a module
    std::vector<double> getCurrentValues(const std::string& moduleName) const;
    std::vector<std::string> getPorts(const std::string& moduleName);
    // Debug and diagnostic methods
    void printAST(std::ostream& os = std::cout) const;
    void printSymbolTable(const std::string& moduleName, std::ostream& os = std::cout) const;
    bool buildSymbolTableAndJacobianForModule(const std::string& moduleName);
    // Error handling
    bool hasError() const { return !error_message_.empty(); }
    const std::string& getErrorMessage() const { return error_message_; }
    void clearError() { error_message_.clear(); }
    void setUserFixed(const std::unordered_map<std::string, double>& fixed){user_fixed_ = fixed;}
private:
    // Internal state
    std::vector<std::shared_ptr<ModuleDecl>> modules_;
    std::vector<std::shared_ptr<DisciplineDecl>> disciplines_;
    std::vector<std::shared_ptr<NatureDecl>> natures_;
    const std::shared_ptr<ModuleDecl>& getModule(const std::string& moduleName);
    // Per-module data
    struct ModuleData {
        std::shared_ptr<SymbolTable> symtab;
        std::shared_ptr<JacobianBuilder> jacobian_builder;
        std::vector<double> current_values;
    };
    
    std::unordered_map<std::string, ModuleData> module_data_;
    std::unordered_map<std::string, double> user_initials_;
    std::string error_message_;
    std::unordered_map<std::string, double> user_fixed_;
    
    // Internal methods
    bool buildSymbolTableForModule(const std::shared_ptr<ModuleDecl>& mod);
    bool buildJacobianForModule(const std::shared_ptr<ModuleDecl>& mod);
    void setError(const std::string& message);
    void collectAssignmentsFromStatements(const std::vector<AnalogStmtPtr>& stmts, std::vector<std::shared_ptr<AnalogAssign>>& assigns);
};

#endif