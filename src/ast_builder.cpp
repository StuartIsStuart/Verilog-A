#include "ast_builder.h"
#include <regex>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <any>

using namespace antlrcpp;
using namespace antlr4;
// simple unit multiplier mapping (expand as needed)

std::shared_ptr<AnalogBlock> currentAnalogBlock = nullptr;

std::shared_ptr<ModuleDecl> currentModule;
std::string ASTBuilder::extractVariableName(VerilogParser::Variable_lvalueContext *ctx) {
    if (!ctx) return "";
    
    // Handle hierarchical_identifier case
    if (ctx->hierarchical_identifier()) {
        return ctx->hierarchical_identifier()->getText();
    }
    
    // Handle the concatenation case - in the grammar, it's '{' variable_lvalue (',' variable_lvalue)* '}'
    // We'll just take the first one for simplicity
    if (!ctx->variable_lvalue().empty()) {
        return extractVariableName(ctx->variable_lvalue(0));
    }
    
    return "";
}

antlrcpp::Any ASTBuilder::visitReal_declaration(VerilogParser::Real_declarationContext *ctx) {
    // The grammar for real_type is:
    // real_identifier dimension* | real_identifier '=' constant_expression
    
    if (ctx->list_of_real_identifiers()) {
        auto list = ctx->list_of_real_identifiers();
        for (auto realType : list->real_type()) {
            std::string varName = realType->real_identifier()->getText();
            
            // Check if there's an initializer by looking for '=' in the children
            bool hasInitializer = false;
            ExprPtr initExpr = nullptr;
            
            for (size_t i = 0; i < realType->children.size(); ++i) {
                if (realType->children[i]->getText() == "=") {
                    hasInitializer = true;
                    // The next child should be the expression
                    if (i + 1 < realType->children.size()) {
                        auto exprAny = visit(realType->children[i + 1]);
                        initExpr = anyToExpr(exprAny);
                    }
                    break;
                }
            }
            
            if (hasInitializer && initExpr) {
                auto varAssign = std::make_shared<VarAssign>();
                varAssign->varName = varName;
                varAssign->expr = initExpr;
                currentVarAssigns.push_back(varAssign);
            }
        }
    }
    
    return visitChildren(ctx);
}

antlrcpp::Any ASTBuilder::visitBlocking_assignment(VerilogParser::Blocking_assignmentContext *ctx) {
    auto varAssign = std::make_shared<VarAssign>();
    varAssign->varName = extractVariableName(ctx->variable_lvalue());
    if (ctx->expression()) {
        auto exprAny = visit(ctx->expression());
        varAssign->expr = anyToExpr(exprAny);
    }
    
    currentVarAssigns.push_back(varAssign);
    return antlrcpp::Any(static_cast<AnalogStmtPtr>(varAssign));
}

antlrcpp::Any ASTBuilder::visitNonblocking_assignment(VerilogParser::Nonblocking_assignmentContext *ctx) {
    // Nonblocking assignment: variable_lvalue '<=' delay_or_event_control? expression
    // For analog blocks, we'll treat nonblocking the same as blocking
    auto varAssign = std::make_shared<VarAssign>();
    
    varAssign->varName = extractVariableName(ctx->variable_lvalue());
    
    if (ctx->expression()) {
        auto exprAny = visit(ctx->expression());
        varAssign->expr = anyToExpr(exprAny);
    }
    
    currentVarAssigns.push_back(varAssign);
    
    return antlrcpp::Any(static_cast<AnalogStmtPtr>(varAssign));
}

antlrcpp::Any ASTBuilder::visitVariable_assignment(VerilogParser::Variable_assignmentContext *ctx) {
    // This method might not be needed if the grammar doesn't use this rule
    // For now, just visit children
    return visitChildren(ctx);
}

static double applyUnitMultiplier(double value, const std::optional<std::string> &unitOpt) {
  if (!unitOpt) return value;
  std::string u = *unitOpt;
  std::transform(u.begin(), u.end(), u.begin(), ::tolower);
  if (u == "k"  || u == "kf"  || u == "kilo")  return value * 1e3;
  if (u == "meg"|| u == "m" /*if you want meg*/)  return value * 1e6;
  if (u == "m"  ) return value * 1e-3;
  if (u == "u" || u == "µ") return value * 1e-6;
  if (u == "n") return value * 1e-9;
  if (u == "p") return value * 1e-12;
  if (u == "g") return value * 1e9;
  // fallback: unknown suffix -> no scaling
  return value;
}

