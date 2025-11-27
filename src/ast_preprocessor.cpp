#include "ast_preprocessor.h"
#include <iostream>
#include <cmath>

ASTPreprocessor::ASTPreprocessor(SymbolTable& symtab) 
    : symbolTable(symtab) {
}

std::vector<std::shared_ptr<AnalogAssign>> ASTPreprocessor::processAST(
    const std::vector<AnalogStmtPtr>& statements,
    const std::vector<double>& nodeValues) {
    
    currentNodeValues = nodeValues;
    variableExprs.clear();
    std::vector<std::shared_ptr<AnalogAssign>> activeAssigns;
    
    for (const auto& stmt : statements) {
        processStatement(stmt, activeAssigns);
    }
    
    return activeAssigns;
}

void ASTPreprocessor::processStatement(const AnalogStmtPtr& stmt, 
                                      std::vector<std::shared_ptr<AnalogAssign>>& activeAssigns) {
    if (!stmt) return;
    
    if (auto varAssign = std::dynamic_pointer_cast<VarAssign>(stmt)) {
        processVarAssign(varAssign);
    }
    else if (auto analogAssign = std::dynamic_pointer_cast<AnalogAssign>(stmt)) {
        processAnalogAssign(analogAssign, activeAssigns);
    }
    else if (auto ifStmt = std::dynamic_pointer_cast<AnalogIf>(stmt)) {
        processIfStatement(ifStmt, activeAssigns);
    }
    else if (auto blockStmt = std::dynamic_pointer_cast<AnalogBlockStmt>(stmt)) {
        processBlock(blockStmt, activeAssigns);
    }
    else {
        std::cout << "WARNING: unknown statement type in preprocessor" << std::endl;
    }
}

void ASTPreprocessor::processVarAssign(std::shared_ptr<VarAssign> assign) {
    if (!assign) return;
    //store the expression AST in our variable map
    variableExprs[assign->varName] = assign->expr;
    //also evaluate it numerically for condition checking
    double value = evaluateExpression(assign->expr);
    //update the symbol table if this variable exists there
    int symIdx = symbolTable.find(assign->varName);
    if (symIdx >= 0) {
        symbolTable.setValue(symIdx, value);
    }
}

void ASTPreprocessor::processAnalogAssign(std::shared_ptr<AnalogAssign> assign,
                                         std::vector<std::shared_ptr<AnalogAssign>>& activeAssigns) {
    if (!assign) return;
    
    //std::cout << "Processing analog assignment" << std::endl;
    
    //create a new analog assignment with variables substituted
    auto newAssign = std::make_shared<AnalogAssign>();
    newAssign->lhs = assign->lhs;
    
    //substitute variables in the RHS expression
    if (assign->rhs) {
        newAssign->rhs = substituteVariables(assign->rhs);
    } else {
        newAssign->rhs = assign->rhs;
    }
    
    activeAssigns.push_back(newAssign);
}

void ASTPreprocessor::processIfStatement(std::shared_ptr<AnalogIf> ifStmt,
                                        std::vector<std::shared_ptr<AnalogAssign>>& activeAssigns) {
    if (!ifStmt || !ifStmt->condition) return;
    
    //std::cout << "Processing if statement" << std::endl;
    
    //evaluate the condition
    double conditionValue = evaluateCondition(ifStmt->condition);
    //std::cout << "  Condition value: " << conditionValue << std::endl;
    
    //save current variable state BEFORE the conditional
    auto variablesBeforeConditional = variableExprs;
    
    //process the appropriate branch
    if (conditionValue != 0.0) {
        //std::cout << "  Taking THEN branch (" << ifStmt->thenStmts.size() << " statements)" << std::endl;
        for (const auto& stmt : ifStmt->thenStmts) {
            processStatement(stmt, activeAssigns);
        }
    } else {
        //std::cout << "  Taking ELSE branch (" << ifStmt->elseStmts.size() << " statements)" << std::endl;
        for (const auto& stmt : ifStmt->elseStmts) {
            processStatement(stmt, activeAssigns);
        }
    }
}

void ASTPreprocessor::processBlock(std::shared_ptr<AnalogBlockStmt> block,
                                  std::vector<std::shared_ptr<AnalogAssign>>& activeAssigns) {
    if (!block) return;
    
    
    for (const auto& stmt : block->stmts) {
        processStatement(stmt, activeAssigns);
    }
}



double ASTPreprocessor::evaluateCondition(const ExprPtr& condition) {
    return evaluateExpression(condition);
}

