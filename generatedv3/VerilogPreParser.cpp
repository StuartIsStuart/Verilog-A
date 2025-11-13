
// Generated from VerilogPreParser.g4 by ANTLR 4.13.2


#include "VerilogPreParserVisitor.h"

#include "VerilogPreParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct VerilogPreParserStaticData final {
  VerilogPreParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  VerilogPreParserStaticData(const VerilogPreParserStaticData&) = delete;
  VerilogPreParserStaticData(VerilogPreParserStaticData&&) = delete;
  VerilogPreParserStaticData& operator=(const VerilogPreParserStaticData&) = delete;
  VerilogPreParserStaticData& operator=(VerilogPreParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag verilogpreparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<VerilogPreParserStaticData> verilogpreparserParserStaticData = nullptr;

void verilogpreparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (verilogpreparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(verilogpreparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<VerilogPreParserStaticData>(
    std::vector<std::string>{
      "source_text", "compiler_directive", "begin_keywords_directive", "celldefine_directive", 
      "default_nettype_directive", "default_nettype_value", "else_directive", 
      "elsif_directive", "end_keywords_directive", "endcelldefine_directive", 
      "endif_directive", "filename", "group_of_lines", "identifier", "ifdef_directive", 
      "ifndef_directive", "include_directive", "level", "line_directive", 
      "macro_delimiter", "macro_esc_newline", "macro_esc_quote", "macro_identifier", 
      "macro_name", "macro_quote", "macro_text", "macro_text_", "macro_usage", 
      "nounconnected_drive_directive", "number", "pragma_directive", "pragma_expression", 
      "pragma_keyword", "pragma_name", "pragma_value", "resetall_directive", 
      "source_text_", "string_", "text_macro_definition", "text_macro_usage", 
      "time_precision", "time_unit", "timescale_directive", "unconnected_drive_directive", 
      "unconnected_drive_value", "undef_directive", "version_specifier"
    },
    std::vector<std::string>{
      "", "'always'", "'and'", "'assign'", "'automatic'", "'begin'", "'buf'", 
      "'bufif1'", "'bufif0'", "'case'", "'casex'", "'casez'", "'cell'", 
      "'cmos'", "'config'", "'deassign'", "'default'", "'defparam'", "'design'", 
      "'disable'", "'$fullskew'", "'$hold'", "'$nochange'", "'$period'", 
      "'$recovery'", "'$recrem'", "'$removal'", "'$setup'", "'$setuphold'", 
      "'$skew'", "'$timeskew'", "'$width'", "'edge'", "'else'", "'end'", 
      "'endcase'", "'endconfig'", "'endfunction'", "'endgenerate'", "'endmodule'", 
      "'endprimitive'", "'endspecify'", "'endtable'", "'endtask'", "'event'", 
      "'for'", "'force'", "'forever'", "'fork'", "'function'", "'generate'", 
      "'genvar'", "'highz1'", "'highz0'", "'if'", "'ifnone'", "'include'", 
      "'initial'", "'inout'", "'input'", "'instance'", "'integer'", "'join'", 
      "'large'", "'liblist'", "'library'", "'localparam'", "'macromodule'", 
      "'medium'", "'-incdir'", "'module'", "'nand'", "'negedge'", "'nmos'", 
      "'nor'", "'noshowcancelled'", "'not'", "'notif1'", "'notif0'", "'or'", 
      "'output'", "'parameter'", "'PATHPULSE$'", "'pmos'", "'posedge'", 
      "'primitive'", "'pulldown'", "'pull1'", "'pullup'", "'pull0'", "'pulsestyle_ondetect'", 
      "'pulsestyle_onevent'", "'rcmos'", "'real'", "'realtime'", "'reg'", 
      "'release'", "'repeat'", "'rnmos'", "'rpmos'", "'rtran'", "'rtranif1'", 
      "'rtranif0'", "'scalared'", "'showcancelled'", "'signed'", "'small'", 
      "'specify'", "'specparam'", "'strong1'", "'strong0'", "'supply1'", 
      "'supply0'", "'table'", "'task'", "'time'", "'tran'", "'tranif1'", 
      "'tranif0'", "'tri'", "'triand'", "'tri1'", "'trior'", "'trireg'", 
      "'tri0'", "'use'", "'uwire'", "'vectored'", "'wait'", "'wand'", "'weak1'", 
      "'weak0'", "'while'", "'wire'", "'wor'", "'xnor'", "'xor'", "'analog'", 
      "'electrical'", "'branch'", "'discipline'", "'nature'", "'<+'", "'&&&'", 
      "'!=='", "'==='", "'>>>'", "'<<<'", "'-:'", "'->'", "'<='", "'<<'", 
      "'&&'", "'*>'", "'=='", "'**'", "'^~'", "'!='", "'>='", "'>>'", "'=>'", 
      "'~&'", "'~^'", "'~|'", "'||'", "'|'", "'&'", "'*'", "'@'", "'^'", 
      "':'", "','", "'$'", "'\"'", "'.'", "'!'", "'='", "", "'>'", "'#'", 
      "'['", "'{'", "'('", "'<'", "'-'", "'%'", "'+'", "'+:'", "'\\u003F'", 
      "']'", "'}'", "')'", "';'", "'/'", "'~'", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "'celldefine'", "", "", "", "", "'end_keywords'", "'endcelldefine'", 
      "", "", "", "", "", "'nounconnected_drive'", "", "'resetall'", "", 
      "", "", "", "", "", "", "", "'``'", "", "'`\\`\"'", "'`\"'"
    },
    std::vector<std::string>{
      "", "ALWAYS", "AND", "ASSIGN", "AUTOMATIC", "BEGIN", "BUF", "BUFIFONE", 
      "BUFIFZERO", "CASE", "CASEX", "CASEZ", "CELL", "CMOS", "CONFIG", "DEASSIGN", 
      "DEFAULT", "DEFPARAM", "DESIGN", "DISABLE", "DLFULLSKEW", "DLHOLD", 
      "DLNOCHANGE", "DLPERIOD", "DLRECOVERY", "DLRECREM", "DLREMOVAL", "DLSETUP", 
      "DLSETUPHOLD", "DLSKEW", "DLTIMESKEW", "DLWIDTH", "EDGE", "ELSE", 
      "END", "ENDCASE", "ENDCONFIG", "ENDFUNCTION", "ENDGENERATE", "ENDMODULE", 
      "ENDPRIMITIVE", "ENDSPECIFY", "ENDTABLE", "ENDTASK", "EVENT", "FOR", 
      "FORCE", "FOREVER", "FORK", "FUNCTION", "GENERATE", "GENVAR", "HIGHZONE", 
      "HIGHZZERO", "IF", "IFNONE", "INCLUDE", "INITIAL", "INOUT", "INPUT", 
      "INSTANCE", "INTEGER", "JOIN", "LARGE", "LIBLIST", "LIBRARY", "LOCALPARAM", 
      "MACROMODULE", "MEDIUM", "MIINCDIR", "MODULE", "NAND", "NEGEDGE", 
      "NMOS", "NOR", "NOSHOWCANCELLED", "NOT", "NOTIFONE", "NOTIFZERO", 
      "OR", "OUTPUT", "PARAMETER", "PATHPULSEDL", "PMOS", "POSEDGE", "PRIMITIVE", 
      "PULLDOWN", "PULLONE", "PULLUP", "PULLZERO", "PULSESTYLE_ONDETECT", 
      "PULSESTYLE_ONEVENT", "RCMOS", "REAL", "REALTIME", "REG", "RELEASE", 
      "REPEAT", "RNMOS", "RPMOS", "RTRAN", "RTRANIFONE", "RTRANIFZERO", 
      "SCALARED", "SHOWCANCELLED", "SIGNED", "SMALL", "SPECIFY", "SPECPARAM", 
      "STRONGONE", "STRONGZERO", "SUPPLYONE", "SUPPLYZERO", "TABLE", "TASK", 
      "TIME", "TRAN", "TRANIFONE", "TRANIFZERO", "TRI", "TRIAND", "TRIONE", 
      "TRIOR", "TRIREG", "TRIZERO", "USE", "UWIRE", "VECTORED", "WAIT", 
      "WAND", "WEAKONE", "WEAKZERO", "WHILE", "WIRE", "WOR", "XNOR", "XOR", 
      "ANALOG", "ELECTRICAL", "BRANCH", "DISCIPLINE", "NATURE", "LTPL", 
      "AMAMAM", "EMEQEQ", "EQEQEQ", "GTGTGT", "LTLTLT", "MICL", "MIGT", 
      "LTEQ", "LTLT", "AMAM", "ASGT", "EQEQ", "ASAS", "CATI", "EMEQ", "GTEQ", 
      "GTGT", "EQGT", "TIAM", "TICA", "TIVL", "VLVL", "VL", "AM", "AS", 
      "AT", "CA", "CL", "CO", "DL", "DQ", "DT", "EM", "EQ", "GA", "GT", 
      "HA", "LB", "LC", "LP", "LT", "MI", "MO", "PL", "PLCL", "QM", "RB", 
      "RC", "RP", "SC", "SL", "TI", "BINARY_BASE", "BLOCK_COMMENT", "DECIMAL_BASE", 
      "ESCAPED_IDENTIFIER", "EXPONENTIAL_NUMBER", "UNIT", "FIXED_POINT_NUMBER", 
      "HEX_BASE", "LINE_COMMENT", "OCTAL_BASE", "SIMPLE_IDENTIFIER", "STRING", 
      "SYSTEM_TF_IDENTIFIER", "UNSIGNED_NUMBER", "WHITE_SPACE", "BINARY_VALUE", 
      "X_OR_Z_UNDERSCORE", "EDGE_DESCRIPTOR", "HEX_VALUE", "FILE_PATH_SPEC", 
      "OCTAL_VALUE", "EDGE_SYMBOL", "LEVEL_ONLY_SYMBOL", "OUTPUT_OR_LEVEL_SYMBOL", 
      "BEGIN_KEYWORDS_DIRECTIVE", "CELLDEFINE_DIRECTIVE", "DEFAULT_NETTYPE_DIRECTIVE", 
      "DEFINE_DIRECTIVE", "ELSE_DIRECTIVE", "ELSIF_DIRECTIVE", "END_KEYWORDS_DIRECTIVE", 
      "ENDCELLDEFINE_DIRECTIVE", "ENDIF_DIRECTIVE", "IFDEF_DIRECTIVE", "IFNDEF_DIRECTIVE", 
      "INCLUDE_DIRECTIVE", "LINE_DIRECTIVE", "NOUNCONNECTED_DRIVE_DIRECTIVE", 
      "PRAGMA_DIRECTIVE", "RESETALL_DIRECTIVE", "TIMESCALE_DIRECTIVE", "UNCONNECTED_DRIVE_DIRECTIVE", 
      "UNDEF_DIRECTIVE", "MACRO_USAGE", "VERSION_SPECIFIER", "DEFAULT_NETTYPE_VALUE", 
      "MACRO_NAME", "FILENAME", "MACRO_DELIMITER", "MACRO_ESC_NEWLINE", 
      "MACRO_ESC_QUOTE", "MACRO_QUOTE", "MACRO_TEXT", "SOURCE_TEXT", "TIME_UNIT", 
      "TIME_VALUE", "UNCONNECTED_DRIVE_VALUE", "MACRO_IDENTIFIER", "IDENTIFIER"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,253,321,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,1,0,5,0,96,8,0,10,0,12,0,99,
  	9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,3,1,118,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,
  	1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,10,
  	1,10,1,10,1,11,1,11,1,12,1,12,5,12,157,8,12,10,12,12,12,160,9,12,1,13,
  	1,13,1,14,1,14,1,14,1,14,1,14,5,14,169,8,14,10,14,12,14,172,9,14,1,14,
  	3,14,175,8,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,5,15,184,8,15,10,15,
  	12,15,187,9,15,1,15,3,15,190,8,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,20,
  	1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,25,1,25,1,25,
  	1,25,5,25,228,8,25,10,25,12,25,231,9,25,1,26,1,26,1,27,1,27,1,28,1,28,
  	1,28,1,29,1,29,1,30,1,30,1,30,1,30,1,30,1,30,5,30,248,8,30,10,30,12,30,
  	251,9,30,3,30,253,8,30,1,31,1,31,1,31,3,31,258,8,31,1,31,1,31,1,32,1,
  	32,1,33,1,33,1,34,1,34,1,34,1,34,5,34,270,8,34,10,34,12,34,273,9,34,1,
  	34,1,34,1,34,1,34,1,34,3,34,280,8,34,1,35,1,35,1,35,1,36,1,36,1,37,1,
  	37,1,38,1,38,1,38,1,38,1,38,1,39,1,39,1,39,1,40,1,40,1,40,1,41,1,41,1,
  	41,1,42,1,42,1,42,1,42,1,42,1,42,1,43,1,43,1,43,1,43,1,44,1,44,1,45,1,
  	45,1,45,1,45,1,46,1,46,1,46,0,0,47,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,
  	72,74,76,78,80,82,84,86,88,90,92,0,0,309,0,97,1,0,0,0,2,117,1,0,0,0,4,
  	119,1,0,0,0,6,125,1,0,0,0,8,128,1,0,0,0,10,132,1,0,0,0,12,134,1,0,0,0,
  	14,138,1,0,0,0,16,143,1,0,0,0,18,146,1,0,0,0,20,149,1,0,0,0,22,152,1,
  	0,0,0,24,158,1,0,0,0,26,161,1,0,0,0,28,163,1,0,0,0,30,178,1,0,0,0,32,
  	193,1,0,0,0,34,199,1,0,0,0,36,201,1,0,0,0,38,209,1,0,0,0,40,211,1,0,0,
  	0,42,213,1,0,0,0,44,215,1,0,0,0,46,217,1,0,0,0,48,219,1,0,0,0,50,229,
  	1,0,0,0,52,232,1,0,0,0,54,234,1,0,0,0,56,236,1,0,0,0,58,239,1,0,0,0,60,
  	241,1,0,0,0,62,257,1,0,0,0,64,261,1,0,0,0,66,263,1,0,0,0,68,279,1,0,0,
  	0,70,281,1,0,0,0,72,284,1,0,0,0,74,286,1,0,0,0,76,288,1,0,0,0,78,293,
  	1,0,0,0,80,296,1,0,0,0,82,299,1,0,0,0,84,302,1,0,0,0,86,308,1,0,0,0,88,
  	312,1,0,0,0,90,314,1,0,0,0,92,318,1,0,0,0,94,96,3,2,1,0,95,94,1,0,0,0,
  	96,99,1,0,0,0,97,95,1,0,0,0,97,98,1,0,0,0,98,1,1,0,0,0,99,97,1,0,0,0,
  	100,118,3,4,2,0,101,118,3,6,3,0,102,118,3,8,4,0,103,118,3,16,8,0,104,
  	118,3,18,9,0,105,118,3,28,14,0,106,118,3,30,15,0,107,118,3,32,16,0,108,
  	118,3,36,18,0,109,118,3,56,28,0,110,118,3,60,30,0,111,118,3,70,35,0,112,
  	118,3,76,38,0,113,118,3,78,39,0,114,118,3,84,42,0,115,118,3,86,43,0,116,
  	118,3,90,45,0,117,100,1,0,0,0,117,101,1,0,0,0,117,102,1,0,0,0,117,103,
  	1,0,0,0,117,104,1,0,0,0,117,105,1,0,0,0,117,106,1,0,0,0,117,107,1,0,0,
  	0,117,108,1,0,0,0,117,109,1,0,0,0,117,110,1,0,0,0,117,111,1,0,0,0,117,
  	112,1,0,0,0,117,113,1,0,0,0,117,114,1,0,0,0,117,115,1,0,0,0,117,116,1,
  	0,0,0,118,3,1,0,0,0,119,120,5,177,0,0,120,121,5,219,0,0,121,122,5,173,
  	0,0,122,123,3,92,46,0,123,124,5,173,0,0,124,5,1,0,0,0,125,126,5,177,0,
  	0,126,127,5,220,0,0,127,7,1,0,0,0,128,129,5,177,0,0,129,130,5,221,0,0,
  	130,131,3,10,5,0,131,9,1,0,0,0,132,133,5,240,0,0,133,11,1,0,0,0,134,135,
  	5,177,0,0,135,136,5,223,0,0,136,137,3,24,12,0,137,13,1,0,0,0,138,139,
  	5,177,0,0,139,140,5,224,0,0,140,141,3,44,22,0,141,142,3,24,12,0,142,15,
  	1,0,0,0,143,144,5,177,0,0,144,145,5,225,0,0,145,17,1,0,0,0,146,147,5,
  	177,0,0,147,148,5,226,0,0,148,19,1,0,0,0,149,150,5,177,0,0,150,151,5,
  	227,0,0,151,21,1,0,0,0,152,153,5,242,0,0,153,23,1,0,0,0,154,157,3,72,
  	36,0,155,157,3,2,1,0,156,154,1,0,0,0,156,155,1,0,0,0,157,160,1,0,0,0,
  	158,156,1,0,0,0,158,159,1,0,0,0,159,25,1,0,0,0,160,158,1,0,0,0,161,162,
  	5,205,0,0,162,27,1,0,0,0,163,164,5,177,0,0,164,165,5,228,0,0,165,166,
  	3,44,22,0,166,170,3,24,12,0,167,169,3,14,7,0,168,167,1,0,0,0,169,172,
  	1,0,0,0,170,168,1,0,0,0,170,171,1,0,0,0,171,174,1,0,0,0,172,170,1,0,0,
  	0,173,175,3,12,6,0,174,173,1,0,0,0,174,175,1,0,0,0,175,176,1,0,0,0,176,
  	177,3,20,10,0,177,29,1,0,0,0,178,179,5,177,0,0,179,180,5,229,0,0,180,
  	181,3,44,22,0,181,185,3,24,12,0,182,184,3,14,7,0,183,182,1,0,0,0,184,
  	187,1,0,0,0,185,183,1,0,0,0,185,186,1,0,0,0,186,189,1,0,0,0,187,185,1,
  	0,0,0,188,190,3,12,6,0,189,188,1,0,0,0,189,190,1,0,0,0,190,191,1,0,0,
  	0,191,192,3,20,10,0,192,31,1,0,0,0,193,194,5,177,0,0,194,195,5,230,0,
  	0,195,196,5,173,0,0,196,197,3,22,11,0,197,198,5,173,0,0,198,33,1,0,0,
  	0,199,200,5,208,0,0,200,35,1,0,0,0,201,202,5,177,0,0,202,203,5,231,0,
  	0,203,204,3,58,29,0,204,205,5,173,0,0,205,206,3,22,11,0,206,207,5,173,
  	0,0,207,208,3,34,17,0,208,37,1,0,0,0,209,210,5,243,0,0,210,39,1,0,0,0,
  	211,212,5,244,0,0,212,41,1,0,0,0,213,214,5,245,0,0,214,43,1,0,0,0,215,
  	216,5,252,0,0,216,45,1,0,0,0,217,218,5,241,0,0,218,47,1,0,0,0,219,220,
  	5,246,0,0,220,49,1,0,0,0,221,228,3,52,26,0,222,228,3,38,19,0,223,228,
  	3,40,20,0,224,228,3,42,21,0,225,228,3,48,24,0,226,228,3,74,37,0,227,221,
  	1,0,0,0,227,222,1,0,0,0,227,223,1,0,0,0,227,224,1,0,0,0,227,225,1,0,0,
  	0,227,226,1,0,0,0,228,231,1,0,0,0,229,227,1,0,0,0,229,230,1,0,0,0,230,
  	51,1,0,0,0,231,229,1,0,0,0,232,233,5,247,0,0,233,53,1,0,0,0,234,235,5,
  	238,0,0,235,55,1,0,0,0,236,237,5,177,0,0,237,238,5,232,0,0,238,57,1,0,
  	0,0,239,240,5,208,0,0,240,59,1,0,0,0,241,242,5,177,0,0,242,243,5,233,
  	0,0,243,252,3,66,33,0,244,249,3,62,31,0,245,246,5,171,0,0,246,248,3,62,
  	31,0,247,245,1,0,0,0,248,251,1,0,0,0,249,247,1,0,0,0,249,250,1,0,0,0,
  	250,253,1,0,0,0,251,249,1,0,0,0,252,244,1,0,0,0,252,253,1,0,0,0,253,61,
  	1,0,0,0,254,255,3,64,32,0,255,256,5,176,0,0,256,258,1,0,0,0,257,254,1,
  	0,0,0,257,258,1,0,0,0,258,259,1,0,0,0,259,260,3,68,34,0,260,63,1,0,0,
  	0,261,262,5,205,0,0,262,65,1,0,0,0,263,264,5,205,0,0,264,67,1,0,0,0,265,
  	266,5,182,0,0,266,271,3,62,31,0,267,268,5,171,0,0,268,270,3,62,31,0,269,
  	267,1,0,0,0,270,273,1,0,0,0,271,269,1,0,0,0,271,272,1,0,0,0,272,274,1,
  	0,0,0,273,271,1,0,0,0,274,275,5,191,0,0,275,280,1,0,0,0,276,280,3,58,
  	29,0,277,280,3,74,37,0,278,280,3,26,13,0,279,265,1,0,0,0,279,276,1,0,
  	0,0,279,277,1,0,0,0,279,278,1,0,0,0,280,69,1,0,0,0,281,282,5,177,0,0,
  	282,283,5,234,0,0,283,71,1,0,0,0,284,285,5,248,0,0,285,73,1,0,0,0,286,
  	287,5,206,0,0,287,75,1,0,0,0,288,289,5,177,0,0,289,290,5,222,0,0,290,
  	291,3,46,23,0,291,292,3,50,25,0,292,77,1,0,0,0,293,294,5,177,0,0,294,
  	295,3,54,27,0,295,79,1,0,0,0,296,297,5,250,0,0,297,298,5,249,0,0,298,
  	81,1,0,0,0,299,300,5,250,0,0,300,301,5,249,0,0,301,83,1,0,0,0,302,303,
  	5,177,0,0,303,304,5,235,0,0,304,305,3,82,41,0,305,306,5,193,0,0,306,307,
  	3,80,40,0,307,85,1,0,0,0,308,309,5,177,0,0,309,310,5,236,0,0,310,311,
  	3,88,44,0,311,87,1,0,0,0,312,313,5,251,0,0,313,89,1,0,0,0,314,315,5,177,
  	0,0,315,316,5,237,0,0,316,317,3,44,22,0,317,91,1,0,0,0,318,319,5,239,
  	0,0,319,93,1,0,0,0,15,97,117,156,158,170,174,185,189,227,229,249,252,
  	257,271,279
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  verilogpreparserParserStaticData = std::move(staticData);
}

}

VerilogPreParser::VerilogPreParser(TokenStream *input) : VerilogPreParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

VerilogPreParser::VerilogPreParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  VerilogPreParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *verilogpreparserParserStaticData->atn, verilogpreparserParserStaticData->decisionToDFA, verilogpreparserParserStaticData->sharedContextCache, options);
}

VerilogPreParser::~VerilogPreParser() {
  delete _interpreter;
}

const atn::ATN& VerilogPreParser::getATN() const {
  return *verilogpreparserParserStaticData->atn;
}

std::string VerilogPreParser::getGrammarFileName() const {
  return "VerilogPreParser.g4";
}

const std::vector<std::string>& VerilogPreParser::getRuleNames() const {
  return verilogpreparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& VerilogPreParser::getVocabulary() const {
  return verilogpreparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView VerilogPreParser::getSerializedATN() const {
  return verilogpreparserParserStaticData->serializedATN;
}


//----------------- Source_textContext ------------------------------------------------------------------

VerilogPreParser::Source_textContext::Source_textContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<VerilogPreParser::Compiler_directiveContext *> VerilogPreParser::Source_textContext::compiler_directive() {
  return getRuleContexts<VerilogPreParser::Compiler_directiveContext>();
}

VerilogPreParser::Compiler_directiveContext* VerilogPreParser::Source_textContext::compiler_directive(size_t i) {
  return getRuleContext<VerilogPreParser::Compiler_directiveContext>(i);
}


size_t VerilogPreParser::Source_textContext::getRuleIndex() const {
  return VerilogPreParser::RuleSource_text;
}


std::any VerilogPreParser::Source_textContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitSource_text(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Source_textContext* VerilogPreParser::source_text() {
  Source_textContext *_localctx = _tracker.createInstance<Source_textContext>(_ctx, getState());
  enterRule(_localctx, 0, VerilogPreParser::RuleSource_text);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == VerilogPreParser::GA) {
      setState(94);
      compiler_directive();
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compiler_directiveContext ------------------------------------------------------------------

VerilogPreParser::Compiler_directiveContext::Compiler_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VerilogPreParser::Begin_keywords_directiveContext* VerilogPreParser::Compiler_directiveContext::begin_keywords_directive() {
  return getRuleContext<VerilogPreParser::Begin_keywords_directiveContext>(0);
}

VerilogPreParser::Celldefine_directiveContext* VerilogPreParser::Compiler_directiveContext::celldefine_directive() {
  return getRuleContext<VerilogPreParser::Celldefine_directiveContext>(0);
}

VerilogPreParser::Default_nettype_directiveContext* VerilogPreParser::Compiler_directiveContext::default_nettype_directive() {
  return getRuleContext<VerilogPreParser::Default_nettype_directiveContext>(0);
}

VerilogPreParser::End_keywords_directiveContext* VerilogPreParser::Compiler_directiveContext::end_keywords_directive() {
  return getRuleContext<VerilogPreParser::End_keywords_directiveContext>(0);
}

VerilogPreParser::Endcelldefine_directiveContext* VerilogPreParser::Compiler_directiveContext::endcelldefine_directive() {
  return getRuleContext<VerilogPreParser::Endcelldefine_directiveContext>(0);
}

VerilogPreParser::Ifdef_directiveContext* VerilogPreParser::Compiler_directiveContext::ifdef_directive() {
  return getRuleContext<VerilogPreParser::Ifdef_directiveContext>(0);
}

VerilogPreParser::Ifndef_directiveContext* VerilogPreParser::Compiler_directiveContext::ifndef_directive() {
  return getRuleContext<VerilogPreParser::Ifndef_directiveContext>(0);
}

VerilogPreParser::Include_directiveContext* VerilogPreParser::Compiler_directiveContext::include_directive() {
  return getRuleContext<VerilogPreParser::Include_directiveContext>(0);
}

VerilogPreParser::Line_directiveContext* VerilogPreParser::Compiler_directiveContext::line_directive() {
  return getRuleContext<VerilogPreParser::Line_directiveContext>(0);
}

VerilogPreParser::Nounconnected_drive_directiveContext* VerilogPreParser::Compiler_directiveContext::nounconnected_drive_directive() {
  return getRuleContext<VerilogPreParser::Nounconnected_drive_directiveContext>(0);
}

VerilogPreParser::Pragma_directiveContext* VerilogPreParser::Compiler_directiveContext::pragma_directive() {
  return getRuleContext<VerilogPreParser::Pragma_directiveContext>(0);
}

VerilogPreParser::Resetall_directiveContext* VerilogPreParser::Compiler_directiveContext::resetall_directive() {
  return getRuleContext<VerilogPreParser::Resetall_directiveContext>(0);
}

VerilogPreParser::Text_macro_definitionContext* VerilogPreParser::Compiler_directiveContext::text_macro_definition() {
  return getRuleContext<VerilogPreParser::Text_macro_definitionContext>(0);
}

VerilogPreParser::Text_macro_usageContext* VerilogPreParser::Compiler_directiveContext::text_macro_usage() {
  return getRuleContext<VerilogPreParser::Text_macro_usageContext>(0);
}

VerilogPreParser::Timescale_directiveContext* VerilogPreParser::Compiler_directiveContext::timescale_directive() {
  return getRuleContext<VerilogPreParser::Timescale_directiveContext>(0);
}

VerilogPreParser::Unconnected_drive_directiveContext* VerilogPreParser::Compiler_directiveContext::unconnected_drive_directive() {
  return getRuleContext<VerilogPreParser::Unconnected_drive_directiveContext>(0);
}

VerilogPreParser::Undef_directiveContext* VerilogPreParser::Compiler_directiveContext::undef_directive() {
  return getRuleContext<VerilogPreParser::Undef_directiveContext>(0);
}


size_t VerilogPreParser::Compiler_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleCompiler_directive;
}


std::any VerilogPreParser::Compiler_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitCompiler_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Compiler_directiveContext* VerilogPreParser::compiler_directive() {
  Compiler_directiveContext *_localctx = _tracker.createInstance<Compiler_directiveContext>(_ctx, getState());
  enterRule(_localctx, 2, VerilogPreParser::RuleCompiler_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(117);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(100);
      begin_keywords_directive();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(101);
      celldefine_directive();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(102);
      default_nettype_directive();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(103);
      end_keywords_directive();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(104);
      endcelldefine_directive();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(105);
      ifdef_directive();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(106);
      ifndef_directive();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(107);
      include_directive();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(108);
      line_directive();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(109);
      nounconnected_drive_directive();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(110);
      pragma_directive();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(111);
      resetall_directive();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(112);
      text_macro_definition();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(113);
      text_macro_usage();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(114);
      timescale_directive();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(115);
      unconnected_drive_directive();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(116);
      undef_directive();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Begin_keywords_directiveContext ------------------------------------------------------------------

VerilogPreParser::Begin_keywords_directiveContext::Begin_keywords_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Begin_keywords_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Begin_keywords_directiveContext::BEGIN_KEYWORDS_DIRECTIVE() {
  return getToken(VerilogPreParser::BEGIN_KEYWORDS_DIRECTIVE, 0);
}

std::vector<tree::TerminalNode *> VerilogPreParser::Begin_keywords_directiveContext::DQ() {
  return getTokens(VerilogPreParser::DQ);
}

tree::TerminalNode* VerilogPreParser::Begin_keywords_directiveContext::DQ(size_t i) {
  return getToken(VerilogPreParser::DQ, i);
}

VerilogPreParser::Version_specifierContext* VerilogPreParser::Begin_keywords_directiveContext::version_specifier() {
  return getRuleContext<VerilogPreParser::Version_specifierContext>(0);
}


size_t VerilogPreParser::Begin_keywords_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleBegin_keywords_directive;
}


std::any VerilogPreParser::Begin_keywords_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitBegin_keywords_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Begin_keywords_directiveContext* VerilogPreParser::begin_keywords_directive() {
  Begin_keywords_directiveContext *_localctx = _tracker.createInstance<Begin_keywords_directiveContext>(_ctx, getState());
  enterRule(_localctx, 4, VerilogPreParser::RuleBegin_keywords_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(VerilogPreParser::GA);
    setState(120);
    match(VerilogPreParser::BEGIN_KEYWORDS_DIRECTIVE);
    setState(121);
    match(VerilogPreParser::DQ);
    setState(122);
    version_specifier();
    setState(123);
    match(VerilogPreParser::DQ);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Celldefine_directiveContext ------------------------------------------------------------------

VerilogPreParser::Celldefine_directiveContext::Celldefine_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Celldefine_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Celldefine_directiveContext::CELLDEFINE_DIRECTIVE() {
  return getToken(VerilogPreParser::CELLDEFINE_DIRECTIVE, 0);
}


size_t VerilogPreParser::Celldefine_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleCelldefine_directive;
}


std::any VerilogPreParser::Celldefine_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitCelldefine_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Celldefine_directiveContext* VerilogPreParser::celldefine_directive() {
  Celldefine_directiveContext *_localctx = _tracker.createInstance<Celldefine_directiveContext>(_ctx, getState());
  enterRule(_localctx, 6, VerilogPreParser::RuleCelldefine_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(VerilogPreParser::GA);
    setState(126);
    match(VerilogPreParser::CELLDEFINE_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Default_nettype_directiveContext ------------------------------------------------------------------

VerilogPreParser::Default_nettype_directiveContext::Default_nettype_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Default_nettype_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Default_nettype_directiveContext::DEFAULT_NETTYPE_DIRECTIVE() {
  return getToken(VerilogPreParser::DEFAULT_NETTYPE_DIRECTIVE, 0);
}

VerilogPreParser::Default_nettype_valueContext* VerilogPreParser::Default_nettype_directiveContext::default_nettype_value() {
  return getRuleContext<VerilogPreParser::Default_nettype_valueContext>(0);
}


size_t VerilogPreParser::Default_nettype_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleDefault_nettype_directive;
}


std::any VerilogPreParser::Default_nettype_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitDefault_nettype_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Default_nettype_directiveContext* VerilogPreParser::default_nettype_directive() {
  Default_nettype_directiveContext *_localctx = _tracker.createInstance<Default_nettype_directiveContext>(_ctx, getState());
  enterRule(_localctx, 8, VerilogPreParser::RuleDefault_nettype_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(VerilogPreParser::GA);
    setState(129);
    match(VerilogPreParser::DEFAULT_NETTYPE_DIRECTIVE);
    setState(130);
    default_nettype_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Default_nettype_valueContext ------------------------------------------------------------------

VerilogPreParser::Default_nettype_valueContext::Default_nettype_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Default_nettype_valueContext::DEFAULT_NETTYPE_VALUE() {
  return getToken(VerilogPreParser::DEFAULT_NETTYPE_VALUE, 0);
}


size_t VerilogPreParser::Default_nettype_valueContext::getRuleIndex() const {
  return VerilogPreParser::RuleDefault_nettype_value;
}


std::any VerilogPreParser::Default_nettype_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitDefault_nettype_value(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Default_nettype_valueContext* VerilogPreParser::default_nettype_value() {
  Default_nettype_valueContext *_localctx = _tracker.createInstance<Default_nettype_valueContext>(_ctx, getState());
  enterRule(_localctx, 10, VerilogPreParser::RuleDefault_nettype_value);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(VerilogPreParser::DEFAULT_NETTYPE_VALUE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_directiveContext ------------------------------------------------------------------

VerilogPreParser::Else_directiveContext::Else_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Else_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Else_directiveContext::ELSE_DIRECTIVE() {
  return getToken(VerilogPreParser::ELSE_DIRECTIVE, 0);
}

VerilogPreParser::Group_of_linesContext* VerilogPreParser::Else_directiveContext::group_of_lines() {
  return getRuleContext<VerilogPreParser::Group_of_linesContext>(0);
}


size_t VerilogPreParser::Else_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleElse_directive;
}


std::any VerilogPreParser::Else_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitElse_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Else_directiveContext* VerilogPreParser::else_directive() {
  Else_directiveContext *_localctx = _tracker.createInstance<Else_directiveContext>(_ctx, getState());
  enterRule(_localctx, 12, VerilogPreParser::RuleElse_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(VerilogPreParser::GA);
    setState(135);
    match(VerilogPreParser::ELSE_DIRECTIVE);
    setState(136);
    group_of_lines();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Elsif_directiveContext ------------------------------------------------------------------

VerilogPreParser::Elsif_directiveContext::Elsif_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Elsif_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Elsif_directiveContext::ELSIF_DIRECTIVE() {
  return getToken(VerilogPreParser::ELSIF_DIRECTIVE, 0);
}

VerilogPreParser::Macro_identifierContext* VerilogPreParser::Elsif_directiveContext::macro_identifier() {
  return getRuleContext<VerilogPreParser::Macro_identifierContext>(0);
}

VerilogPreParser::Group_of_linesContext* VerilogPreParser::Elsif_directiveContext::group_of_lines() {
  return getRuleContext<VerilogPreParser::Group_of_linesContext>(0);
}


size_t VerilogPreParser::Elsif_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleElsif_directive;
}


std::any VerilogPreParser::Elsif_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitElsif_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Elsif_directiveContext* VerilogPreParser::elsif_directive() {
  Elsif_directiveContext *_localctx = _tracker.createInstance<Elsif_directiveContext>(_ctx, getState());
  enterRule(_localctx, 14, VerilogPreParser::RuleElsif_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(VerilogPreParser::GA);
    setState(139);
    match(VerilogPreParser::ELSIF_DIRECTIVE);
    setState(140);
    macro_identifier();
    setState(141);
    group_of_lines();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- End_keywords_directiveContext ------------------------------------------------------------------

VerilogPreParser::End_keywords_directiveContext::End_keywords_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::End_keywords_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::End_keywords_directiveContext::END_KEYWORDS_DIRECTIVE() {
  return getToken(VerilogPreParser::END_KEYWORDS_DIRECTIVE, 0);
}


size_t VerilogPreParser::End_keywords_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleEnd_keywords_directive;
}


std::any VerilogPreParser::End_keywords_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitEnd_keywords_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::End_keywords_directiveContext* VerilogPreParser::end_keywords_directive() {
  End_keywords_directiveContext *_localctx = _tracker.createInstance<End_keywords_directiveContext>(_ctx, getState());
  enterRule(_localctx, 16, VerilogPreParser::RuleEnd_keywords_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    match(VerilogPreParser::GA);
    setState(144);
    match(VerilogPreParser::END_KEYWORDS_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Endcelldefine_directiveContext ------------------------------------------------------------------

VerilogPreParser::Endcelldefine_directiveContext::Endcelldefine_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Endcelldefine_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Endcelldefine_directiveContext::ENDCELLDEFINE_DIRECTIVE() {
  return getToken(VerilogPreParser::ENDCELLDEFINE_DIRECTIVE, 0);
}


size_t VerilogPreParser::Endcelldefine_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleEndcelldefine_directive;
}


std::any VerilogPreParser::Endcelldefine_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitEndcelldefine_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Endcelldefine_directiveContext* VerilogPreParser::endcelldefine_directive() {
  Endcelldefine_directiveContext *_localctx = _tracker.createInstance<Endcelldefine_directiveContext>(_ctx, getState());
  enterRule(_localctx, 18, VerilogPreParser::RuleEndcelldefine_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(VerilogPreParser::GA);
    setState(147);
    match(VerilogPreParser::ENDCELLDEFINE_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Endif_directiveContext ------------------------------------------------------------------

VerilogPreParser::Endif_directiveContext::Endif_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Endif_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Endif_directiveContext::ENDIF_DIRECTIVE() {
  return getToken(VerilogPreParser::ENDIF_DIRECTIVE, 0);
}


size_t VerilogPreParser::Endif_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleEndif_directive;
}


std::any VerilogPreParser::Endif_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitEndif_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Endif_directiveContext* VerilogPreParser::endif_directive() {
  Endif_directiveContext *_localctx = _tracker.createInstance<Endif_directiveContext>(_ctx, getState());
  enterRule(_localctx, 20, VerilogPreParser::RuleEndif_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(VerilogPreParser::GA);
    setState(150);
    match(VerilogPreParser::ENDIF_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FilenameContext ------------------------------------------------------------------

VerilogPreParser::FilenameContext::FilenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::FilenameContext::FILENAME() {
  return getToken(VerilogPreParser::FILENAME, 0);
}


size_t VerilogPreParser::FilenameContext::getRuleIndex() const {
  return VerilogPreParser::RuleFilename;
}


std::any VerilogPreParser::FilenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitFilename(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::FilenameContext* VerilogPreParser::filename() {
  FilenameContext *_localctx = _tracker.createInstance<FilenameContext>(_ctx, getState());
  enterRule(_localctx, 22, VerilogPreParser::RuleFilename);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(VerilogPreParser::FILENAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Group_of_linesContext ------------------------------------------------------------------

VerilogPreParser::Group_of_linesContext::Group_of_linesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<VerilogPreParser::Source_text_Context *> VerilogPreParser::Group_of_linesContext::source_text_() {
  return getRuleContexts<VerilogPreParser::Source_text_Context>();
}

VerilogPreParser::Source_text_Context* VerilogPreParser::Group_of_linesContext::source_text_(size_t i) {
  return getRuleContext<VerilogPreParser::Source_text_Context>(i);
}

std::vector<VerilogPreParser::Compiler_directiveContext *> VerilogPreParser::Group_of_linesContext::compiler_directive() {
  return getRuleContexts<VerilogPreParser::Compiler_directiveContext>();
}

VerilogPreParser::Compiler_directiveContext* VerilogPreParser::Group_of_linesContext::compiler_directive(size_t i) {
  return getRuleContext<VerilogPreParser::Compiler_directiveContext>(i);
}


size_t VerilogPreParser::Group_of_linesContext::getRuleIndex() const {
  return VerilogPreParser::RuleGroup_of_lines;
}


std::any VerilogPreParser::Group_of_linesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitGroup_of_lines(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Group_of_linesContext* VerilogPreParser::group_of_lines() {
  Group_of_linesContext *_localctx = _tracker.createInstance<Group_of_linesContext>(_ctx, getState());
  enterRule(_localctx, 24, VerilogPreParser::RuleGroup_of_lines);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(158);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(156);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case VerilogPreParser::SOURCE_TEXT: {
            setState(154);
            source_text_();
            break;
          }

          case VerilogPreParser::GA: {
            setState(155);
            compiler_directive();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(160);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

VerilogPreParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::IdentifierContext::SIMPLE_IDENTIFIER() {
  return getToken(VerilogPreParser::SIMPLE_IDENTIFIER, 0);
}


size_t VerilogPreParser::IdentifierContext::getRuleIndex() const {
  return VerilogPreParser::RuleIdentifier;
}


std::any VerilogPreParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::IdentifierContext* VerilogPreParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 26, VerilogPreParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(VerilogPreParser::SIMPLE_IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ifdef_directiveContext ------------------------------------------------------------------

VerilogPreParser::Ifdef_directiveContext::Ifdef_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Ifdef_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Ifdef_directiveContext::IFDEF_DIRECTIVE() {
  return getToken(VerilogPreParser::IFDEF_DIRECTIVE, 0);
}

VerilogPreParser::Macro_identifierContext* VerilogPreParser::Ifdef_directiveContext::macro_identifier() {
  return getRuleContext<VerilogPreParser::Macro_identifierContext>(0);
}

VerilogPreParser::Group_of_linesContext* VerilogPreParser::Ifdef_directiveContext::group_of_lines() {
  return getRuleContext<VerilogPreParser::Group_of_linesContext>(0);
}

VerilogPreParser::Endif_directiveContext* VerilogPreParser::Ifdef_directiveContext::endif_directive() {
  return getRuleContext<VerilogPreParser::Endif_directiveContext>(0);
}

std::vector<VerilogPreParser::Elsif_directiveContext *> VerilogPreParser::Ifdef_directiveContext::elsif_directive() {
  return getRuleContexts<VerilogPreParser::Elsif_directiveContext>();
}

VerilogPreParser::Elsif_directiveContext* VerilogPreParser::Ifdef_directiveContext::elsif_directive(size_t i) {
  return getRuleContext<VerilogPreParser::Elsif_directiveContext>(i);
}

VerilogPreParser::Else_directiveContext* VerilogPreParser::Ifdef_directiveContext::else_directive() {
  return getRuleContext<VerilogPreParser::Else_directiveContext>(0);
}


size_t VerilogPreParser::Ifdef_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleIfdef_directive;
}


std::any VerilogPreParser::Ifdef_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitIfdef_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Ifdef_directiveContext* VerilogPreParser::ifdef_directive() {
  Ifdef_directiveContext *_localctx = _tracker.createInstance<Ifdef_directiveContext>(_ctx, getState());
  enterRule(_localctx, 28, VerilogPreParser::RuleIfdef_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(VerilogPreParser::GA);
    setState(164);
    match(VerilogPreParser::IFDEF_DIRECTIVE);
    setState(165);
    macro_identifier();
    setState(166);
    group_of_lines();
    setState(170);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(167);
        elsif_directive(); 
      }
      setState(172);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(174);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(173);
      else_directive();
      break;
    }

    default:
      break;
    }
    setState(176);
    endif_directive();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ifndef_directiveContext ------------------------------------------------------------------

VerilogPreParser::Ifndef_directiveContext::Ifndef_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Ifndef_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Ifndef_directiveContext::IFNDEF_DIRECTIVE() {
  return getToken(VerilogPreParser::IFNDEF_DIRECTIVE, 0);
}

VerilogPreParser::Macro_identifierContext* VerilogPreParser::Ifndef_directiveContext::macro_identifier() {
  return getRuleContext<VerilogPreParser::Macro_identifierContext>(0);
}

VerilogPreParser::Group_of_linesContext* VerilogPreParser::Ifndef_directiveContext::group_of_lines() {
  return getRuleContext<VerilogPreParser::Group_of_linesContext>(0);
}

VerilogPreParser::Endif_directiveContext* VerilogPreParser::Ifndef_directiveContext::endif_directive() {
  return getRuleContext<VerilogPreParser::Endif_directiveContext>(0);
}

std::vector<VerilogPreParser::Elsif_directiveContext *> VerilogPreParser::Ifndef_directiveContext::elsif_directive() {
  return getRuleContexts<VerilogPreParser::Elsif_directiveContext>();
}

VerilogPreParser::Elsif_directiveContext* VerilogPreParser::Ifndef_directiveContext::elsif_directive(size_t i) {
  return getRuleContext<VerilogPreParser::Elsif_directiveContext>(i);
}

VerilogPreParser::Else_directiveContext* VerilogPreParser::Ifndef_directiveContext::else_directive() {
  return getRuleContext<VerilogPreParser::Else_directiveContext>(0);
}


size_t VerilogPreParser::Ifndef_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleIfndef_directive;
}


std::any VerilogPreParser::Ifndef_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitIfndef_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Ifndef_directiveContext* VerilogPreParser::ifndef_directive() {
  Ifndef_directiveContext *_localctx = _tracker.createInstance<Ifndef_directiveContext>(_ctx, getState());
  enterRule(_localctx, 30, VerilogPreParser::RuleIfndef_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(VerilogPreParser::GA);
    setState(179);
    match(VerilogPreParser::IFNDEF_DIRECTIVE);
    setState(180);
    macro_identifier();
    setState(181);
    group_of_lines();
    setState(185);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(182);
        elsif_directive(); 
      }
      setState(187);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
    setState(189);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(188);
      else_directive();
      break;
    }

    default:
      break;
    }
    setState(191);
    endif_directive();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Include_directiveContext ------------------------------------------------------------------

VerilogPreParser::Include_directiveContext::Include_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Include_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Include_directiveContext::INCLUDE_DIRECTIVE() {
  return getToken(VerilogPreParser::INCLUDE_DIRECTIVE, 0);
}

std::vector<tree::TerminalNode *> VerilogPreParser::Include_directiveContext::DQ() {
  return getTokens(VerilogPreParser::DQ);
}

tree::TerminalNode* VerilogPreParser::Include_directiveContext::DQ(size_t i) {
  return getToken(VerilogPreParser::DQ, i);
}

VerilogPreParser::FilenameContext* VerilogPreParser::Include_directiveContext::filename() {
  return getRuleContext<VerilogPreParser::FilenameContext>(0);
}


size_t VerilogPreParser::Include_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleInclude_directive;
}


std::any VerilogPreParser::Include_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitInclude_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Include_directiveContext* VerilogPreParser::include_directive() {
  Include_directiveContext *_localctx = _tracker.createInstance<Include_directiveContext>(_ctx, getState());
  enterRule(_localctx, 32, VerilogPreParser::RuleInclude_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    match(VerilogPreParser::GA);
    setState(194);
    match(VerilogPreParser::INCLUDE_DIRECTIVE);
    setState(195);
    match(VerilogPreParser::DQ);
    setState(196);
    filename();
    setState(197);
    match(VerilogPreParser::DQ);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LevelContext ------------------------------------------------------------------

VerilogPreParser::LevelContext::LevelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::LevelContext::UNSIGNED_NUMBER() {
  return getToken(VerilogPreParser::UNSIGNED_NUMBER, 0);
}


size_t VerilogPreParser::LevelContext::getRuleIndex() const {
  return VerilogPreParser::RuleLevel;
}


std::any VerilogPreParser::LevelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitLevel(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::LevelContext* VerilogPreParser::level() {
  LevelContext *_localctx = _tracker.createInstance<LevelContext>(_ctx, getState());
  enterRule(_localctx, 34, VerilogPreParser::RuleLevel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    match(VerilogPreParser::UNSIGNED_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Line_directiveContext ------------------------------------------------------------------

VerilogPreParser::Line_directiveContext::Line_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Line_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Line_directiveContext::LINE_DIRECTIVE() {
  return getToken(VerilogPreParser::LINE_DIRECTIVE, 0);
}

VerilogPreParser::NumberContext* VerilogPreParser::Line_directiveContext::number() {
  return getRuleContext<VerilogPreParser::NumberContext>(0);
}

std::vector<tree::TerminalNode *> VerilogPreParser::Line_directiveContext::DQ() {
  return getTokens(VerilogPreParser::DQ);
}

tree::TerminalNode* VerilogPreParser::Line_directiveContext::DQ(size_t i) {
  return getToken(VerilogPreParser::DQ, i);
}

VerilogPreParser::FilenameContext* VerilogPreParser::Line_directiveContext::filename() {
  return getRuleContext<VerilogPreParser::FilenameContext>(0);
}

VerilogPreParser::LevelContext* VerilogPreParser::Line_directiveContext::level() {
  return getRuleContext<VerilogPreParser::LevelContext>(0);
}


size_t VerilogPreParser::Line_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleLine_directive;
}


std::any VerilogPreParser::Line_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitLine_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Line_directiveContext* VerilogPreParser::line_directive() {
  Line_directiveContext *_localctx = _tracker.createInstance<Line_directiveContext>(_ctx, getState());
  enterRule(_localctx, 36, VerilogPreParser::RuleLine_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(VerilogPreParser::GA);
    setState(202);
    match(VerilogPreParser::LINE_DIRECTIVE);
    setState(203);
    number();
    setState(204);
    match(VerilogPreParser::DQ);
    setState(205);
    filename();
    setState(206);
    match(VerilogPreParser::DQ);
    setState(207);
    level();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_delimiterContext ------------------------------------------------------------------

VerilogPreParser::Macro_delimiterContext::Macro_delimiterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Macro_delimiterContext::MACRO_DELIMITER() {
  return getToken(VerilogPreParser::MACRO_DELIMITER, 0);
}


size_t VerilogPreParser::Macro_delimiterContext::getRuleIndex() const {
  return VerilogPreParser::RuleMacro_delimiter;
}


std::any VerilogPreParser::Macro_delimiterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitMacro_delimiter(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Macro_delimiterContext* VerilogPreParser::macro_delimiter() {
  Macro_delimiterContext *_localctx = _tracker.createInstance<Macro_delimiterContext>(_ctx, getState());
  enterRule(_localctx, 38, VerilogPreParser::RuleMacro_delimiter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    match(VerilogPreParser::MACRO_DELIMITER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_esc_newlineContext ------------------------------------------------------------------

VerilogPreParser::Macro_esc_newlineContext::Macro_esc_newlineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Macro_esc_newlineContext::MACRO_ESC_NEWLINE() {
  return getToken(VerilogPreParser::MACRO_ESC_NEWLINE, 0);
}


size_t VerilogPreParser::Macro_esc_newlineContext::getRuleIndex() const {
  return VerilogPreParser::RuleMacro_esc_newline;
}


std::any VerilogPreParser::Macro_esc_newlineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitMacro_esc_newline(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Macro_esc_newlineContext* VerilogPreParser::macro_esc_newline() {
  Macro_esc_newlineContext *_localctx = _tracker.createInstance<Macro_esc_newlineContext>(_ctx, getState());
  enterRule(_localctx, 40, VerilogPreParser::RuleMacro_esc_newline);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    match(VerilogPreParser::MACRO_ESC_NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_esc_quoteContext ------------------------------------------------------------------

VerilogPreParser::Macro_esc_quoteContext::Macro_esc_quoteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Macro_esc_quoteContext::MACRO_ESC_QUOTE() {
  return getToken(VerilogPreParser::MACRO_ESC_QUOTE, 0);
}


size_t VerilogPreParser::Macro_esc_quoteContext::getRuleIndex() const {
  return VerilogPreParser::RuleMacro_esc_quote;
}


std::any VerilogPreParser::Macro_esc_quoteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitMacro_esc_quote(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Macro_esc_quoteContext* VerilogPreParser::macro_esc_quote() {
  Macro_esc_quoteContext *_localctx = _tracker.createInstance<Macro_esc_quoteContext>(_ctx, getState());
  enterRule(_localctx, 42, VerilogPreParser::RuleMacro_esc_quote);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(VerilogPreParser::MACRO_ESC_QUOTE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_identifierContext ------------------------------------------------------------------

VerilogPreParser::Macro_identifierContext::Macro_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Macro_identifierContext::MACRO_IDENTIFIER() {
  return getToken(VerilogPreParser::MACRO_IDENTIFIER, 0);
}


size_t VerilogPreParser::Macro_identifierContext::getRuleIndex() const {
  return VerilogPreParser::RuleMacro_identifier;
}


std::any VerilogPreParser::Macro_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitMacro_identifier(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Macro_identifierContext* VerilogPreParser::macro_identifier() {
  Macro_identifierContext *_localctx = _tracker.createInstance<Macro_identifierContext>(_ctx, getState());
  enterRule(_localctx, 44, VerilogPreParser::RuleMacro_identifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    match(VerilogPreParser::MACRO_IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_nameContext ------------------------------------------------------------------

VerilogPreParser::Macro_nameContext::Macro_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Macro_nameContext::MACRO_NAME() {
  return getToken(VerilogPreParser::MACRO_NAME, 0);
}


size_t VerilogPreParser::Macro_nameContext::getRuleIndex() const {
  return VerilogPreParser::RuleMacro_name;
}


std::any VerilogPreParser::Macro_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitMacro_name(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Macro_nameContext* VerilogPreParser::macro_name() {
  Macro_nameContext *_localctx = _tracker.createInstance<Macro_nameContext>(_ctx, getState());
  enterRule(_localctx, 46, VerilogPreParser::RuleMacro_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    match(VerilogPreParser::MACRO_NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_quoteContext ------------------------------------------------------------------

VerilogPreParser::Macro_quoteContext::Macro_quoteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Macro_quoteContext::MACRO_QUOTE() {
  return getToken(VerilogPreParser::MACRO_QUOTE, 0);
}


size_t VerilogPreParser::Macro_quoteContext::getRuleIndex() const {
  return VerilogPreParser::RuleMacro_quote;
}


std::any VerilogPreParser::Macro_quoteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitMacro_quote(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Macro_quoteContext* VerilogPreParser::macro_quote() {
  Macro_quoteContext *_localctx = _tracker.createInstance<Macro_quoteContext>(_ctx, getState());
  enterRule(_localctx, 48, VerilogPreParser::RuleMacro_quote);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    match(VerilogPreParser::MACRO_QUOTE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_textContext ------------------------------------------------------------------

VerilogPreParser::Macro_textContext::Macro_textContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<VerilogPreParser::Macro_text_Context *> VerilogPreParser::Macro_textContext::macro_text_() {
  return getRuleContexts<VerilogPreParser::Macro_text_Context>();
}

VerilogPreParser::Macro_text_Context* VerilogPreParser::Macro_textContext::macro_text_(size_t i) {
  return getRuleContext<VerilogPreParser::Macro_text_Context>(i);
}

std::vector<VerilogPreParser::Macro_delimiterContext *> VerilogPreParser::Macro_textContext::macro_delimiter() {
  return getRuleContexts<VerilogPreParser::Macro_delimiterContext>();
}

VerilogPreParser::Macro_delimiterContext* VerilogPreParser::Macro_textContext::macro_delimiter(size_t i) {
  return getRuleContext<VerilogPreParser::Macro_delimiterContext>(i);
}

std::vector<VerilogPreParser::Macro_esc_newlineContext *> VerilogPreParser::Macro_textContext::macro_esc_newline() {
  return getRuleContexts<VerilogPreParser::Macro_esc_newlineContext>();
}

VerilogPreParser::Macro_esc_newlineContext* VerilogPreParser::Macro_textContext::macro_esc_newline(size_t i) {
  return getRuleContext<VerilogPreParser::Macro_esc_newlineContext>(i);
}

std::vector<VerilogPreParser::Macro_esc_quoteContext *> VerilogPreParser::Macro_textContext::macro_esc_quote() {
  return getRuleContexts<VerilogPreParser::Macro_esc_quoteContext>();
}

VerilogPreParser::Macro_esc_quoteContext* VerilogPreParser::Macro_textContext::macro_esc_quote(size_t i) {
  return getRuleContext<VerilogPreParser::Macro_esc_quoteContext>(i);
}

std::vector<VerilogPreParser::Macro_quoteContext *> VerilogPreParser::Macro_textContext::macro_quote() {
  return getRuleContexts<VerilogPreParser::Macro_quoteContext>();
}

VerilogPreParser::Macro_quoteContext* VerilogPreParser::Macro_textContext::macro_quote(size_t i) {
  return getRuleContext<VerilogPreParser::Macro_quoteContext>(i);
}

std::vector<VerilogPreParser::String_Context *> VerilogPreParser::Macro_textContext::string_() {
  return getRuleContexts<VerilogPreParser::String_Context>();
}

VerilogPreParser::String_Context* VerilogPreParser::Macro_textContext::string_(size_t i) {
  return getRuleContext<VerilogPreParser::String_Context>(i);
}


size_t VerilogPreParser::Macro_textContext::getRuleIndex() const {
  return VerilogPreParser::RuleMacro_text;
}


std::any VerilogPreParser::Macro_textContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitMacro_text(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Macro_textContext* VerilogPreParser::macro_text() {
  Macro_textContext *_localctx = _tracker.createInstance<Macro_textContext>(_ctx, getState());
  enterRule(_localctx, 50, VerilogPreParser::RuleMacro_text);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 206) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 206)) & 4260607557633) != 0)) {
      setState(227);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case VerilogPreParser::MACRO_TEXT: {
          setState(221);
          macro_text_();
          break;
        }

        case VerilogPreParser::MACRO_DELIMITER: {
          setState(222);
          macro_delimiter();
          break;
        }

        case VerilogPreParser::MACRO_ESC_NEWLINE: {
          setState(223);
          macro_esc_newline();
          break;
        }

        case VerilogPreParser::MACRO_ESC_QUOTE: {
          setState(224);
          macro_esc_quote();
          break;
        }

        case VerilogPreParser::MACRO_QUOTE: {
          setState(225);
          macro_quote();
          break;
        }

        case VerilogPreParser::STRING: {
          setState(226);
          string_();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(231);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_text_Context ------------------------------------------------------------------

VerilogPreParser::Macro_text_Context::Macro_text_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Macro_text_Context::MACRO_TEXT() {
  return getToken(VerilogPreParser::MACRO_TEXT, 0);
}


size_t VerilogPreParser::Macro_text_Context::getRuleIndex() const {
  return VerilogPreParser::RuleMacro_text_;
}


std::any VerilogPreParser::Macro_text_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitMacro_text_(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Macro_text_Context* VerilogPreParser::macro_text_() {
  Macro_text_Context *_localctx = _tracker.createInstance<Macro_text_Context>(_ctx, getState());
  enterRule(_localctx, 52, VerilogPreParser::RuleMacro_text_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(VerilogPreParser::MACRO_TEXT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_usageContext ------------------------------------------------------------------

VerilogPreParser::Macro_usageContext::Macro_usageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Macro_usageContext::MACRO_USAGE() {
  return getToken(VerilogPreParser::MACRO_USAGE, 0);
}


size_t VerilogPreParser::Macro_usageContext::getRuleIndex() const {
  return VerilogPreParser::RuleMacro_usage;
}


std::any VerilogPreParser::Macro_usageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitMacro_usage(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Macro_usageContext* VerilogPreParser::macro_usage() {
  Macro_usageContext *_localctx = _tracker.createInstance<Macro_usageContext>(_ctx, getState());
  enterRule(_localctx, 54, VerilogPreParser::RuleMacro_usage);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    match(VerilogPreParser::MACRO_USAGE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Nounconnected_drive_directiveContext ------------------------------------------------------------------

VerilogPreParser::Nounconnected_drive_directiveContext::Nounconnected_drive_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Nounconnected_drive_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Nounconnected_drive_directiveContext::NOUNCONNECTED_DRIVE_DIRECTIVE() {
  return getToken(VerilogPreParser::NOUNCONNECTED_DRIVE_DIRECTIVE, 0);
}


size_t VerilogPreParser::Nounconnected_drive_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleNounconnected_drive_directive;
}


std::any VerilogPreParser::Nounconnected_drive_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitNounconnected_drive_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Nounconnected_drive_directiveContext* VerilogPreParser::nounconnected_drive_directive() {
  Nounconnected_drive_directiveContext *_localctx = _tracker.createInstance<Nounconnected_drive_directiveContext>(_ctx, getState());
  enterRule(_localctx, 56, VerilogPreParser::RuleNounconnected_drive_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(236);
    match(VerilogPreParser::GA);
    setState(237);
    match(VerilogPreParser::NOUNCONNECTED_DRIVE_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

VerilogPreParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::NumberContext::UNSIGNED_NUMBER() {
  return getToken(VerilogPreParser::UNSIGNED_NUMBER, 0);
}


size_t VerilogPreParser::NumberContext::getRuleIndex() const {
  return VerilogPreParser::RuleNumber;
}


std::any VerilogPreParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::NumberContext* VerilogPreParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 58, VerilogPreParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    match(VerilogPreParser::UNSIGNED_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pragma_directiveContext ------------------------------------------------------------------

VerilogPreParser::Pragma_directiveContext::Pragma_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Pragma_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Pragma_directiveContext::PRAGMA_DIRECTIVE() {
  return getToken(VerilogPreParser::PRAGMA_DIRECTIVE, 0);
}

VerilogPreParser::Pragma_nameContext* VerilogPreParser::Pragma_directiveContext::pragma_name() {
  return getRuleContext<VerilogPreParser::Pragma_nameContext>(0);
}

std::vector<VerilogPreParser::Pragma_expressionContext *> VerilogPreParser::Pragma_directiveContext::pragma_expression() {
  return getRuleContexts<VerilogPreParser::Pragma_expressionContext>();
}

VerilogPreParser::Pragma_expressionContext* VerilogPreParser::Pragma_directiveContext::pragma_expression(size_t i) {
  return getRuleContext<VerilogPreParser::Pragma_expressionContext>(i);
}

std::vector<tree::TerminalNode *> VerilogPreParser::Pragma_directiveContext::CO() {
  return getTokens(VerilogPreParser::CO);
}

tree::TerminalNode* VerilogPreParser::Pragma_directiveContext::CO(size_t i) {
  return getToken(VerilogPreParser::CO, i);
}


size_t VerilogPreParser::Pragma_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RulePragma_directive;
}


std::any VerilogPreParser::Pragma_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitPragma_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Pragma_directiveContext* VerilogPreParser::pragma_directive() {
  Pragma_directiveContext *_localctx = _tracker.createInstance<Pragma_directiveContext>(_ctx, getState());
  enterRule(_localctx, 60, VerilogPreParser::RulePragma_directive);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    match(VerilogPreParser::GA);
    setState(242);
    match(VerilogPreParser::PRAGMA_DIRECTIVE);
    setState(243);
    pragma_name();
    setState(252);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 182) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 182)) & 92274689) != 0)) {
      setState(244);
      pragma_expression();
      setState(249);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == VerilogPreParser::CO) {
        setState(245);
        match(VerilogPreParser::CO);
        setState(246);
        pragma_expression();
        setState(251);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pragma_expressionContext ------------------------------------------------------------------

VerilogPreParser::Pragma_expressionContext::Pragma_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VerilogPreParser::Pragma_valueContext* VerilogPreParser::Pragma_expressionContext::pragma_value() {
  return getRuleContext<VerilogPreParser::Pragma_valueContext>(0);
}

VerilogPreParser::Pragma_keywordContext* VerilogPreParser::Pragma_expressionContext::pragma_keyword() {
  return getRuleContext<VerilogPreParser::Pragma_keywordContext>(0);
}

tree::TerminalNode* VerilogPreParser::Pragma_expressionContext::EQ() {
  return getToken(VerilogPreParser::EQ, 0);
}


size_t VerilogPreParser::Pragma_expressionContext::getRuleIndex() const {
  return VerilogPreParser::RulePragma_expression;
}


std::any VerilogPreParser::Pragma_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitPragma_expression(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Pragma_expressionContext* VerilogPreParser::pragma_expression() {
  Pragma_expressionContext *_localctx = _tracker.createInstance<Pragma_expressionContext>(_ctx, getState());
  enterRule(_localctx, 62, VerilogPreParser::RulePragma_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(254);
      pragma_keyword();
      setState(255);
      match(VerilogPreParser::EQ);
      break;
    }

    default:
      break;
    }
    setState(259);
    pragma_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pragma_keywordContext ------------------------------------------------------------------

VerilogPreParser::Pragma_keywordContext::Pragma_keywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Pragma_keywordContext::SIMPLE_IDENTIFIER() {
  return getToken(VerilogPreParser::SIMPLE_IDENTIFIER, 0);
}


size_t VerilogPreParser::Pragma_keywordContext::getRuleIndex() const {
  return VerilogPreParser::RulePragma_keyword;
}


std::any VerilogPreParser::Pragma_keywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitPragma_keyword(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Pragma_keywordContext* VerilogPreParser::pragma_keyword() {
  Pragma_keywordContext *_localctx = _tracker.createInstance<Pragma_keywordContext>(_ctx, getState());
  enterRule(_localctx, 64, VerilogPreParser::RulePragma_keyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    match(VerilogPreParser::SIMPLE_IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pragma_nameContext ------------------------------------------------------------------

VerilogPreParser::Pragma_nameContext::Pragma_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Pragma_nameContext::SIMPLE_IDENTIFIER() {
  return getToken(VerilogPreParser::SIMPLE_IDENTIFIER, 0);
}


size_t VerilogPreParser::Pragma_nameContext::getRuleIndex() const {
  return VerilogPreParser::RulePragma_name;
}


std::any VerilogPreParser::Pragma_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitPragma_name(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Pragma_nameContext* VerilogPreParser::pragma_name() {
  Pragma_nameContext *_localctx = _tracker.createInstance<Pragma_nameContext>(_ctx, getState());
  enterRule(_localctx, 66, VerilogPreParser::RulePragma_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    match(VerilogPreParser::SIMPLE_IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pragma_valueContext ------------------------------------------------------------------

VerilogPreParser::Pragma_valueContext::Pragma_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Pragma_valueContext::LP() {
  return getToken(VerilogPreParser::LP, 0);
}

std::vector<VerilogPreParser::Pragma_expressionContext *> VerilogPreParser::Pragma_valueContext::pragma_expression() {
  return getRuleContexts<VerilogPreParser::Pragma_expressionContext>();
}

VerilogPreParser::Pragma_expressionContext* VerilogPreParser::Pragma_valueContext::pragma_expression(size_t i) {
  return getRuleContext<VerilogPreParser::Pragma_expressionContext>(i);
}

tree::TerminalNode* VerilogPreParser::Pragma_valueContext::RP() {
  return getToken(VerilogPreParser::RP, 0);
}

std::vector<tree::TerminalNode *> VerilogPreParser::Pragma_valueContext::CO() {
  return getTokens(VerilogPreParser::CO);
}

tree::TerminalNode* VerilogPreParser::Pragma_valueContext::CO(size_t i) {
  return getToken(VerilogPreParser::CO, i);
}

VerilogPreParser::NumberContext* VerilogPreParser::Pragma_valueContext::number() {
  return getRuleContext<VerilogPreParser::NumberContext>(0);
}

VerilogPreParser::String_Context* VerilogPreParser::Pragma_valueContext::string_() {
  return getRuleContext<VerilogPreParser::String_Context>(0);
}

VerilogPreParser::IdentifierContext* VerilogPreParser::Pragma_valueContext::identifier() {
  return getRuleContext<VerilogPreParser::IdentifierContext>(0);
}


size_t VerilogPreParser::Pragma_valueContext::getRuleIndex() const {
  return VerilogPreParser::RulePragma_value;
}


std::any VerilogPreParser::Pragma_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitPragma_value(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Pragma_valueContext* VerilogPreParser::pragma_value() {
  Pragma_valueContext *_localctx = _tracker.createInstance<Pragma_valueContext>(_ctx, getState());
  enterRule(_localctx, 68, VerilogPreParser::RulePragma_value);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(279);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case VerilogPreParser::LP: {
        enterOuterAlt(_localctx, 1);
        setState(265);
        match(VerilogPreParser::LP);
        setState(266);
        pragma_expression();
        setState(271);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == VerilogPreParser::CO) {
          setState(267);
          match(VerilogPreParser::CO);
          setState(268);
          pragma_expression();
          setState(273);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(274);
        match(VerilogPreParser::RP);
        break;
      }

      case VerilogPreParser::UNSIGNED_NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(276);
        number();
        break;
      }

      case VerilogPreParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(277);
        string_();
        break;
      }

      case VerilogPreParser::SIMPLE_IDENTIFIER: {
        enterOuterAlt(_localctx, 4);
        setState(278);
        identifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Resetall_directiveContext ------------------------------------------------------------------

VerilogPreParser::Resetall_directiveContext::Resetall_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Resetall_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Resetall_directiveContext::RESETALL_DIRECTIVE() {
  return getToken(VerilogPreParser::RESETALL_DIRECTIVE, 0);
}


size_t VerilogPreParser::Resetall_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleResetall_directive;
}


std::any VerilogPreParser::Resetall_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitResetall_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Resetall_directiveContext* VerilogPreParser::resetall_directive() {
  Resetall_directiveContext *_localctx = _tracker.createInstance<Resetall_directiveContext>(_ctx, getState());
  enterRule(_localctx, 70, VerilogPreParser::RuleResetall_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281);
    match(VerilogPreParser::GA);
    setState(282);
    match(VerilogPreParser::RESETALL_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Source_text_Context ------------------------------------------------------------------

VerilogPreParser::Source_text_Context::Source_text_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Source_text_Context::SOURCE_TEXT() {
  return getToken(VerilogPreParser::SOURCE_TEXT, 0);
}


size_t VerilogPreParser::Source_text_Context::getRuleIndex() const {
  return VerilogPreParser::RuleSource_text_;
}


std::any VerilogPreParser::Source_text_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitSource_text_(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Source_text_Context* VerilogPreParser::source_text_() {
  Source_text_Context *_localctx = _tracker.createInstance<Source_text_Context>(_ctx, getState());
  enterRule(_localctx, 72, VerilogPreParser::RuleSource_text_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    match(VerilogPreParser::SOURCE_TEXT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_Context ------------------------------------------------------------------

VerilogPreParser::String_Context::String_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::String_Context::STRING() {
  return getToken(VerilogPreParser::STRING, 0);
}


size_t VerilogPreParser::String_Context::getRuleIndex() const {
  return VerilogPreParser::RuleString_;
}


std::any VerilogPreParser::String_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitString_(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::String_Context* VerilogPreParser::string_() {
  String_Context *_localctx = _tracker.createInstance<String_Context>(_ctx, getState());
  enterRule(_localctx, 74, VerilogPreParser::RuleString_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    match(VerilogPreParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Text_macro_definitionContext ------------------------------------------------------------------

VerilogPreParser::Text_macro_definitionContext::Text_macro_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Text_macro_definitionContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Text_macro_definitionContext::DEFINE_DIRECTIVE() {
  return getToken(VerilogPreParser::DEFINE_DIRECTIVE, 0);
}

VerilogPreParser::Macro_nameContext* VerilogPreParser::Text_macro_definitionContext::macro_name() {
  return getRuleContext<VerilogPreParser::Macro_nameContext>(0);
}

VerilogPreParser::Macro_textContext* VerilogPreParser::Text_macro_definitionContext::macro_text() {
  return getRuleContext<VerilogPreParser::Macro_textContext>(0);
}


size_t VerilogPreParser::Text_macro_definitionContext::getRuleIndex() const {
  return VerilogPreParser::RuleText_macro_definition;
}


std::any VerilogPreParser::Text_macro_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitText_macro_definition(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Text_macro_definitionContext* VerilogPreParser::text_macro_definition() {
  Text_macro_definitionContext *_localctx = _tracker.createInstance<Text_macro_definitionContext>(_ctx, getState());
  enterRule(_localctx, 76, VerilogPreParser::RuleText_macro_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    match(VerilogPreParser::GA);
    setState(289);
    match(VerilogPreParser::DEFINE_DIRECTIVE);
    setState(290);
    macro_name();
    setState(291);
    macro_text();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Text_macro_usageContext ------------------------------------------------------------------

VerilogPreParser::Text_macro_usageContext::Text_macro_usageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Text_macro_usageContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

VerilogPreParser::Macro_usageContext* VerilogPreParser::Text_macro_usageContext::macro_usage() {
  return getRuleContext<VerilogPreParser::Macro_usageContext>(0);
}


size_t VerilogPreParser::Text_macro_usageContext::getRuleIndex() const {
  return VerilogPreParser::RuleText_macro_usage;
}


std::any VerilogPreParser::Text_macro_usageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitText_macro_usage(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Text_macro_usageContext* VerilogPreParser::text_macro_usage() {
  Text_macro_usageContext *_localctx = _tracker.createInstance<Text_macro_usageContext>(_ctx, getState());
  enterRule(_localctx, 78, VerilogPreParser::RuleText_macro_usage);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    match(VerilogPreParser::GA);
    setState(294);
    macro_usage();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Time_precisionContext ------------------------------------------------------------------

VerilogPreParser::Time_precisionContext::Time_precisionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Time_precisionContext::TIME_VALUE() {
  return getToken(VerilogPreParser::TIME_VALUE, 0);
}

tree::TerminalNode* VerilogPreParser::Time_precisionContext::TIME_UNIT() {
  return getToken(VerilogPreParser::TIME_UNIT, 0);
}


size_t VerilogPreParser::Time_precisionContext::getRuleIndex() const {
  return VerilogPreParser::RuleTime_precision;
}


std::any VerilogPreParser::Time_precisionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitTime_precision(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Time_precisionContext* VerilogPreParser::time_precision() {
  Time_precisionContext *_localctx = _tracker.createInstance<Time_precisionContext>(_ctx, getState());
  enterRule(_localctx, 80, VerilogPreParser::RuleTime_precision);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    match(VerilogPreParser::TIME_VALUE);
    setState(297);
    match(VerilogPreParser::TIME_UNIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Time_unitContext ------------------------------------------------------------------

VerilogPreParser::Time_unitContext::Time_unitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Time_unitContext::TIME_VALUE() {
  return getToken(VerilogPreParser::TIME_VALUE, 0);
}

tree::TerminalNode* VerilogPreParser::Time_unitContext::TIME_UNIT() {
  return getToken(VerilogPreParser::TIME_UNIT, 0);
}


size_t VerilogPreParser::Time_unitContext::getRuleIndex() const {
  return VerilogPreParser::RuleTime_unit;
}


std::any VerilogPreParser::Time_unitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitTime_unit(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Time_unitContext* VerilogPreParser::time_unit() {
  Time_unitContext *_localctx = _tracker.createInstance<Time_unitContext>(_ctx, getState());
  enterRule(_localctx, 82, VerilogPreParser::RuleTime_unit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    match(VerilogPreParser::TIME_VALUE);
    setState(300);
    match(VerilogPreParser::TIME_UNIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Timescale_directiveContext ------------------------------------------------------------------

VerilogPreParser::Timescale_directiveContext::Timescale_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Timescale_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Timescale_directiveContext::TIMESCALE_DIRECTIVE() {
  return getToken(VerilogPreParser::TIMESCALE_DIRECTIVE, 0);
}

VerilogPreParser::Time_unitContext* VerilogPreParser::Timescale_directiveContext::time_unit() {
  return getRuleContext<VerilogPreParser::Time_unitContext>(0);
}

tree::TerminalNode* VerilogPreParser::Timescale_directiveContext::SL() {
  return getToken(VerilogPreParser::SL, 0);
}

VerilogPreParser::Time_precisionContext* VerilogPreParser::Timescale_directiveContext::time_precision() {
  return getRuleContext<VerilogPreParser::Time_precisionContext>(0);
}


size_t VerilogPreParser::Timescale_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleTimescale_directive;
}


std::any VerilogPreParser::Timescale_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitTimescale_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Timescale_directiveContext* VerilogPreParser::timescale_directive() {
  Timescale_directiveContext *_localctx = _tracker.createInstance<Timescale_directiveContext>(_ctx, getState());
  enterRule(_localctx, 84, VerilogPreParser::RuleTimescale_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    match(VerilogPreParser::GA);
    setState(303);
    match(VerilogPreParser::TIMESCALE_DIRECTIVE);
    setState(304);
    time_unit();
    setState(305);
    match(VerilogPreParser::SL);
    setState(306);
    time_precision();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unconnected_drive_directiveContext ------------------------------------------------------------------

VerilogPreParser::Unconnected_drive_directiveContext::Unconnected_drive_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Unconnected_drive_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Unconnected_drive_directiveContext::UNCONNECTED_DRIVE_DIRECTIVE() {
  return getToken(VerilogPreParser::UNCONNECTED_DRIVE_DIRECTIVE, 0);
}

VerilogPreParser::Unconnected_drive_valueContext* VerilogPreParser::Unconnected_drive_directiveContext::unconnected_drive_value() {
  return getRuleContext<VerilogPreParser::Unconnected_drive_valueContext>(0);
}


size_t VerilogPreParser::Unconnected_drive_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleUnconnected_drive_directive;
}


std::any VerilogPreParser::Unconnected_drive_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitUnconnected_drive_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Unconnected_drive_directiveContext* VerilogPreParser::unconnected_drive_directive() {
  Unconnected_drive_directiveContext *_localctx = _tracker.createInstance<Unconnected_drive_directiveContext>(_ctx, getState());
  enterRule(_localctx, 86, VerilogPreParser::RuleUnconnected_drive_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
    match(VerilogPreParser::GA);
    setState(309);
    match(VerilogPreParser::UNCONNECTED_DRIVE_DIRECTIVE);
    setState(310);
    unconnected_drive_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unconnected_drive_valueContext ------------------------------------------------------------------

VerilogPreParser::Unconnected_drive_valueContext::Unconnected_drive_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Unconnected_drive_valueContext::UNCONNECTED_DRIVE_VALUE() {
  return getToken(VerilogPreParser::UNCONNECTED_DRIVE_VALUE, 0);
}


size_t VerilogPreParser::Unconnected_drive_valueContext::getRuleIndex() const {
  return VerilogPreParser::RuleUnconnected_drive_value;
}


std::any VerilogPreParser::Unconnected_drive_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitUnconnected_drive_value(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Unconnected_drive_valueContext* VerilogPreParser::unconnected_drive_value() {
  Unconnected_drive_valueContext *_localctx = _tracker.createInstance<Unconnected_drive_valueContext>(_ctx, getState());
  enterRule(_localctx, 88, VerilogPreParser::RuleUnconnected_drive_value);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    match(VerilogPreParser::UNCONNECTED_DRIVE_VALUE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Undef_directiveContext ------------------------------------------------------------------

VerilogPreParser::Undef_directiveContext::Undef_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Undef_directiveContext::GA() {
  return getToken(VerilogPreParser::GA, 0);
}

tree::TerminalNode* VerilogPreParser::Undef_directiveContext::UNDEF_DIRECTIVE() {
  return getToken(VerilogPreParser::UNDEF_DIRECTIVE, 0);
}

VerilogPreParser::Macro_identifierContext* VerilogPreParser::Undef_directiveContext::macro_identifier() {
  return getRuleContext<VerilogPreParser::Macro_identifierContext>(0);
}


size_t VerilogPreParser::Undef_directiveContext::getRuleIndex() const {
  return VerilogPreParser::RuleUndef_directive;
}


std::any VerilogPreParser::Undef_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitUndef_directive(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Undef_directiveContext* VerilogPreParser::undef_directive() {
  Undef_directiveContext *_localctx = _tracker.createInstance<Undef_directiveContext>(_ctx, getState());
  enterRule(_localctx, 90, VerilogPreParser::RuleUndef_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    match(VerilogPreParser::GA);
    setState(315);
    match(VerilogPreParser::UNDEF_DIRECTIVE);
    setState(316);
    macro_identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Version_specifierContext ------------------------------------------------------------------

VerilogPreParser::Version_specifierContext::Version_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VerilogPreParser::Version_specifierContext::VERSION_SPECIFIER() {
  return getToken(VerilogPreParser::VERSION_SPECIFIER, 0);
}


size_t VerilogPreParser::Version_specifierContext::getRuleIndex() const {
  return VerilogPreParser::RuleVersion_specifier;
}


std::any VerilogPreParser::Version_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VerilogPreParserVisitor*>(visitor))
    return parserVisitor->visitVersion_specifier(this);
  else
    return visitor->visitChildren(this);
}

VerilogPreParser::Version_specifierContext* VerilogPreParser::version_specifier() {
  Version_specifierContext *_localctx = _tracker.createInstance<Version_specifierContext>(_ctx, getState());
  enterRule(_localctx, 92, VerilogPreParser::RuleVersion_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    match(VerilogPreParser::VERSION_SPECIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void VerilogPreParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  verilogpreparserParserInitialize();
#else
  ::antlr4::internal::call_once(verilogpreparserParserOnceFlag, verilogpreparserParserInitialize);
#endif
}