antlrcpp::Any ASTBuilder::visitAnalog_construct(VerilogParser::Analog_constructContext *ctx) {
    auto block = std::make_shared<AnalogBlock>();
    
    if (currentModule) {
        currentModule->analog_blocks.push_back(block);
    }

    // Clear current variable assignments before processing this block
    currentVarAssigns.clear();
    
    // Set as current analog block
    auto prev = currentAnalogBlock;
    currentAnalogBlock = block;

    // Visit the statement (which could be a seq_block containing multiple statements)
    if (ctx->statement()) {
        auto stmtAny = visit(ctx->statement());
        AnalogStmtPtr stmt = anyToStmt(stmtAny);
        if (stmt) {
            // If it's a block statement, extract its statements
            if (auto blockStmt = std::dynamic_pointer_cast<AnalogBlockStmt>(stmt)) {
                block->stmts = blockStmt->stmts;
            } else {
                // Single statement
                block->stmts.push_back(stmt);
            }
        }
    }
    
    // DON'T add currentVarAssigns here - they're already collected through the normal visitor pattern
    // The blocking_assignment visitor already returns the VarAssign node which gets added to the block

    // Restore previous analog block
    currentAnalogBlock = prev;
    return antlrcpp::Any(block);
}

// -- helper to trim
static inline std::string trim(const std::string &s) {
    auto l = s.find_first_not_of(" \t\n\r");
    if (l == std::string::npos) return "";
    auto r = s.find_last_not_of(" \t\n\r");
    return s.substr(l, r - l + 1);
}

// parse a numeric token containing optional unit suffix (like 1k, 3.3e-6, 1e3u, 2.2M)
static std::pair<double, std::optional<std::string>> parseNumberWithUnit(const std::string &text) {
    // regex: capture number part, optional unit letters afterwards
    static const std::regex re(R"(^([+-]?[0-9]*\.?[0-9]+(?:[eE][+-]?[0-9]+)?)([a-zA-Z]+)?$)");
    std::smatch m;
    if (std::regex_match(text, m, re)) {
        std::string num = m[1].str();
        std::string uni;
        if (m.size() >= 3 && m[2].matched) uni = m[2].str();
        double val = 0.0;
        try {
            val = std::stod(num);
        } catch (...) {
            val = 0.0;
        }
        if (!uni.empty()) return { val, std::optional<std::string>(uni) };
        return { val, std::nullopt };
    }
    try {
        double v = std::stod(text);
        return { v, std::nullopt };
    } catch (...) {
        return { 0.0, std::nullopt };
    }
}

// ------------------- visitor implementations -------------------

antlrcpp::Any ASTBuilder::visitModule_declaration(VerilogParser::Module_declarationContext *ctx) {
    auto mod = std::make_shared<ModuleDecl>();
    //std::cerr << "visitModule_declaration: children=" << ctx->children.size()
    //          << " module_item_count=" << ctx->module_item().size()
    //          << " text=" << ctx->getText().substr(0,120) << "\n";
    if (ctx->module_identifier()) mod->name = ctx->module_identifier()->getText();

    if (ctx->list_of_port_declarations()) {
        std::string txt = ctx->list_of_port_declarations()->getText();
        if (!txt.empty() && txt.front() == '(' && txt.back() == ')') txt = txt.substr(1, txt.size()-2);
        std::stringstream ss(txt);
        std::string tok;
        while (std::getline(ss, tok, ',')) {
            std::string t = trim(tok);
            if (!t.empty()) mod->ports.push_back(t);
        }
    }

    // push module and make it current while we visit children
    modules.push_back(mod);
    currentModule = mod;

    // Important: descend into the module's children so nested visitors run
    // Option A: let the base visitor handle the descent:
    visitChildren(ctx);

    // Option B (alternative): explicitly visit each module_item
    // for (auto mi : ctx->module_item()) visit(mi);

    // finished with this module
    currentModule = nullptr;

    return antlrcpp::Any(mod);
}

