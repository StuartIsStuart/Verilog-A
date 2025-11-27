#ifndef AST_PREPROCESSOR_H
#define AST_PREPROCESSOR_H

#include "ast.h"
#include "symbol_table.h"
#include <unordered_map>
#include <vector>

class ASTPreprocessor {
private:
    SymbolTable& symbolTable;
    std::unordered_map<std::string, ExprPtr> variableExprs;  //stores variable assignments as AST
    std::vector<double> currentNodeValues;  //current nodal voltages/branch currents
    
public:
    ASTPreprocessor(SymbolTable& symtab);
    
    //main processing function
    std::vector<std::shared_ptr<AnalogAssign>> processAST(
        const std::vector<AnalogStmtPtr>& statements,
        const std::vector<double>& nodeValues);
    
    //get the current variable expressions (for debugging)
    const std::unordered_map<std::string, ExprPtr>& getVariableExprs() const { 
        return variableExprs; 
    }

private:
    //process individual statement types
    void processStatement(const AnalogStmtPtr& stmt, 
                         std::vector<std::shared_ptr<AnalogAssign>>& activeAssigns);
    
    void processVarAssign(std::shared_ptr<VarAssign> assign);
    void processAnalogAssign(std::shared_ptr<AnalogAssign> assign,
                            std::vector<std::shared_ptr<AnalogAssign>>& activeAssigns);
    void processIfStatement(std::shared_ptr<AnalogIf> ifStmt,
                           std::vector<std::shared_ptr<AnalogAssign>>& activeAssigns);
    void processBlock(std::shared_ptr<AnalogBlockStmt> block,
                     std::vector<std::shared_ptr<AnalogAssign>>& activeAssigns);
    
    //expression evaluation for conditionals
    double evaluateCondition(const ExprPtr& condition);
    double evaluateExpression(const ExprPtr& expr);
    
    //helper to substitute variables in expressions
    ExprPtr substituteVariables(const ExprPtr& expr);
};

#endif