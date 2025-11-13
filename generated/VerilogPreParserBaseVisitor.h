
// Generated from VerilogPreParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "VerilogPreParserVisitor.h"


/**
 * This class provides an empty implementation of VerilogPreParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  VerilogPreParserBaseVisitor : public VerilogPreParserVisitor {
public:

  virtual std::any visitSource_text(VerilogPreParser::Source_textContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompiler_directive(VerilogPreParser::Compiler_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBegin_keywords_directive(VerilogPreParser::Begin_keywords_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCelldefine_directive(VerilogPreParser::Celldefine_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefault_nettype_directive(VerilogPreParser::Default_nettype_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefault_nettype_value(VerilogPreParser::Default_nettype_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse_directive(VerilogPreParser::Else_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElsif_directive(VerilogPreParser::Elsif_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnd_keywords_directive(VerilogPreParser::End_keywords_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndcelldefine_directive(VerilogPreParser::Endcelldefine_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndif_directive(VerilogPreParser::Endif_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFilename(VerilogPreParser::FilenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_of_lines(VerilogPreParser::Group_of_linesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(VerilogPreParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfdef_directive(VerilogPreParser::Ifdef_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfndef_directive(VerilogPreParser::Ifndef_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInclude_directive(VerilogPreParser::Include_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLevel(VerilogPreParser::LevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLine_directive(VerilogPreParser::Line_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_delimiter(VerilogPreParser::Macro_delimiterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_esc_newline(VerilogPreParser::Macro_esc_newlineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_esc_quote(VerilogPreParser::Macro_esc_quoteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_identifier(VerilogPreParser::Macro_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_name(VerilogPreParser::Macro_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_quote(VerilogPreParser::Macro_quoteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_text(VerilogPreParser::Macro_textContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_text_(VerilogPreParser::Macro_text_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_usage(VerilogPreParser::Macro_usageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNounconnected_drive_directive(VerilogPreParser::Nounconnected_drive_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(VerilogPreParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPragma_directive(VerilogPreParser::Pragma_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPragma_expression(VerilogPreParser::Pragma_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPragma_keyword(VerilogPreParser::Pragma_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPragma_name(VerilogPreParser::Pragma_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPragma_value(VerilogPreParser::Pragma_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResetall_directive(VerilogPreParser::Resetall_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSource_text_(VerilogPreParser::Source_text_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString_(VerilogPreParser::String_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitText_macro_definition(VerilogPreParser::Text_macro_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitText_macro_usage(VerilogPreParser::Text_macro_usageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTime_precision(VerilogPreParser::Time_precisionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTime_unit(VerilogPreParser::Time_unitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTimescale_directive(VerilogPreParser::Timescale_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnconnected_drive_directive(VerilogPreParser::Unconnected_drive_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnconnected_drive_value(VerilogPreParser::Unconnected_drive_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUndef_directive(VerilogPreParser::Undef_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVersion_specifier(VerilogPreParser::Version_specifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

