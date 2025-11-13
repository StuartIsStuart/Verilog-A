#ifndef AST_H
#define AST_H

#include <memory>
#include <string>
#include <vector>
#include <optional>
#include <iostream>



struct Expr;
using ExprPtr = std::shared_ptr<Expr>;

// Base class for all expressions 
// small parameter descriptor
struct ParamDecl {
  std::string name;
  double value = 0.0;
  std::optional<std::string> unit;
  std::string raw_text;

  void dump(std::ostream &os, int indent = 0) const {
    for (int i = 0; i < indent; ++i) os << ' ';
    os << "ParamDecl(" << name << ", value=" << value;
    if (unit) os << ", unit=" << *unit;
    if (!raw_text.empty()) os << ", raw=\"" << raw_text << "\"";
    os << ")\n";
  }
};




struct Expr {
    virtual ~Expr() = default;
    // optional: pretty-print helper
    virtual void dump(std::ostream &os, int indent = 0) const = 0;
protected:
    static void pad(std::ostream &os, int indent) {
        for (int i = 0; i < indent; ++i) os << ' ';
    }
};

// Number literal (with optional suffix / raw unit text)
struct NumberExpr : Expr {
    double value;
    std::optional<std::string> raw_unit; // e.g. "k", "meg", "u", or "mV" etc.
    std::string original_text;           // the original token text (for diagnostics)

    explicit NumberExpr(double v)
        : value(v), raw_unit(std::nullopt), original_text() {}

    void dump(std::ostream &os, int indent = 0) const override {
        pad(os, indent);
        os << "NumberExpr(value=" << value;
        if (raw_unit) os << ", unit=\"" << *raw_unit << "\"";
        if (!original_text.empty()) os << ", text=\"" << original_text << "\"";
        os << ")\n";
    }
};

// Identifier (variable / function / hierarchical id)
struct IdentifierExpr : Expr {
    std::string name;
    explicit IdentifierExpr(std::string n) : name(std::move(n)) {}

    void dump(std::ostream &os, int indent = 0) const override {
        pad(os, indent);
        os << "IdentifierExpr(" << name << ")\n";
    }
};

// String literal
struct StringExpr : Expr {
    std::string value;
    explicit StringExpr(std::string v) : value(std::move(v)) {}

    void dump(std::ostream &os, int indent = 0) const override {
        pad(os, indent);
        os << "StringExpr(\"" << value << "\")\n";
    }
};

// Function call: name(args...)
struct FunctionCallExpr : Expr {
    std::string name;
    std::vector<std::shared_ptr<Expr>> args;

    FunctionCallExpr() = default;
    explicit FunctionCallExpr(std::string n) : name(std::move(n)) {}

    void dump(std::ostream &os, int indent = 0) const override {
        pad(os, indent);
        os << "FunctionCallExpr(" << name << ")\n";
        for (const auto &a : args) {
            if (a) a->dump(os, indent + 2);
            else { pad(os, indent + 2); os << "<null>\n"; }
        }
    }
};

// Binary operator expression
struct BinaryExpr : Expr {
    std::string op;
    std::shared_ptr<Expr> left;
    std::shared_ptr<Expr> right;

    BinaryExpr() = default;
    BinaryExpr(std::string o, std::shared_ptr<Expr> l, std::shared_ptr<Expr> r)
        : op(std::move(o)), left(std::move(l)), right(std::move(r)) {}

    void dump(std::ostream &os, int indent = 0) const override {
        pad(os, indent);
        os << "BinaryExpr(op=\"" << op << "\")\n";
        if (left)  left->dump(os, indent + 2); else { pad(os, indent + 2); os << "<null-left>\n"; }
        if (right) right->dump(os, indent + 2); else { pad(os, indent + 2); os << "<null-right>\n"; }
    }
};

// Unary operator expression
struct UnaryExpr : Expr {
    std::string op;
    std::shared_ptr<Expr> operand;

    UnaryExpr() = default;
    UnaryExpr(std::string o, std::shared_ptr<Expr> opd)
        : op(std::move(o)), operand(std::move(opd)) {}