antlrcpp::Any ASTBuilder::visitAnalog_assignment(VerilogParser::Analog_assignmentContext *ctx) {
    //ASSIGNMENT: function_ call '<+' delay_or_event_control? expression
    // LHS is function_call, RHS is expression
    //std::cerr << "ANALOG: " << ctx->getText().substr(0,80) << "\n";

    auto lhs_any = visit(ctx->function_call());
    auto lhs_ptr_any = lhs_any;
    std::shared_ptr<FunctionCallExpr> lhs = nullptr;
    if (lhs_any.has_value()) {
        // the visitFunction_call returns a FunctionCallExpr pointer (wrapped as ExprPtr)
        ExprPtr e = anyToExpr(lhs_any);
        lhs = std::dynamic_pointer_cast<FunctionCallExpr>(e);
    }

    ExprPtr rhs = nullptr;
    if (ctx->expression()) {
        auto a = visit(ctx->expression());
        rhs = anyToExpr(a);
    }
    auto assign = std::make_shared<AnalogAssign>();
    assign->lhs = lhs;
    assign->rhs = rhs;
    
    if (currentAnalogBlock) {
        // Add to current analog block's statements
        currentAnalogBlock->stmts.push_back(assign);
    } else if (currentModule && !currentModule->analog_blocks.empty()) {
        // Add to the last analog block in the module
        currentModule->analog_blocks.back()->stmts.push_back(assign);
    } else {
        // Create a new analog block and add it
        auto block = std::make_shared<AnalogBlock>();
        block->stmts.push_back(assign);
        if (currentModule) {
            currentModule->analog_blocks.push_back(block);
        }
        // If no current module, we can't do much - idk maybe log a warning
        // std::cerr << "Warning: analog assignment outside module context\n";
    }
    
    //std::cerr << "[ASTBuilder] captured analog assignment:\n";
    //assign->dump(std::cerr, 2);
    
    return antlrcpp::Any(static_cast<AnalogStmtPtr>(assign));
}

antlrcpp::Any ASTBuilder::visitFunction_call(VerilogParser::Function_callContext *ctx) {
    // grammar: hierarchical_identifier attribute_instance* '(' expression (',' expression)* ')'
    std::string name = "<fn>";
    if (ctx->hierarchical_identifier()) name = ctx->hierarchical_identifier()->getText();

    auto f = std::make_shared<FunctionCallExpr>(name);

    // arguments: expression (',' expression)* -- check ctx->expression() vector
    for (auto exprCtx : ctx->expression()) {
        auto a = visit(exprCtx);
        ExprPtr ep = anyToExpr(a);
        f->args.push_back(ep);
    }

    // return as ExprPtr so callers get ExprPtr
    return antlrcpp::Any(static_cast<ExprPtr>(f));
}

antlrcpp::Any ASTBuilder::visitPrimary(VerilogParser::PrimaryContext *ctx) {
    // primary:
    //  number
    //  | hierarchical_identifier select_?
    //  | concatenation
    //  | multiple_concatenation
    //  | function_call
    //  | system_function_call
    //  | '(' mintypmax_expression ')'
    //  | string_
    //std::cerr << "PRIMARY: " << ctx->getText().substr(0,80) << "\n";
    if (ctx->number()) {
        std::string t = ctx->number()->getText();
        auto pr = std::make_shared<NumberExpr>(0.0);
        pr->original_text = t;
        auto [val, unitOpt] = parseNumberWithUnit(t);
        pr->value = val;
        pr->raw_unit = unitOpt;
        return antlrcpp::Any(static_cast<ExprPtr>(pr));
    }
    if (ctx->hierarchical_identifier()) {
        std::string id = ctx->hierarchical_identifier()->getText();
        auto idn = std::make_shared<IdentifierExpr>(id);
        return antlrcpp::Any(static_cast<ExprPtr>(idn));
    }
    if (ctx->function_call()) {
        return visitFunction_call(ctx->function_call());
    }
    if (ctx->string_()) {
        std::string s = ctx->string_()->getText();
        // remove surrounding quotes if present
        if (!s.empty() && s.front() == '"' && s.back() == '"') s = s.substr(1, s.size()-2);
        auto se = std::make_shared<StringExpr>(s);
        return antlrcpp::Any(static_cast<ExprPtr>(se));
    }
    // parenthesized expression: '(' mintypmax_expression ')'
    if (ctx->children.size() >= 3 && ctx->children[0]->getText() == "(") {
        // mintypmax_expression contains an expression at least; try first expression child
        auto childExpr = ctx->mintypmax_expression();
        if (childExpr) {
            // mintypmax_expression -> expression (':' expression ':' expression)?
            auto exprVec = childExpr->expression();
            if (!exprVec.empty()) {
                auto e_any = visit(exprVec[0]);
                ExprPtr e = anyToExpr(e_any);
                return e;
            }
        }
    }

    // fallback: return null
    return antlrcpp::Any();
}

