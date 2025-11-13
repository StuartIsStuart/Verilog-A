
// Generated from VerilogPreParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  VerilogPreParser : public antlr4::Parser {
public:
  enum {
    ALWAYS = 1, AND = 2, ASSIGN = 3, AUTOMATIC = 4, BEGIN = 5, BUF = 6, 
    BUFIFONE = 7, BUFIFZERO = 8, CASE = 9, CASEX = 10, CASEZ = 11, CELL = 12, 
    CMOS = 13, CONFIG = 14, DEASSIGN = 15, DEFAULT = 16, DEFPARAM = 17, 
    DESIGN = 18, DISABLE = 19, DLFULLSKEW = 20, DLHOLD = 21, DLNOCHANGE = 22, 
    DLPERIOD = 23, DLRECOVERY = 24, DLRECREM = 25, DLREMOVAL = 26, DLSETUP = 27, 
    DLSETUPHOLD = 28, DLSKEW = 29, DLTIMESKEW = 30, DLWIDTH = 31, EDGE = 32, 
    ELSE = 33, END = 34, ENDCASE = 35, ENDCONFIG = 36, ENDFUNCTION = 37, 
    ENDGENERATE = 38, ENDMODULE = 39, ENDPRIMITIVE = 40, ENDSPECIFY = 41, 
    ENDTABLE = 42, ENDTASK = 43, EVENT = 44, FOR = 45, FORCE = 46, FOREVER = 47, 
    FORK = 48, FUNCTION = 49, GENERATE = 50, GENVAR = 51, HIGHZONE = 52, 
    HIGHZZERO = 53, IF = 54, IFNONE = 55, INCLUDE = 56, INITIAL = 57, INOUT = 58, 
    INPUT = 59, INSTANCE = 60, INTEGER = 61, JOIN = 62, LARGE = 63, LIBLIST = 64, 
    LIBRARY = 65, LOCALPARAM = 66, MACROMODULE = 67, MEDIUM = 68, MIINCDIR = 69, 
    MODULE = 70, NAND = 71, NEGEDGE = 72, NMOS = 73, NOR = 74, NOSHOWCANCELLED = 75, 
    NOT = 76, NOTIFONE = 77, NOTIFZERO = 78, OR = 79, OUTPUT = 80, PARAMETER = 81, 
    PATHPULSEDL = 82, PMOS = 83, POSEDGE = 84, PRIMITIVE = 85, PULLDOWN = 86, 
    PULLONE = 87, PULLUP = 88, PULLZERO = 89, PULSESTYLE_ONDETECT = 90, 
    PULSESTYLE_ONEVENT = 91, RCMOS = 92, REAL = 93, REALTIME = 94, REG = 95, 
    RELEASE = 96, REPEAT = 97, RNMOS = 98, RPMOS = 99, RTRAN = 100, RTRANIFONE = 101, 
    RTRANIFZERO = 102, SCALARED = 103, SHOWCANCELLED = 104, SIGNED = 105, 
    SMALL = 106, SPECIFY = 107, SPECPARAM = 108, STRONGONE = 109, STRONGZERO = 110, 
    SUPPLYONE = 111, SUPPLYZERO = 112, TABLE = 113, TASK = 114, TIME = 115, 
    TRAN = 116, TRANIFONE = 117, TRANIFZERO = 118, TRI = 119, TRIAND = 120, 
    TRIONE = 121, TRIOR = 122, TRIREG = 123, TRIZERO = 124, USE = 125, UWIRE = 126, 
    VECTORED = 127, WAIT = 128, WAND = 129, WEAKONE = 130, WEAKZERO = 131, 
    WHILE = 132, WIRE = 133, WOR = 134, XNOR = 135, XOR = 136, ANALOG = 137, 
    ELECTRICAL = 138, BRANCH = 139, DISCIPLINE = 140, NATURE = 141, LTPL = 142, 
    AMAMAM = 143, EMEQEQ = 144, EQEQEQ = 145, GTGTGT = 146, LTLTLT = 147, 
    MICL = 148, MIGT = 149, LTEQ = 150, LTLT = 151, AMAM = 152, ASGT = 153, 
    EQEQ = 154, ASAS = 155, CATI = 156, EMEQ = 157, GTEQ = 158, GTGT = 159, 
    EQGT = 160, TIAM = 161, TICA = 162, TIVL = 163, VLVL = 164, VL = 165, 
    AM = 166, AS = 167, AT = 168, CA = 169, CL = 170, CO = 171, DL = 172, 
    DQ = 173, DT = 174, EM = 175, EQ = 176, GA = 177, GT = 178, HA = 179, 
    LB = 180, LC = 181, LP = 182, LT = 183, MI = 184, MO = 185, PL = 186, 
    PLCL = 187, QM = 188, RB = 189, RC = 190, RP = 191, SC = 192, SL = 193, 
    TI = 194, BINARY_BASE = 195, BLOCK_COMMENT = 196, DECIMAL_BASE = 197, 
    ESCAPED_IDENTIFIER = 198, EXPONENTIAL_NUMBER = 199, UNIT = 200, FIXED_POINT_NUMBER = 201, 
    HEX_BASE = 202, LINE_COMMENT = 203, OCTAL_BASE = 204, SIMPLE_IDENTIFIER = 205, 
    STRING = 206, SYSTEM_TF_IDENTIFIER = 207, UNSIGNED_NUMBER = 208, WHITE_SPACE = 209, 
    BINARY_VALUE = 210, X_OR_Z_UNDERSCORE = 211, EDGE_DESCRIPTOR = 212, 
    HEX_VALUE = 213, FILE_PATH_SPEC = 214, OCTAL_VALUE = 215, EDGE_SYMBOL = 216, 
    LEVEL_ONLY_SYMBOL = 217, OUTPUT_OR_LEVEL_SYMBOL = 218, BEGIN_KEYWORDS_DIRECTIVE = 219, 
    CELLDEFINE_DIRECTIVE = 220, DEFAULT_NETTYPE_DIRECTIVE = 221, DEFINE_DIRECTIVE = 222, 
    ELSE_DIRECTIVE = 223, ELSIF_DIRECTIVE = 224, END_KEYWORDS_DIRECTIVE = 225, 
    ENDCELLDEFINE_DIRECTIVE = 226, ENDIF_DIRECTIVE = 227, IFDEF_DIRECTIVE = 228, 
    IFNDEF_DIRECTIVE = 229, INCLUDE_DIRECTIVE = 230, LINE_DIRECTIVE = 231, 
    NOUNCONNECTED_DRIVE_DIRECTIVE = 232, PRAGMA_DIRECTIVE = 233, RESETALL_DIRECTIVE = 234, 
    TIMESCALE_DIRECTIVE = 235, UNCONNECTED_DRIVE_DIRECTIVE = 236, UNDEF_DIRECTIVE = 237, 
    MACRO_USAGE = 238, VERSION_SPECIFIER = 239, DEFAULT_NETTYPE_VALUE = 240, 
    MACRO_NAME = 241, FILENAME = 242, MACRO_DELIMITER = 243, MACRO_ESC_NEWLINE = 244, 
    MACRO_ESC_QUOTE = 245, MACRO_QUOTE = 246, MACRO_TEXT = 247, SOURCE_TEXT = 248, 
    TIME_UNIT = 249, TIME_VALUE = 250, UNCONNECTED_DRIVE_VALUE = 251, MACRO_IDENTIFIER = 252, 
    IDENTIFIER = 253
  };

  enum {
    RuleSource_text = 0, RuleCompiler_directive = 1, RuleBegin_keywords_directive = 2, 
    RuleCelldefine_directive = 3, RuleDefault_nettype_directive = 4, RuleDefault_nettype_value = 5, 
    RuleElse_directive = 6, RuleElsif_directive = 7, RuleEnd_keywords_directive = 8, 
    RuleEndcelldefine_directive = 9, RuleEndif_directive = 10, RuleFilename = 11, 
    RuleGroup_of_lines = 12, RuleIdentifier = 13, RuleIfdef_directive = 14, 
    RuleIfndef_directive = 15, RuleInclude_directive = 16, RuleLevel = 17, 
    RuleLine_directive = 18, RuleMacro_delimiter = 19, RuleMacro_esc_newline = 20, 
    RuleMacro_esc_quote = 21, RuleMacro_identifier = 22, RuleMacro_name = 23, 
    RuleMacro_quote = 24, RuleMacro_text = 25, RuleMacro_text_ = 26, RuleMacro_usage = 27, 
    RuleNounconnected_drive_directive = 28, RuleNumber = 29, RulePragma_directive = 30, 
    RulePragma_expression = 31, RulePragma_keyword = 32, RulePragma_name = 33, 
    RulePragma_value = 34, RuleResetall_directive = 35, RuleSource_text_ = 36, 
    RuleString_ = 37, RuleText_macro_definition = 38, RuleText_macro_usage = 39, 
    RuleTime_precision = 40, RuleTime_unit = 41, RuleTimescale_directive = 42, 
    RuleUnconnected_drive_directive = 43, RuleUnconnected_drive_value = 44, 
    RuleUndef_directive = 45, RuleVersion_specifier = 46
  };

  explicit VerilogPreParser(antlr4::TokenStream *input);

  VerilogPreParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~VerilogPreParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Source_textContext;
  class Compiler_directiveContext;
  class Begin_keywords_directiveContext;
  class Celldefine_directiveContext;
  class Default_nettype_directiveContext;
  class Default_nettype_valueContext;
  class Else_directiveContext;
  class Elsif_directiveContext;
  class End_keywords_directiveContext;
  class Endcelldefine_directiveContext;
  class Endif_directiveContext;
  class FilenameContext;
  class Group_of_linesContext;
  class IdentifierContext;
  class Ifdef_directiveContext;
  class Ifndef_directiveContext;
  class Include_directiveContext;
  class LevelContext;
  class Line_directiveContext;
  class Macro_delimiterContext;
  class Macro_esc_newlineContext;
  class Macro_esc_quoteContext;
  class Macro_identifierContext;
  class Macro_nameContext;
  class Macro_quoteContext;
  class Macro_textContext;
  class Macro_text_Context;
  class Macro_usageContext;
  class Nounconnected_drive_directiveContext;
  class NumberContext;
  class Pragma_directiveContext;
  class Pragma_expressionContext;
  class Pragma_keywordContext;
  class Pragma_nameContext;
  class Pragma_valueContext;
  class Resetall_directiveContext;
  class Source_text_Context;
  class String_Context;
  class Text_macro_definitionContext;
  class Text_macro_usageContext;
  class Time_precisionContext;
  class Time_unitContext;
  class Timescale_directiveContext;
  class Unconnected_drive_directiveContext;
  class Unconnected_drive_valueContext;
  class Undef_directiveContext;
  class Version_specifierContext; 

  class  Source_textContext : public antlr4::ParserRuleContext {
  public:
    Source_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Compiler_directiveContext *> compiler_directive();
    Compiler_directiveContext* compiler_directive(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_textContext* source_text();

  class  Compiler_directiveContext : public antlr4::ParserRuleContext {
  public:
    Compiler_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Begin_keywords_directiveContext *begin_keywords_directive();
    Celldefine_directiveContext *celldefine_directive();
    Default_nettype_directiveContext *default_nettype_directive();
    End_keywords_directiveContext *end_keywords_directive();
    Endcelldefine_directiveContext *endcelldefine_directive();
    Ifdef_directiveContext *ifdef_directive();
    Ifndef_directiveContext *ifndef_directive();
    Include_directiveContext *include_directive();
    Line_directiveContext *line_directive();
    Nounconnected_drive_directiveContext *nounconnected_drive_directive();
    Pragma_directiveContext *pragma_directive();
    Resetall_directiveContext *resetall_directive();
    Text_macro_definitionContext *text_macro_definition();
    Text_macro_usageContext *text_macro_usage();
    Timescale_directiveContext *timescale_directive();
    Unconnected_drive_directiveContext *unconnected_drive_directive();
    Undef_directiveContext *undef_directive();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compiler_directiveContext* compiler_directive();

  class  Begin_keywords_directiveContext : public antlr4::ParserRuleContext {
  public:
    Begin_keywords_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *BEGIN_KEYWORDS_DIRECTIVE();
    std::vector<antlr4::tree::TerminalNode *> DQ();
    antlr4::tree::TerminalNode* DQ(size_t i);
    Version_specifierContext *version_specifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Begin_keywords_directiveContext* begin_keywords_directive();

  class  Celldefine_directiveContext : public antlr4::ParserRuleContext {
  public:
    Celldefine_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *CELLDEFINE_DIRECTIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Celldefine_directiveContext* celldefine_directive();

  class  Default_nettype_directiveContext : public antlr4::ParserRuleContext {
  public:
    Default_nettype_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *DEFAULT_NETTYPE_DIRECTIVE();
    Default_nettype_valueContext *default_nettype_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_nettype_directiveContext* default_nettype_directive();

  class  Default_nettype_valueContext : public antlr4::ParserRuleContext {
  public:
    Default_nettype_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT_NETTYPE_VALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_nettype_valueContext* default_nettype_value();

  class  Else_directiveContext : public antlr4::ParserRuleContext {
  public:
    Else_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *ELSE_DIRECTIVE();
    Group_of_linesContext *group_of_lines();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_directiveContext* else_directive();

  class  Elsif_directiveContext : public antlr4::ParserRuleContext {
  public:
    Elsif_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *ELSIF_DIRECTIVE();
    Macro_identifierContext *macro_identifier();
    Group_of_linesContext *group_of_lines();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Elsif_directiveContext* elsif_directive();

  class  End_keywords_directiveContext : public antlr4::ParserRuleContext {
  public:
    End_keywords_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *END_KEYWORDS_DIRECTIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  End_keywords_directiveContext* end_keywords_directive();

  class  Endcelldefine_directiveContext : public antlr4::ParserRuleContext {
  public:
    Endcelldefine_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *ENDCELLDEFINE_DIRECTIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Endcelldefine_directiveContext* endcelldefine_directive();

  class  Endif_directiveContext : public antlr4::ParserRuleContext {
  public:
    Endif_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *ENDIF_DIRECTIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Endif_directiveContext* endif_directive();

  class  FilenameContext : public antlr4::ParserRuleContext {
  public:
    FilenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILENAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilenameContext* filename();

  class  Group_of_linesContext : public antlr4::ParserRuleContext {
  public:
    Group_of_linesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Source_text_Context *> source_text_();
    Source_text_Context* source_text_(size_t i);
    std::vector<Compiler_directiveContext *> compiler_directive();
    Compiler_directiveContext* compiler_directive(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_of_linesContext* group_of_lines();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLE_IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  Ifdef_directiveContext : public antlr4::ParserRuleContext {
  public:
    Ifdef_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *IFDEF_DIRECTIVE();
    Macro_identifierContext *macro_identifier();
    Group_of_linesContext *group_of_lines();
    Endif_directiveContext *endif_directive();
    std::vector<Elsif_directiveContext *> elsif_directive();
    Elsif_directiveContext* elsif_directive(size_t i);
    Else_directiveContext *else_directive();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ifdef_directiveContext* ifdef_directive();

  class  Ifndef_directiveContext : public antlr4::ParserRuleContext {
  public:
    Ifndef_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *IFNDEF_DIRECTIVE();
    Macro_identifierContext *macro_identifier();
    Group_of_linesContext *group_of_lines();
    Endif_directiveContext *endif_directive();
    std::vector<Elsif_directiveContext *> elsif_directive();
    Elsif_directiveContext* elsif_directive(size_t i);
    Else_directiveContext *else_directive();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ifndef_directiveContext* ifndef_directive();

  class  Include_directiveContext : public antlr4::ParserRuleContext {
  public:
    Include_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *INCLUDE_DIRECTIVE();
    std::vector<antlr4::tree::TerminalNode *> DQ();
    antlr4::tree::TerminalNode* DQ(size_t i);
    FilenameContext *filename();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Include_directiveContext* include_directive();

  class  LevelContext : public antlr4::ParserRuleContext {
  public:
    LevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LevelContext* level();

  class  Line_directiveContext : public antlr4::ParserRuleContext {
  public:
    Line_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *LINE_DIRECTIVE();
    NumberContext *number();
    std::vector<antlr4::tree::TerminalNode *> DQ();
    antlr4::tree::TerminalNode* DQ(size_t i);
    FilenameContext *filename();
    LevelContext *level();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Line_directiveContext* line_directive();

  class  Macro_delimiterContext : public antlr4::ParserRuleContext {
  public:
    Macro_delimiterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_DELIMITER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Macro_delimiterContext* macro_delimiter();

  class  Macro_esc_newlineContext : public antlr4::ParserRuleContext {
  public:
    Macro_esc_newlineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_ESC_NEWLINE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Macro_esc_newlineContext* macro_esc_newline();

  class  Macro_esc_quoteContext : public antlr4::ParserRuleContext {
  public:
    Macro_esc_quoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_ESC_QUOTE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Macro_esc_quoteContext* macro_esc_quote();

  class  Macro_identifierContext : public antlr4::ParserRuleContext {
  public:
    Macro_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Macro_identifierContext* macro_identifier();

  class  Macro_nameContext : public antlr4::ParserRuleContext {
  public:
    Macro_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Macro_nameContext* macro_name();

  class  Macro_quoteContext : public antlr4::ParserRuleContext {
  public:
    Macro_quoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_QUOTE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Macro_quoteContext* macro_quote();

  class  Macro_textContext : public antlr4::ParserRuleContext {
  public:
    Macro_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Macro_text_Context *> macro_text_();
    Macro_text_Context* macro_text_(size_t i);
    std::vector<Macro_delimiterContext *> macro_delimiter();
    Macro_delimiterContext* macro_delimiter(size_t i);
    std::vector<Macro_esc_newlineContext *> macro_esc_newline();
    Macro_esc_newlineContext* macro_esc_newline(size_t i);
    std::vector<Macro_esc_quoteContext *> macro_esc_quote();
    Macro_esc_quoteContext* macro_esc_quote(size_t i);
    std::vector<Macro_quoteContext *> macro_quote();
    Macro_quoteContext* macro_quote(size_t i);
    std::vector<String_Context *> string_();
    String_Context* string_(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Macro_textContext* macro_text();

  class  Macro_text_Context : public antlr4::ParserRuleContext {
  public:
    Macro_text_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_TEXT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Macro_text_Context* macro_text_();

  class  Macro_usageContext : public antlr4::ParserRuleContext {
  public:
    Macro_usageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_USAGE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Macro_usageContext* macro_usage();

  class  Nounconnected_drive_directiveContext : public antlr4::ParserRuleContext {
  public:
    Nounconnected_drive_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *NOUNCONNECTED_DRIVE_DIRECTIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nounconnected_drive_directiveContext* nounconnected_drive_directive();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  Pragma_directiveContext : public antlr4::ParserRuleContext {
  public:
    Pragma_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *PRAGMA_DIRECTIVE();
    Pragma_nameContext *pragma_name();
    std::vector<Pragma_expressionContext *> pragma_expression();
    Pragma_expressionContext* pragma_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pragma_directiveContext* pragma_directive();

  class  Pragma_expressionContext : public antlr4::ParserRuleContext {
  public:
    Pragma_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pragma_valueContext *pragma_value();
    Pragma_keywordContext *pragma_keyword();
    antlr4::tree::TerminalNode *EQ();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pragma_expressionContext* pragma_expression();

  class  Pragma_keywordContext : public antlr4::ParserRuleContext {
  public:
    Pragma_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLE_IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pragma_keywordContext* pragma_keyword();

  class  Pragma_nameContext : public antlr4::ParserRuleContext {
  public:
    Pragma_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLE_IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pragma_nameContext* pragma_name();

  class  Pragma_valueContext : public antlr4::ParserRuleContext {
  public:
    Pragma_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Pragma_expressionContext *> pragma_expression();
    Pragma_expressionContext* pragma_expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    NumberContext *number();
    String_Context *string_();
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pragma_valueContext* pragma_value();

  class  Resetall_directiveContext : public antlr4::ParserRuleContext {
  public:
    Resetall_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *RESETALL_DIRECTIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Resetall_directiveContext* resetall_directive();

  class  Source_text_Context : public antlr4::ParserRuleContext {
  public:
    Source_text_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SOURCE_TEXT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_text_Context* source_text_();

  class  String_Context : public antlr4::ParserRuleContext {
  public:
    String_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_Context* string_();

  class  Text_macro_definitionContext : public antlr4::ParserRuleContext {
  public:
    Text_macro_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *DEFINE_DIRECTIVE();
    Macro_nameContext *macro_name();
    Macro_textContext *macro_text();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Text_macro_definitionContext* text_macro_definition();

  class  Text_macro_usageContext : public antlr4::ParserRuleContext {
  public:
    Text_macro_usageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    Macro_usageContext *macro_usage();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Text_macro_usageContext* text_macro_usage();

  class  Time_precisionContext : public antlr4::ParserRuleContext {
  public:
    Time_precisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIME_VALUE();
    antlr4::tree::TerminalNode *TIME_UNIT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Time_precisionContext* time_precision();

  class  Time_unitContext : public antlr4::ParserRuleContext {
  public:
    Time_unitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIME_VALUE();
    antlr4::tree::TerminalNode *TIME_UNIT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Time_unitContext* time_unit();

  class  Timescale_directiveContext : public antlr4::ParserRuleContext {
  public:
    Timescale_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *TIMESCALE_DIRECTIVE();
    Time_unitContext *time_unit();
    antlr4::tree::TerminalNode *SL();
    Time_precisionContext *time_precision();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timescale_directiveContext* timescale_directive();

  class  Unconnected_drive_directiveContext : public antlr4::ParserRuleContext {
  public:
    Unconnected_drive_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *UNCONNECTED_DRIVE_DIRECTIVE();
    Unconnected_drive_valueContext *unconnected_drive_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unconnected_drive_directiveContext* unconnected_drive_directive();

  class  Unconnected_drive_valueContext : public antlr4::ParserRuleContext {
  public:
    Unconnected_drive_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNCONNECTED_DRIVE_VALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unconnected_drive_valueContext* unconnected_drive_value();

  class  Undef_directiveContext : public antlr4::ParserRuleContext {
  public:
    Undef_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *UNDEF_DIRECTIVE();
    Macro_identifierContext *macro_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Undef_directiveContext* undef_directive();

  class  Version_specifierContext : public antlr4::ParserRuleContext {
  public:
    Version_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VERSION_SPECIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Version_specifierContext* version_specifier();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