    void dump(std::ostream &os, int indent = 0) const override {
        pad(os, indent);
        os << "UnaryExpr(op=\"" << op << "\")\n";
        if (operand) operand->dump(os, indent + 2); else { pad(os, indent + 2); os << "<null-operand>\n"; }
    }
};

// --- Simple top-level declaration nodes (extendable) ---

// analog assignment node for capturing LHS function call and RHS expr
struct AnalogAssign {
    std::shared_ptr<FunctionCallExpr> lhs;
    ExprPtr rhs;
    void dump(std::ostream &os, int indent = 0) const {
        for (int i=0;i<indent;++i) os << ' ';
        os << "AnalogAssign\n";
        if (lhs) lhs->dump(os, indent+2);
        if (rhs) rhs->dump(os, indent+2);
    }
};
// analog block grouping
struct AnalogBlock {
  std::vector<std::shared_ptr<AnalogAssign>> assigns;
  void dump(std::ostream &os, int indent = 0) const {
    for (int i = 0; i < indent; ++i) os << ' ';
    os << "AnalogBlock\n";
    for (auto &a : assigns) {
      if (a) a->dump(os, indent + 2);
      else { for (int i = 0; i < indent + 2; ++i) os << ' '; os << "<null-assign>\n"; }
    }
  }
};
struct ModuleDecl {
  std::string name;
  std::vector<std::string> ports;
  std::vector<ParamDecl> params;                    // <- add this
  std::vector<std::string> electrical_nets;         // <- add this
  std::vector<std::shared_ptr<AnalogAssign>> analog_assigns; // <- add this
  std::vector<std::shared_ptr<AnalogBlock>> analog_blocks;


  void dump(std::ostream &os, int indent = 0) const {
    for (int i = 0; i < indent; ++i) os << ' ';
    os << "ModuleDecl(" << name << ")\n";
    for (const auto &p : ports) {
      for (int i = 0; i < indent + 2; ++i) os << ' ';
      os << "port: " << p << "\n";
    }
    for (const auto &pd : params) {
      pd.dump(os, indent + 2);
    }
    for (const auto &n : electrical_nets) {
      for (int i = 0; i < indent + 2; ++i) os << ' ';
      os << "electrical: " << n << "\n";
    }
    for (const auto &aa : analog_assigns) {
      if (aa) aa->dump(os, indent + 2);
    }
    for (const auto &blk : analog_blocks) {
      if (blk) blk->dump(os, indent + 2);
    }
  }
};



struct DisciplineDecl {
    std::string name;
    // simple key/value items; later replace with structured items
    std::vector<std::pair<std::string, std::string>> items;
    void dump(std::ostream &os, int indent = 0) const {
        for (int i = 0; i < indent; ++i) os << ' ';
        os << "DisciplineDecl(" << name << ")\n";
        for (const auto &kv : items) {
            for (int i = 0; i < indent + 2; ++i) os << ' ';
            os << kv.first << " = " << kv.second << "\n";
        }
    }
};

struct NatureDecl {
    std::string name;
    std::vector<std::pair<std::string,std::string>> items;
    void dump(std::ostream &os, int indent = 0) const {
        for (int i = 0; i < indent; ++i) os << ' ';
        os << "NatureDecl(" << name << ")\n";
        for (const auto &kv : items) {
            for (int i = 0; i < indent + 2; ++i) os << ' ';
            os << kv.first << " = " << kv.second << "\n";
        }
    }
};

// ternary (DONT KNOW IF I NEED THIS. BUT MIGHT AS WELL. I THINK V(a,b,c) is a thing)
struct TernaryExpr : Expr {
    ExprPtr cond, ifTrue, ifFalse;
    TernaryExpr(ExprPtr c, ExprPtr t, ExprPtr f) : cond(c), ifTrue(t), ifFalse(f) {}
    void dump(std::ostream &os, int indent = 0) const override {
        pad(os, indent);
        os << "TernaryExpr\n";
        if (cond) cond->dump(os, indent + 2);
        if (ifTrue) ifTrue->dump(os, indent + 2);
        if (ifFalse) ifFalse->dump(os, indent + 2);
    }
};


extern std::shared_ptr<AnalogBlock> currentAnalogBlock;
#endif