antlrcpp::Any ASTBuilder::visitExpression(VerilogParser::ExpressionContext *ctx) {
    // handle primary
    //std::cerr << "Expression: " << ctx->getText().substr(0,80) << "\n";
    if (ctx->primary()) return visitPrimary(ctx->primary());

    // unary: unary_operator attribute_instance* primary
    if (ctx->unary_operator()) {
        std::string op = ctx->unary_operator()->getText();
        // operand usually is primary (per grammar) or possibly expression child
        if (ctx->primary()) {
            auto opnd = visitPrimary(ctx->primary());
            return antlrcpp::Any(anyToExpr(opnd) ? anyToExpr(opnd) : ExprPtr());
        } else if (!ctx->expression().empty()) {
            auto e = visit(ctx->expression(0));
            ExprPtr ep = anyToExpr(e);
            auto ue = std::make_shared<UnaryExpr>(op, ep);
            return antlrcpp::Any(static_cast<ExprPtr>(ue));
        }
    }

    // ternary: expression '?' attribute_instance* expression ':' expression
    if (ctx->getText().find('?') != std::string::npos) {
        // grammar guarantees expression children count == 3
        if (ctx->expression().size() == 3) {
            ExprPtr cond = anyToExpr(visit(ctx->expression(0)));
            ExprPtr t = anyToExpr(visit(ctx->expression(1)));
            ExprPtr f = anyToExpr(visit(ctx->expression(2)));
            auto te = std::make_shared<TernaryExpr>(cond, t, f);
            return antlrcpp::Any(static_cast<ExprPtr>(te));
        }
    }

    // binary: expression op expression  (two expression children)
    if (ctx->expression().size() == 2) {
        ExprPtr left = anyToExpr(visit(ctx->expression(0)));
        ExprPtr right = anyToExpr(visit(ctx->expression(1)));

        // find operator token between them by scanning children
        std::string op;
        for (size_t i = 0; i < ctx->children.size(); ++i) {
            auto child = ctx->children[i];
            // terminal node?
            if (auto tnode = dynamic_cast<antlr4::tree::TerminalNode*>(child)) {
                std::string txt = tnode->getText();
                // a pragmatic operator set (expand if you need more)
                static const std::vector<std::string> ops = {
                    "**", "*", "/", "%", "+", "-", ">>", "<<", ">>>", "<<<",
                    "<", "<=", ">", ">=", "==", "!=", "===", "!==",
                    "&", "^", "^~", "~^", "|", "&&", "||"
                };
                auto it = std::find(ops.begin(), ops.end(), txt);
                if (it != ops.end()) { op = txt; break; }
            }
        }

        if (op.empty()) {
            // fallback: pick the middle child (best-effort)
            if (ctx->children.size() >= 3) op = ctx->children[1]->getText();
        }

        auto be = std::make_shared<BinaryExpr>(op, left, right);
        return antlrcpp::Any(static_cast<ExprPtr>(be));
    }

    // fallback: if single expression child, return it
    if (ctx->expression().size() == 1) {
        return visit(ctx->expression(0));
    }

    // last resort
    return antlrcpp::Any();
}
antlrcpp::Any ASTBuilder::visitParameter_declaration(VerilogParser::Parameter_declarationContext *ctx) {
  if (!ctx) return visitChildren(ctx);

  auto listNode = ctx->list_of_param_assignments();
  if (!listNode) return visitChildren(ctx);

  // regex to find a numeric token plus optional letters (e.g. "1k", "3.3e-6", "10meg")
  static const std::regex numTokenRe(R"(([+\-]?[0-9]*\.?[0-9]+(?:[eE][+\-]?[0-9]+)?[a-zA-Z]*))");

  for (auto pa : listNode->param_assignment()) {
    if (!pa) continue;

    // get the raw text of the param assignment and split around '='
    std::string paText = pa->getText(); // e.g. "R=1k" or "R = 1k"
    auto eqpos = paText.find('=');
    std::string pname = trim(eqpos == std::string::npos ? paText : paText.substr(0, eqpos));
    std::string rhs   = trim(eqpos == std::string::npos ? std::string() : paText.substr(eqpos + 1));

    double pval = 0.0;
    std::optional<std::string> unit;
    std::string raw;

    // try to extract the first numeric token from the RHS
    std::smatch m;
    if (std::regex_search(rhs, m, numTokenRe)) {
      raw = m[1].str();
      auto [v, u] = parseNumberWithUnit(raw);
      pval = applyUnitMultiplier(v, u);
      unit = u;
    } else {
      // no numeric literal found — you can optionally try to evaluate expressions
      // or leave the parameter at default 0.0 and keep raw empty
      // std::cerr << "[ASTBuilder] parameter RHS not numeric: " << rhs << "\n";
    }

    // push into current module if available
    ParamDecl pd;
    pd.name = pname;
    pd.value = pval;
    pd.unit = unit;
    pd.raw_text = raw;
    if (currentModule) currentModule->params.push_back(pd);
    else std::cerr << "[ASTBuilder] parameter without current module: " << pname << "\n";
  }

  return visitChildren(ctx);
}


