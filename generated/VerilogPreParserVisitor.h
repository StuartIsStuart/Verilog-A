
// Generated from VerilogPreParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "VerilogPreParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by VerilogPreParser.
 */
class  VerilogPreParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by VerilogPreParser.
   */
    virtual std::any visitSource_text(VerilogPreParser::Source_textContext *context) = 0;

    virtual std::any visitCompiler_directive(VerilogPreParser::Compiler_directiveContext *context) = 0;

    virtual std::any visitBegin_keywords_directive(VerilogPreParser::Begin_keywords_directiveContext *context) = 0;

    virtual std::any visitCelldefine_directive(VerilogPreParser::Celldefine_directiveContext *context) = 0;

    virtual std::any visitDefault_nettype_directive(VerilogPreParser::Default_nettype_directiveContext *context) = 0;

    virtual std::any visitDefault_nettype_value(VerilogPreParser::Default_nettype_valueContext *context) = 0;

    virtual std::any visitElse_directive(VerilogPreParser::Else_directiveContext *context) = 0;

    virtual std::any visitElsif_directive(VerilogPreParser::Elsif_directiveContext *context) = 0;

    virtual std::any visitEnd_keywords_directive(VerilogPreParser::End_keywords_directiveContext *context) = 0;

    virtual std::any visitEndcelldefine_directive(VerilogPreParser::Endcelldefine_directiveContext *context) = 0;

    virtual std::any visitEndif_directive(VerilogPreParser::Endif_directiveContext *context) = 0;

    virtual std::any visitFilename(VerilogPreParser::FilenameContext *context) = 0;

    virtual std::any visitGroup_of_lines(VerilogPreParser::Group_of_linesContext *context) = 0;

    virtual std::any visitIdentifier(VerilogPreParser::IdentifierContext *context) = 0;

    virtual std::any visitIfdef_directive(VerilogPreParser::Ifdef_directiveContext *context) = 0;

    virtual std::any visitIfndef_directive(VerilogPreParser::Ifndef_directiveContext *context) = 0;

    virtual std::any visitInclude_directive(VerilogPreParser::Include_directiveContext *context) = 0;

    virtual std::any visitLevel(VerilogPreParser::LevelContext *context) = 0;

    virtual std::any visitLine_directive(VerilogPreParser::Line_directiveContext *context) = 0;

    virtual std::any visitMacro_delimiter(VerilogPreParser::Macro_delimiterContext *context) = 0;

    virtual std::any visitMacro_esc_newline(VerilogPreParser::Macro_esc_newlineContext *context) = 0;

    virtual std::any visitMacro_esc_quote(VerilogPreParser::Macro_esc_quoteContext *context) = 0;

    virtual std::any visitMacro_identifier(VerilogPreParser::Macro_identifierContext *context) = 0;

    virtual std::any visitMacro_name(VerilogPreParser::Macro_nameContext *context) = 0;

    virtual std::any visitMacro_quote(VerilogPreParser::Macro_quoteContext *context) = 0;

    virtual std::any visitMacro_text(VerilogPreParser::Macro_textContext *context) = 0;

    virtual std::any visitMacro_text_(VerilogPreParser::Macro_text_Context *context) = 0;

    virtual std::any visitMacro_usage(VerilogPreParser::Macro_usageContext *context) = 0;

    virtual std::any visitNounconnected_drive_directive(VerilogPreParser::Nounconnected_drive_directiveContext *context) = 0;

    virtual std::any visitNumber(VerilogPreParser::NumberContext *context) = 0;

    virtual std::any visitPragma_directive(VerilogPreParser::Pragma_directiveContext *context) = 0;

    virtual std::any visitPragma_expression(VerilogPreParser::Pragma_expressionContext *context) = 0;

    virtual std::any visitPragma_keyword(VerilogPreParser::Pragma_keywordContext *context) = 0;

    virtual std::any visitPragma_name(VerilogPreParser::Pragma_nameContext *context) = 0;

    virtual std::any visitPragma_value(VerilogPreParser::Pragma_valueContext *context) = 0;

    virtual std::any visitResetall_directive(VerilogPreParser::Resetall_directiveContext *context) = 0;

    virtual std::any visitSource_text_(VerilogPreParser::Source_text_Context *context) = 0;

    virtual std::any visitString_(VerilogPreParser::String_Context *context) = 0;

    virtual std::any visitText_macro_definition(VerilogPreParser::Text_macro_definitionContext *context) = 0;

    virtual std::any visitText_macro_usage(VerilogPreParser::Text_macro_usageContext *context) = 0;

    virtual std::any visitTime_precision(VerilogPreParser::Time_precisionContext *context) = 0;

    virtual std::any visitTime_unit(VerilogPreParser::Time_unitContext *context) = 0;

    virtual std::any visitTimescale_directive(VerilogPreParser::Timescale_directiveContext *context) = 0;

    virtual std::any visitUnconnected_drive_directive(VerilogPreParser::Unconnected_drive_directiveContext *context) = 0;

    virtual std::any visitUnconnected_drive_value(VerilogPreParser::Unconnected_drive_valueContext *context) = 0;

    virtual std::any visitUndef_directive(VerilogPreParser::Undef_directiveContext *context) = 0;

    virtual std::any visitVersion_specifier(VerilogPreParser::Version_specifierContext *context) = 0;


};