double ASTPreprocessor::evaluateExpression(const ExprPtr& expr) {
    if (!expr) return 0.0;
    
    //handle V(a,b) function calls - voltage difference
    if (auto fc = std::dynamic_pointer_cast<FunctionCallExpr>(expr)) {
        std::string fname = fc->name;
        
        if (fname == "v" || fname == "V") {
            if (fc->args.size() == 1) {
                //V(a) - single node voltage
                auto node = std::dynamic_pointer_cast<IdentifierExpr>(fc->args[0]);
                if (node) {
                    int symIdx = symbolTable.find(node->name);
                    if (symIdx >= 0 && symIdx < currentNodeValues.size()) {
                        double value = currentNodeValues[symIdx];
                        return value;
                    }
                }
            }
            else if (fc->args.size() >= 2) {
                //V(a,b) - voltage difference
                auto nodeA = std::dynamic_pointer_cast<IdentifierExpr>(fc->args[0]);
                auto nodeB = std::dynamic_pointer_cast<IdentifierExpr>(fc->args[1]);
                if (nodeA && nodeB) {
                    int symIdxA = symbolTable.find(nodeA->name);
                    int symIdxB = symbolTable.find(nodeB->name);
                    
                    if (symIdxA >= 0 && symIdxB >= 0 && 
                        symIdxA < currentNodeValues.size() && 
                        symIdxB < currentNodeValues.size()) {
                        double va = currentNodeValues[symIdxA];
                        double vb = currentNodeValues[symIdxB];
                        double result = va - vb;
                        return result;
                    } else {
                        std::cout << "WARNING: Invalid indices for V(" << nodeA->name << "," << nodeB->name << ")" << std::endl;
                    }
                }
            }
            return 0.0;
        }
    }
    //Number expression
    if (auto num = std::dynamic_pointer_cast<NumberExpr>(expr)) {
        return num->value;
    }
    
    // dentifier expression - look up in symbol table or variable map
    if (auto id = std::dynamic_pointer_cast<IdentifierExpr>(expr)) {
        //check if it's a variable we've defined
        auto varIt = variableExprs.find(id->name);
        if (varIt != variableExprs.end()) {
            //recursively evaluate the variable's expression
            return evaluateExpression(varIt->second);
        }
        
        //check symbol table
        int symIdx = symbolTable.find(id->name);
        if (symIdx >= 0) {
            return symbolTable[symIdx].value;
        }
        return 0.0;
    }
    
    //Binary expressions
    if (auto be = std::dynamic_pointer_cast<BinaryExpr>(expr)) {
        double left = evaluateExpression(be->left);
        double right = evaluateExpression(be->right);
        
        if (be->op == "+") return left + right;
        if (be->op == "-") return left - right;
        if (be->op == "*") return left * right;
        if (be->op == "/") return right != 0 ? left / right : 0.0;
        if (be->op == "**") return std::pow(left, right);
        
        // Comparison operators
        if (be->op == ">") return left > right ? 1.0 : 0.0;
        if (be->op == ">=") return left >= right ? 1.0 : 0.0;
        if (be->op == "<") return left < right ? 1.0 : 0.0;
        if (be->op == "<=") return left <= right ? 1.0 : 0.0;
        if (be->op == "==") return left == right ? 1.0 : 0.0;
        if (be->op == "!=") return left != right ? 1.0 : 0.0;
        
        std::cout << "  Warning: Unknown binary operator '" << be->op << "'" << std::endl;
        return 0.0;
    }
    
    //Unary expressions
    if (auto ue = std::dynamic_pointer_cast<UnaryExpr>(expr)) {
        double operand = evaluateExpression(ue->operand);
        
        if (ue->op == "+") return operand;
        if (ue->op == "-") return -operand;
        if (ue->op == "!") return operand == 0.0 ? 1.0 : 0.0;
        
        std::cout << "  Warning: Unknown unary operator '" << ue->op << "'" << std::endl;
        return 0.0;
    }
    
    //return 0 for other expression types (fail case)
    std::cout << "  Warning: Unhandled expression type in evaluation" << std::endl;
    return 0.0;
}

ExprPtr ASTPreprocessor::substituteVariables(const ExprPtr& expr) {
    if (!expr) return expr;
    
    //base case: if this is a variable reference, substitute it
    if (auto id = std::dynamic_pointer_cast<IdentifierExpr>(expr)) {
        auto it = variableExprs.find(id->name);
        if (it != variableExprs.end()){
            return it->second;  //return the stored expression AST
        }
    }
    
    //recursive cases for compound expressions
    if (auto be = std::dynamic_pointer_cast<BinaryExpr>(expr)) {
        auto newLeft = substituteVariables(be->left);
        auto newRight = substituteVariables(be->right);
        return std::make_shared<BinaryExpr>(be->op, newLeft, newRight);
    }
    
    if (auto ue = std::dynamic_pointer_cast<UnaryExpr>(expr)) {
        auto newOperand = substituteVariables(ue->operand);
        return std::make_shared<UnaryExpr>(ue->op, newOperand);
    }
    
    if (auto fc = std::dynamic_pointer_cast<FunctionCallExpr>(expr)) {
        auto newFc = std::make_shared<FunctionCallExpr>(fc->name);
        for (auto& arg : fc->args) {
            newFc->args.push_back(substituteVariables(arg));
        }
        return newFc;
    }
    
    if (auto te = std::dynamic_pointer_cast<TernaryExpr>(expr)) {
        auto newCond = substituteVariables(te->cond);
        auto newTrue = substituteVariables(te->ifTrue);
        auto newFalse = substituteVariables(te->ifFalse);
        return std::make_shared<TernaryExpr>(newCond, newTrue, newFalse);
    }
    
    //for NumberExpr, just return it
    return expr;
}