antlrcpp::Any ASTBuilder::visitElectrical_declaration(VerilogParser::Electrical_declarationContext *ctx) {
  // grammar: 'electrical' list_of_port_identifiers ';'
  if (!ctx) return visitChildren(ctx);

  auto list = ctx->list_of_port_identifiers();
  if (!list) return visitChildren(ctx);

  // list_of_port_identifiers -> port_identifier (',' port_identifier)*
  for (auto pid : list->port_identifier()) {
    if (!pid) continue;
    std::string name = pid->getText();
    if (currentModule) currentModule->electrical_nets.push_back(name);
    else std::cerr << "warning: electrical decl without current module: " << name << "\n";
  }

  return visitChildren(ctx);
}

antlrcpp::Any ASTBuilder::visitDiscipline_declaration(VerilogParser::Discipline_declarationContext *ctx) {
  auto d = std::make_shared<DisciplineDecl>();
  if (ctx->discipline_name() && ctx->discipline_name()->getText().size())
    d->name = ctx->discipline_name()->getText();
  // simple parse of inner "key = value;" pairs using regex:
  std::string body = ctx->getText();
  // remove leading "discipline<name>" and trailing "enddiscipline" if present:
  // Find first ';' after discipline name, then everything until "enddiscipline"
  size_t start = body.find(';');
  if (start != std::string::npos) {
    std::string inner = body.substr(start+1);
    // regex for key = value;
    static const std::regex kv(R"(\b([a-zA-Z_]+)\s*=\s*([^;]+);)");
    std::smatch m;
    auto s = inner;
    while (std::regex_search(s, m, kv)) {
      std::string key = trim(m[1].str());
      std::string val = trim(m[2].str());
      d->items.emplace_back(key, val);
      s = m.suffix().str();
    }
  }
  // store in builder-level container
  // add a vector<std::shared_ptr<DisciplineDecl>> disciplines; to ASTBuilder in header
  this->disciplines.push_back(d);
  return antlrcpp::Any(d);
}

antlrcpp::Any ASTBuilder::visitNature_declaration(VerilogParser::Nature_declarationContext *ctx) {
  auto n = std::make_shared<NatureDecl>();
  if (ctx->identifier()) n->name = ctx->identifier()->getText();
  std::string body = ctx->getText();
  size_t start = body.find(';');
  if (start != std::string::npos) {
    std::string inner = body.substr(start+1);
    static const std::regex kv(R"(\b([a-zA-Z_]+)\s*=\s*([^;]+);)");
    std::smatch m;
    auto s = inner;
    while (std::regex_search(s, m, kv)) {
      std::string key = trim(m[1].str());
      std::string val = trim(m[2].str());
      n->items.emplace_back(key, val);
      s = m.suffix().str();
    }
  }
  this->natures.push_back(n);
  return antlrcpp::Any(n);
}
// Add this helper function
// Add this helper function
ExprPtr ASTBuilder::anyToExpr(const antlrcpp::Any &a) {
    if (!a.has_value()) return nullptr;
    try {
        // Use std::any_cast for antlrcpp::Any
        return std::any_cast<ExprPtr>(a);
    } catch (const std::exception& e) {
        std::cerr << "anyToExpr conversion failed: " << e.what() << "\n";
        return nullptr;
    }
}

