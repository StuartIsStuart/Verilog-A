#pragma once
#include "ast.h"
#include <memory>
#include <vector>
#include <string>
#include "antlr4-runtime.h"
#include "VerilogParser.h"
#include "VerilogParserBaseVisitor.h"

class ASTBuilder : public VerilogParserBaseVisitor {
public:
    std::vector<std::shared_ptr<ModuleDecl>> modules;
    //std::vector<std::shared_ptr<AnalogAssign>> analog_assigns; // Keep for backward compat
    std::vector<std::shared_ptr<DisciplineDecl>> disciplines;
    std::vector<std::shared_ptr<NatureDecl>> natures;

    virtual antlrcpp::Any visitConditional_statement(VerilogParser::Conditional_statementContext *ctx) override;
    virtual antlrcpp::Any visitSeq_block(VerilogParser::Seq_blockContext *ctx) override;
    virtual antlrcpp::Any visitStatement(VerilogParser::StatementContext *ctx) override;
    virtual antlrcpp::Any visitStatement_or_null(VerilogParser::Statement_or_nullContext *ctx) override;

    virtual antlrcpp::Any visitModule_declaration(VerilogParser::Module_declarationContext *ctx) override;
    virtual antlrcpp::Any visitAnalog_assignment(VerilogParser::Analog_assignmentContext *ctx) override;
    virtual antlrcpp::Any visitAnalog_construct(VerilogParser::Analog_constructContext *ctx) override;
    virtual antlrcpp::Any visitDiscipline_declaration(VerilogParser::Discipline_declarationContext *ctx) override;
    virtual antlrcpp::Any visitNature_declaration(VerilogParser::Nature_declarationContext *ctx) override;
    virtual antlrcpp::Any visitExpression(VerilogParser::ExpressionContext *ctx) override;
    virtual antlrcpp::Any visitPrimary(VerilogParser::PrimaryContext *ctx) override;
    virtual antlrcpp::Any visitFunction_call(VerilogParser::Function_callContext *ctx) override;
    virtual antlrcpp::Any visitParameter_declaration(VerilogParser::Parameter_declarationContext *ctx) override;
    virtual antlrcpp::Any visitElectrical_declaration(VerilogParser::Electrical_declarationContext *ctx) override;
    virtual antlrcpp::Any visitBlocking_assignment(VerilogParser::Blocking_assignmentContext *ctx) override;
    virtual antlrcpp::Any visitNonblocking_assignment(VerilogParser::Nonblocking_assignmentContext *ctx) override;
    virtual antlrcpp::Any visitVariable_assignment(VerilogParser::Variable_assignmentContext *ctx) override;
    virtual antlrcpp::Any visitReal_declaration(VerilogParser::Real_declarationContext *ctx) override;
    // Helper methods
    static ExprPtr anyToExpr(const antlrcpp::Any &a);
    static AnalogStmtPtr anyToStmt(const antlrcpp::Any &a);

private:
    std::vector<AnalogStmtPtr> currentStmtList; //stack for nested statements
    ExprPtr currentCondition = nullptr;
    bool inThenBranch = true;
    std::stack<std::pair<ExprPtr, bool>> conditionStack;
    std::string extractVariableName(VerilogParser::Variable_lvalueContext *ctx);
    std::vector<std::shared_ptr<VarAssign>> currentVarAssigns;

};