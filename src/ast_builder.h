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
    std::vector<std::shared_ptr<AnalogAssign>> analog_assigns;
    std::vector<std::shared_ptr<DisciplineDecl>> disciplines;
    std::vector<std::shared_ptr<NatureDecl>> natures;

    // existing methods you had:
    virtual antlrcpp::Any visitModule_declaration(VerilogParser::Module_declarationContext *ctx) override;
    virtual antlrcpp::Any visitAnalog_assignment(VerilogParser::Analog_assignmentContext *ctx) override;
    virtual antlrcpp::Any visitAnalog_construct(VerilogParser::Analog_constructContext *ctx) override;
    virtual antlrcpp::Any visitDiscipline_declaration(VerilogParser::Discipline_declarationContext *ctx) override;
    virtual antlrcpp::Any visitNature_declaration(VerilogParser::Nature_declarationContext *ctx) override;

    // Expressions / primaries / function calls
    virtual antlrcpp::Any visitExpression(VerilogParser::ExpressionContext *ctx) override;
    virtual antlrcpp::Any visitPrimary(VerilogParser::PrimaryContext *ctx) override;
    virtual antlrcpp::Any visitFunction_call(VerilogParser::Function_callContext *ctx) override;
    virtual antlrcpp::Any visitParameter_declaration(VerilogParser::Parameter_declarationContext *ctx) override;
    virtual antlrcpp::Any visitElectrical_declaration(VerilogParser::Electrical_declarationContext *ctx) override;

    // small helper to convert returned Any to ExprPtr
    static ExprPtr anyToExpr(const antlrcpp::Any &a) {
    if (!a.has_value()) return nullptr;                // empty Any
    return std::any_cast<ExprPtr>(a);            // extract stored shared_ptr<Expr>
}
};