AnalogStmtPtr ASTBuilder::anyToStmt(const antlrcpp::Any &a) {
    if (!a.has_value()) return nullptr;
    try {
        return std::any_cast<AnalogStmtPtr>(a);
    } catch (const std::bad_any_cast&) {
        // Try to cast from AnalogAssign to AnalogStmtPtr
        try {
            auto assign = std::any_cast<std::shared_ptr<AnalogAssign>>(a);
            return std::static_pointer_cast<AnalogStmt>(assign);
        } catch (const std::bad_any_cast&) {
            std::cerr << "Failed to convert Any to AnalogStmtPtr\n";
            return nullptr;
        }
    }
}

antlrcpp::Any ASTBuilder::visitConditional_statement(VerilogParser::Conditional_statementContext *ctx) {
    auto ifStmt = std::make_shared<AnalogIf>();
    
    // Get condition
    if (ctx->expression()) {
        auto condAny = visit(ctx->expression());
        ifStmt->condition = anyToExpr(condAny);
    }
    
    // Get then branch
    if (ctx->statement_or_null(0)) {
        auto thenAny = visit(ctx->statement_or_null(0));
        AnalogStmtPtr thenStmt = anyToStmt(thenAny);
        if (thenStmt) {
            ifStmt->thenStmts.push_back(thenStmt);
        }
    }
    
    // Get else branch if it exists
    if (ctx->statement_or_null().size() > 1 && ctx->statement_or_null(1)) {
        auto elseAny = visit(ctx->statement_or_null(1));
        AnalogStmtPtr elseStmt = anyToStmt(elseAny);
        if (elseStmt) {
            ifStmt->elseStmts.push_back(elseStmt);
        }
    }
    
    return antlrcpp::Any(static_cast<AnalogStmtPtr>(ifStmt));
}

antlrcpp::Any ASTBuilder::visitSeq_block(VerilogParser::Seq_blockContext *ctx) {
    auto block = std::make_shared<AnalogBlockStmt>();
    
    // Visit all statements in the block
    for (auto stmtCtx : ctx->statement()) {
        auto stmtAny = visit(stmtCtx);
        AnalogStmtPtr stmt = anyToStmt(stmtAny);
        if (stmt) {
            block->stmts.push_back(stmt);
        }
    }
    
    return antlrcpp::Any(static_cast<AnalogStmtPtr>(block));
}

antlrcpp::Any ASTBuilder::visitStatement(VerilogParser::StatementContext *ctx) {
    // Handle different types of statements
    
    if (ctx->analog_assignment()) {
        return visitAnalog_assignment(ctx->analog_assignment());
    }
    else if (ctx->blocking_assignment()) {
        return visitBlocking_assignment(ctx->blocking_assignment());
    }
    else if (ctx->nonblocking_assignment()) {
        return visitNonblocking_assignment(ctx->nonblocking_assignment());
    }
    else if (ctx->conditional_statement()) {
        return visitConditional_statement(ctx->conditional_statement());
    }
    else if (ctx->seq_block()) {
        return visitSeq_block(ctx->seq_block());
    }
    // else if (ctx->variable_assignment()) {
    //     // If this rule exists, use it
    //     return visitVariable_assignment(ctx->variable_assignment());
    // }
    
    // Default: visit children
    return visitChildren(ctx);
}
antlrcpp::Any ASTBuilder::visitStatement_or_null(VerilogParser::Statement_or_nullContext *ctx) {
    if (ctx->statement()) {
        return visit(ctx->statement());
    }
    // Handle null statement (just a semicolon)
    return antlrcpp::Any(); // Return empty for null statement
}