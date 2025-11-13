// Generated from /home/stuart/Documents/VA/Verilog-A/grammar/VerilogPreParser.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class VerilogPreParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		ALWAYS=1, AND=2, ASSIGN=3, AUTOMATIC=4, BEGIN=5, BUF=6, BUFIFONE=7, BUFIFZERO=8, 
		CASE=9, CASEX=10, CASEZ=11, CELL=12, CMOS=13, CONFIG=14, DEASSIGN=15, 
		DEFAULT=16, DEFPARAM=17, DESIGN=18, DISABLE=19, DLFULLSKEW=20, DLHOLD=21, 
		DLNOCHANGE=22, DLPERIOD=23, DLRECOVERY=24, DLRECREM=25, DLREMOVAL=26, 
		DLSETUP=27, DLSETUPHOLD=28, DLSKEW=29, DLTIMESKEW=30, DLWIDTH=31, EDGE=32, 
		ELSE=33, END=34, ENDCASE=35, ENDCONFIG=36, ENDFUNCTION=37, ENDGENERATE=38, 
		ENDMODULE=39, ENDPRIMITIVE=40, ENDSPECIFY=41, ENDTABLE=42, ENDTASK=43, 
		EVENT=44, FOR=45, FORCE=46, FOREVER=47, FORK=48, FUNCTION=49, GENERATE=50, 
		GENVAR=51, HIGHZONE=52, HIGHZZERO=53, IF=54, IFNONE=55, INCLUDE=56, INITIAL=57, 
		INOUT=58, INPUT=59, INSTANCE=60, INTEGER=61, JOIN=62, LARGE=63, LIBLIST=64, 
		LIBRARY=65, LOCALPARAM=66, MACROMODULE=67, MEDIUM=68, MIINCDIR=69, MODULE=70, 
		NAND=71, NEGEDGE=72, NMOS=73, NOR=74, NOSHOWCANCELLED=75, NOT=76, NOTIFONE=77, 
		NOTIFZERO=78, OR=79, OUTPUT=80, PARAMETER=81, PATHPULSEDL=82, PMOS=83, 
		POSEDGE=84, PRIMITIVE=85, PULLDOWN=86, PULLONE=87, PULLUP=88, PULLZERO=89, 
		PULSESTYLE_ONDETECT=90, PULSESTYLE_ONEVENT=91, RCMOS=92, REAL=93, REALTIME=94, 
		REG=95, RELEASE=96, REPEAT=97, RNMOS=98, RPMOS=99, RTRAN=100, RTRANIFONE=101, 
		RTRANIFZERO=102, SCALARED=103, SHOWCANCELLED=104, SIGNED=105, SMALL=106, 
		SPECIFY=107, SPECPARAM=108, STRONGONE=109, STRONGZERO=110, SUPPLYONE=111, 
		SUPPLYZERO=112, TABLE=113, TASK=114, TIME=115, TRAN=116, TRANIFONE=117, 
		TRANIFZERO=118, TRI=119, TRIAND=120, TRIONE=121, TRIOR=122, TRIREG=123, 
		TRIZERO=124, USE=125, UWIRE=126, VECTORED=127, WAIT=128, WAND=129, WEAKONE=130, 
		WEAKZERO=131, WHILE=132, WIRE=133, WOR=134, XNOR=135, XOR=136, ANALOG=137, 
		ELECTRICAL=138, BRANCH=139, DISCIPLINE=140, ENDDISCIPLINE=141, NATURE=142, 
		ENDNATURE=143, VOLTAGE=144, CURRENT=145, FLOW=146, DOMAIN=147, POTENTIAL=148, 
		UNITS=149, ACCESS=150, IDT_NATURE=151, DDT_NATURE=152, ABSTOL=153, LTPL=154, 
		AMAMAM=155, EMEQEQ=156, EQEQEQ=157, GTGTGT=158, LTLTLT=159, MICL=160, 
		MIGT=161, LTEQ=162, LTLT=163, AMAM=164, ASGT=165, EQEQ=166, ASAS=167, 
		CATI=168, EMEQ=169, GTEQ=170, GTGT=171, EQGT=172, TIAM=173, TICA=174, 
		TIVL=175, VLVL=176, VL=177, AM=178, AS=179, AT=180, CA=181, CL=182, CO=183, 
		DL=184, DQ=185, DT=186, EM=187, EQ=188, GA=189, GT=190, HA=191, LB=192, 
		LC=193, LP=194, LT=195, MI=196, MO=197, PL=198, PLCL=199, QM=200, RB=201, 
		RC=202, RP=203, SC=204, SL=205, TI=206, BINARY_BASE=207, BLOCK_COMMENT=208, 
		DECIMAL_BASE=209, ESCAPED_IDENTIFIER=210, EXPONENTIAL_NUMBER=211, FIXED_POINT_NUMBER=212, 
		HEX_BASE=213, LINE_COMMENT=214, OCTAL_BASE=215, SIMPLE_IDENTIFIER=216, 
		STRING=217, SYSTEM_TF_IDENTIFIER=218, UNSIGNED_NUMBER=219, UNIT_NUMBER=220, 
		WHITE_SPACE=221, BINARY_VALUE=222, X_OR_Z_UNDERSCORE=223, EDGE_DESCRIPTOR=224, 
		HEX_VALUE=225, FILE_PATH_SPEC=226, OCTAL_VALUE=227, EDGE_SYMBOL=228, LEVEL_ONLY_SYMBOL=229, 
		OUTPUT_OR_LEVEL_SYMBOL=230, BEGIN_KEYWORDS_DIRECTIVE=231, CELLDEFINE_DIRECTIVE=232, 
		DEFAULT_NETTYPE_DIRECTIVE=233, DEFINE_DIRECTIVE=234, ELSE_DIRECTIVE=235, 
		ELSIF_DIRECTIVE=236, END_KEYWORDS_DIRECTIVE=237, ENDCELLDEFINE_DIRECTIVE=238, 
		ENDIF_DIRECTIVE=239, IFDEF_DIRECTIVE=240, IFNDEF_DIRECTIVE=241, INCLUDE_DIRECTIVE=242, 
		LINE_DIRECTIVE=243, NOUNCONNECTED_DRIVE_DIRECTIVE=244, PRAGMA_DIRECTIVE=245, 
		RESETALL_DIRECTIVE=246, TIMESCALE_DIRECTIVE=247, UNCONNECTED_DRIVE_DIRECTIVE=248, 
		UNDEF_DIRECTIVE=249, MACRO_USAGE=250, VERSION_SPECIFIER=251, DEFAULT_NETTYPE_VALUE=252, 
		MACRO_NAME=253, FILENAME=254, MACRO_DELIMITER=255, MACRO_ESC_NEWLINE=256, 
		MACRO_ESC_QUOTE=257, MACRO_QUOTE=258, MACRO_TEXT=259, SOURCE_TEXT=260, 
		TIME_UNIT=261, TIME_VALUE=262, UNCONNECTED_DRIVE_VALUE=263, MACRO_IDENTIFIER=264, 
		IDENTIFIER=265;
	public static final int
		RULE_source_text = 0, RULE_compiler_directive = 1, RULE_begin_keywords_directive = 2, 
		RULE_celldefine_directive = 3, RULE_default_nettype_directive = 4, RULE_default_nettype_value = 5, 
		RULE_else_directive = 6, RULE_elsif_directive = 7, RULE_end_keywords_directive = 8, 
		RULE_endcelldefine_directive = 9, RULE_endif_directive = 10, RULE_filename = 11, 
		RULE_group_of_lines = 12, RULE_identifier = 13, RULE_ifdef_directive = 14, 
		RULE_ifndef_directive = 15, RULE_include_directive = 16, RULE_level = 17, 
		RULE_line_directive = 18, RULE_macro_delimiter = 19, RULE_macro_esc_newline = 20, 
		RULE_macro_esc_quote = 21, RULE_macro_identifier = 22, RULE_macro_name = 23, 
		RULE_macro_quote = 24, RULE_macro_text = 25, RULE_macro_text_ = 26, RULE_macro_usage = 27, 
		RULE_nounconnected_drive_directive = 28, RULE_number = 29, RULE_pragma_directive = 30, 
		RULE_pragma_expression = 31, RULE_pragma_keyword = 32, RULE_pragma_name = 33, 
		RULE_pragma_value = 34, RULE_resetall_directive = 35, RULE_source_text_ = 36, 
		RULE_string_ = 37, RULE_text_macro_definition = 38, RULE_text_macro_usage = 39, 
		RULE_time_precision = 40, RULE_time_unit = 41, RULE_timescale_directive = 42, 
		RULE_unconnected_drive_directive = 43, RULE_unconnected_drive_value = 44, 
		RULE_undef_directive = 45, RULE_version_specifier = 46;
	private static String[] makeRuleNames() {
		return new String[] {
			"source_text", "compiler_directive", "begin_keywords_directive", "celldefine_directive", 
			"default_nettype_directive", "default_nettype_value", "else_directive", 
			"elsif_directive", "end_keywords_directive", "endcelldefine_directive", 
			"endif_directive", "filename", "group_of_lines", "identifier", "ifdef_directive", 
			"ifndef_directive", "include_directive", "level", "line_directive", "macro_delimiter", 
			"macro_esc_newline", "macro_esc_quote", "macro_identifier", "macro_name", 
			"macro_quote", "macro_text", "macro_text_", "macro_usage", "nounconnected_drive_directive", 
			"number", "pragma_directive", "pragma_expression", "pragma_keyword", 
			"pragma_name", "pragma_value", "resetall_directive", "source_text_", 
			"string_", "text_macro_definition", "text_macro_usage", "time_precision", 
			"time_unit", "timescale_directive", "unconnected_drive_directive", "unconnected_drive_value", 
			"undef_directive", "version_specifier"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'always'", "'and'", "'assign'", "'automatic'", "'begin'", "'buf'", 
			"'bufif1'", "'bufif0'", "'case'", "'casex'", "'casez'", "'cell'", "'cmos'", 
			"'config'", "'deassign'", "'default'", "'defparam'", "'design'", "'disable'", 
			"'$fullskew'", "'$hold'", "'$nochange'", "'$period'", "'$recovery'", 
			"'$recrem'", "'$removal'", "'$setup'", "'$setuphold'", "'$skew'", "'$timeskew'", 
			"'$width'", "'edge'", "'else'", "'end'", "'endcase'", "'endconfig'", 
			"'endfunction'", "'endgenerate'", "'endmodule'", "'endprimitive'", "'endspecify'", 
			"'endtable'", "'endtask'", "'event'", "'for'", "'force'", "'forever'", 
			"'fork'", "'function'", "'generate'", "'genvar'", "'highz1'", "'highz0'", 
			"'if'", "'ifnone'", "'include'", "'initial'", "'inout'", "'input'", "'instance'", 
			"'integer'", "'join'", "'large'", "'liblist'", "'library'", "'localparam'", 
			"'macromodule'", "'medium'", "'-incdir'", "'module'", "'nand'", "'negedge'", 
			"'nmos'", "'nor'", "'noshowcancelled'", "'not'", "'notif1'", "'notif0'", 
			"'or'", "'output'", "'parameter'", "'PATHPULSE$'", "'pmos'", "'posedge'", 
			"'primitive'", "'pulldown'", "'pull1'", "'pullup'", "'pull0'", "'pulsestyle_ondetect'", 
			"'pulsestyle_onevent'", "'rcmos'", "'real'", "'realtime'", "'reg'", "'release'", 
			"'repeat'", "'rnmos'", "'rpmos'", "'rtran'", "'rtranif1'", "'rtranif0'", 
			"'scalared'", "'showcancelled'", "'signed'", "'small'", "'specify'", 
			"'specparam'", "'strong1'", "'strong0'", "'supply1'", "'supply0'", "'table'", 
			"'task'", "'time'", "'tran'", "'tranif1'", "'tranif0'", "'tri'", "'triand'", 
			"'tri1'", "'trior'", "'trireg'", "'tri0'", "'use'", "'uwire'", "'vectored'", 
			"'wait'", "'wand'", "'weak1'", "'weak0'", "'while'", "'wire'", "'wor'", 
			"'xnor'", "'xor'", "'analog'", "'electrical'", "'branch'", "'discipline'", 
			"'enddiscipline'", "'nature'", "'endnature'", "'voltage'", "'current'", 
			"'flow'", "'domain'", "'potential'", "'units'", "'access'", "'idt_nature'", 
			"'ddt_nature'", "'abstol'", "'<+'", "'&&&'", "'!=='", "'==='", "'>>>'", 
			"'<<<'", "'-:'", "'->'", "'<='", "'<<'", "'&&'", "'*>'", "'=='", "'**'", 
			"'^~'", "'!='", "'>='", "'>>'", "'=>'", "'~&'", "'~^'", "'~|'", "'||'", 
			"'|'", "'&'", "'*'", "'@'", "'^'", "':'", "','", "'$'", "'\"'", "'.'", 
			"'!'", "'='", null, "'>'", "'#'", "'['", "'{'", "'('", "'<'", "'-'", 
			"'%'", "'+'", "'+:'", "'?'", "']'", "'}'", "')'", "';'", "'/'", "'~'", 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, "'celldefine'", null, null, null, null, "'end_keywords'", "'endcelldefine'", 
			null, null, null, null, null, "'nounconnected_drive'", null, "'resetall'", 
			null, null, null, null, null, null, null, null, "'``'", null, "'`\\`\"'", 
			"'`\"'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "ALWAYS", "AND", "ASSIGN", "AUTOMATIC", "BEGIN", "BUF", "BUFIFONE", 
			"BUFIFZERO", "CASE", "CASEX", "CASEZ", "CELL", "CMOS", "CONFIG", "DEASSIGN", 
			"DEFAULT", "DEFPARAM", "DESIGN", "DISABLE", "DLFULLSKEW", "DLHOLD", "DLNOCHANGE", 
			"DLPERIOD", "DLRECOVERY", "DLRECREM", "DLREMOVAL", "DLSETUP", "DLSETUPHOLD", 
			"DLSKEW", "DLTIMESKEW", "DLWIDTH", "EDGE", "ELSE", "END", "ENDCASE", 
			"ENDCONFIG", "ENDFUNCTION", "ENDGENERATE", "ENDMODULE", "ENDPRIMITIVE", 
			"ENDSPECIFY", "ENDTABLE", "ENDTASK", "EVENT", "FOR", "FORCE", "FOREVER", 
			"FORK", "FUNCTION", "GENERATE", "GENVAR", "HIGHZONE", "HIGHZZERO", "IF", 
			"IFNONE", "INCLUDE", "INITIAL", "INOUT", "INPUT", "INSTANCE", "INTEGER", 
			"JOIN", "LARGE", "LIBLIST", "LIBRARY", "LOCALPARAM", "MACROMODULE", "MEDIUM", 
			"MIINCDIR", "MODULE", "NAND", "NEGEDGE", "NMOS", "NOR", "NOSHOWCANCELLED", 
			"NOT", "NOTIFONE", "NOTIFZERO", "OR", "OUTPUT", "PARAMETER", "PATHPULSEDL", 
			"PMOS", "POSEDGE", "PRIMITIVE", "PULLDOWN", "PULLONE", "PULLUP", "PULLZERO", 
			"PULSESTYLE_ONDETECT", "PULSESTYLE_ONEVENT", "RCMOS", "REAL", "REALTIME", 
			"REG", "RELEASE", "REPEAT", "RNMOS", "RPMOS", "RTRAN", "RTRANIFONE", 
			"RTRANIFZERO", "SCALARED", "SHOWCANCELLED", "SIGNED", "SMALL", "SPECIFY", 
			"SPECPARAM", "STRONGONE", "STRONGZERO", "SUPPLYONE", "SUPPLYZERO", "TABLE", 
			"TASK", "TIME", "TRAN", "TRANIFONE", "TRANIFZERO", "TRI", "TRIAND", "TRIONE", 
			"TRIOR", "TRIREG", "TRIZERO", "USE", "UWIRE", "VECTORED", "WAIT", "WAND", 
			"WEAKONE", "WEAKZERO", "WHILE", "WIRE", "WOR", "XNOR", "XOR", "ANALOG", 
			"ELECTRICAL", "BRANCH", "DISCIPLINE", "ENDDISCIPLINE", "NATURE", "ENDNATURE", 
			"VOLTAGE", "CURRENT", "FLOW", "DOMAIN", "POTENTIAL", "UNITS", "ACCESS", 
			"IDT_NATURE", "DDT_NATURE", "ABSTOL", "LTPL", "AMAMAM", "EMEQEQ", "EQEQEQ", 
			"GTGTGT", "LTLTLT", "MICL", "MIGT", "LTEQ", "LTLT", "AMAM", "ASGT", "EQEQ", 
			"ASAS", "CATI", "EMEQ", "GTEQ", "GTGT", "EQGT", "TIAM", "TICA", "TIVL", 
			"VLVL", "VL", "AM", "AS", "AT", "CA", "CL", "CO", "DL", "DQ", "DT", "EM", 
			"EQ", "GA", "GT", "HA", "LB", "LC", "LP", "LT", "MI", "MO", "PL", "PLCL", 
			"QM", "RB", "RC", "RP", "SC", "SL", "TI", "BINARY_BASE", "BLOCK_COMMENT", 
			"DECIMAL_BASE", "ESCAPED_IDENTIFIER", "EXPONENTIAL_NUMBER", "FIXED_POINT_NUMBER", 
			"HEX_BASE", "LINE_COMMENT", "OCTAL_BASE", "SIMPLE_IDENTIFIER", "STRING", 
			"SYSTEM_TF_IDENTIFIER", "UNSIGNED_NUMBER", "UNIT_NUMBER", "WHITE_SPACE", 
			"BINARY_VALUE", "X_OR_Z_UNDERSCORE", "EDGE_DESCRIPTOR", "HEX_VALUE", 
			"FILE_PATH_SPEC", "OCTAL_VALUE", "EDGE_SYMBOL", "LEVEL_ONLY_SYMBOL", 
			"OUTPUT_OR_LEVEL_SYMBOL", "BEGIN_KEYWORDS_DIRECTIVE", "CELLDEFINE_DIRECTIVE", 
			"DEFAULT_NETTYPE_DIRECTIVE", "DEFINE_DIRECTIVE", "ELSE_DIRECTIVE", "ELSIF_DIRECTIVE", 
			"END_KEYWORDS_DIRECTIVE", "ENDCELLDEFINE_DIRECTIVE", "ENDIF_DIRECTIVE", 
			"IFDEF_DIRECTIVE", "IFNDEF_DIRECTIVE", "INCLUDE_DIRECTIVE", "LINE_DIRECTIVE", 
			"NOUNCONNECTED_DRIVE_DIRECTIVE", "PRAGMA_DIRECTIVE", "RESETALL_DIRECTIVE", 
			"TIMESCALE_DIRECTIVE", "UNCONNECTED_DRIVE_DIRECTIVE", "UNDEF_DIRECTIVE", 
			"MACRO_USAGE", "VERSION_SPECIFIER", "DEFAULT_NETTYPE_VALUE", "MACRO_NAME", 
			"FILENAME", "MACRO_DELIMITER", "MACRO_ESC_NEWLINE", "MACRO_ESC_QUOTE", 
			"MACRO_QUOTE", "MACRO_TEXT", "SOURCE_TEXT", "TIME_UNIT", "TIME_VALUE", 
			"UNCONNECTED_DRIVE_VALUE", "MACRO_IDENTIFIER", "IDENTIFIER"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "VerilogPreParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public VerilogPreParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Source_textContext extends ParserRuleContext {
		public List<Compiler_directiveContext> compiler_directive() {
			return getRuleContexts(Compiler_directiveContext.class);
		}
		public Compiler_directiveContext compiler_directive(int i) {
			return getRuleContext(Compiler_directiveContext.class,i);
		}
		public Source_textContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_source_text; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterSource_text(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitSource_text(this);
		}
	}

	public final Source_textContext source_text() throws RecognitionException {
		Source_textContext _localctx = new Source_textContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_source_text);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(97);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==GA) {
				{
				{
				setState(94);
				compiler_directive();
				}
				}
				setState(99);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Compiler_directiveContext extends ParserRuleContext {
		public Begin_keywords_directiveContext begin_keywords_directive() {
			return getRuleContext(Begin_keywords_directiveContext.class,0);
		}
		public Celldefine_directiveContext celldefine_directive() {
			return getRuleContext(Celldefine_directiveContext.class,0);
		}
		public Default_nettype_directiveContext default_nettype_directive() {
			return getRuleContext(Default_nettype_directiveContext.class,0);
		}
		public End_keywords_directiveContext end_keywords_directive() {
			return getRuleContext(End_keywords_directiveContext.class,0);
		}
		public Endcelldefine_directiveContext endcelldefine_directive() {
			return getRuleContext(Endcelldefine_directiveContext.class,0);
		}
		public Ifdef_directiveContext ifdef_directive() {
			return getRuleContext(Ifdef_directiveContext.class,0);
		}
		public Ifndef_directiveContext ifndef_directive() {
			return getRuleContext(Ifndef_directiveContext.class,0);
		}
		public Include_directiveContext include_directive() {
			return getRuleContext(Include_directiveContext.class,0);
		}
		public Line_directiveContext line_directive() {
			return getRuleContext(Line_directiveContext.class,0);
		}
		public Nounconnected_drive_directiveContext nounconnected_drive_directive() {
			return getRuleContext(Nounconnected_drive_directiveContext.class,0);
		}
		public Pragma_directiveContext pragma_directive() {
			return getRuleContext(Pragma_directiveContext.class,0);
		}
		public Resetall_directiveContext resetall_directive() {
			return getRuleContext(Resetall_directiveContext.class,0);
		}
		public Text_macro_definitionContext text_macro_definition() {
			return getRuleContext(Text_macro_definitionContext.class,0);
		}
		public Text_macro_usageContext text_macro_usage() {
			return getRuleContext(Text_macro_usageContext.class,0);
		}
		public Timescale_directiveContext timescale_directive() {
			return getRuleContext(Timescale_directiveContext.class,0);
		}
		public Unconnected_drive_directiveContext unconnected_drive_directive() {
			return getRuleContext(Unconnected_drive_directiveContext.class,0);
		}
		public Undef_directiveContext undef_directive() {
			return getRuleContext(Undef_directiveContext.class,0);
		}
		public Compiler_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compiler_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterCompiler_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitCompiler_directive(this);
		}
	}

	public final Compiler_directiveContext compiler_directive() throws RecognitionException {
		Compiler_directiveContext _localctx = new Compiler_directiveContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_compiler_directive);
		try {
			setState(117);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(100);
				begin_keywords_directive();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(101);
				celldefine_directive();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(102);
				default_nettype_directive();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(103);
				end_keywords_directive();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(104);
				endcelldefine_directive();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(105);
				ifdef_directive();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(106);
				ifndef_directive();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(107);
				include_directive();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(108);
				line_directive();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(109);
				nounconnected_drive_directive();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(110);
				pragma_directive();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(111);
				resetall_directive();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(112);
				text_macro_definition();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(113);
				text_macro_usage();
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(114);
				timescale_directive();
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(115);
				unconnected_drive_directive();
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(116);
				undef_directive();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Begin_keywords_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode BEGIN_KEYWORDS_DIRECTIVE() { return getToken(VerilogPreParser.BEGIN_KEYWORDS_DIRECTIVE, 0); }
		public List<TerminalNode> DQ() { return getTokens(VerilogPreParser.DQ); }
		public TerminalNode DQ(int i) {
			return getToken(VerilogPreParser.DQ, i);
		}
		public Version_specifierContext version_specifier() {
			return getRuleContext(Version_specifierContext.class,0);
		}
		public Begin_keywords_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_begin_keywords_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterBegin_keywords_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitBegin_keywords_directive(this);
		}
	}

	public final Begin_keywords_directiveContext begin_keywords_directive() throws RecognitionException {
		Begin_keywords_directiveContext _localctx = new Begin_keywords_directiveContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_begin_keywords_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(119);
			match(GA);
			setState(120);
			match(BEGIN_KEYWORDS_DIRECTIVE);
			setState(121);
			match(DQ);
			setState(122);
			version_specifier();
			setState(123);
			match(DQ);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Celldefine_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode CELLDEFINE_DIRECTIVE() { return getToken(VerilogPreParser.CELLDEFINE_DIRECTIVE, 0); }
		public Celldefine_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_celldefine_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterCelldefine_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitCelldefine_directive(this);
		}
	}

	public final Celldefine_directiveContext celldefine_directive() throws RecognitionException {
		Celldefine_directiveContext _localctx = new Celldefine_directiveContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_celldefine_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(125);
			match(GA);
			setState(126);
			match(CELLDEFINE_DIRECTIVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Default_nettype_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode DEFAULT_NETTYPE_DIRECTIVE() { return getToken(VerilogPreParser.DEFAULT_NETTYPE_DIRECTIVE, 0); }
		public Default_nettype_valueContext default_nettype_value() {
			return getRuleContext(Default_nettype_valueContext.class,0);
		}
		public Default_nettype_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_default_nettype_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterDefault_nettype_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitDefault_nettype_directive(this);
		}
	}

	public final Default_nettype_directiveContext default_nettype_directive() throws RecognitionException {
		Default_nettype_directiveContext _localctx = new Default_nettype_directiveContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_default_nettype_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(128);
			match(GA);
			setState(129);
			match(DEFAULT_NETTYPE_DIRECTIVE);
			setState(130);
			default_nettype_value();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Default_nettype_valueContext extends ParserRuleContext {
		public TerminalNode DEFAULT_NETTYPE_VALUE() { return getToken(VerilogPreParser.DEFAULT_NETTYPE_VALUE, 0); }
		public Default_nettype_valueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_default_nettype_value; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterDefault_nettype_value(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitDefault_nettype_value(this);
		}
	}

	public final Default_nettype_valueContext default_nettype_value() throws RecognitionException {
		Default_nettype_valueContext _localctx = new Default_nettype_valueContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_default_nettype_value);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(132);
			match(DEFAULT_NETTYPE_VALUE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Else_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode ELSE_DIRECTIVE() { return getToken(VerilogPreParser.ELSE_DIRECTIVE, 0); }
		public Group_of_linesContext group_of_lines() {
			return getRuleContext(Group_of_linesContext.class,0);
		}
		public Else_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_else_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterElse_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitElse_directive(this);
		}
	}

	public final Else_directiveContext else_directive() throws RecognitionException {
		Else_directiveContext _localctx = new Else_directiveContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_else_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(134);
			match(GA);
			setState(135);
			match(ELSE_DIRECTIVE);
			setState(136);
			group_of_lines();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Elsif_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode ELSIF_DIRECTIVE() { return getToken(VerilogPreParser.ELSIF_DIRECTIVE, 0); }
		public Macro_identifierContext macro_identifier() {
			return getRuleContext(Macro_identifierContext.class,0);
		}
		public Group_of_linesContext group_of_lines() {
			return getRuleContext(Group_of_linesContext.class,0);
		}
		public Elsif_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elsif_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterElsif_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitElsif_directive(this);
		}
	}

	public final Elsif_directiveContext elsif_directive() throws RecognitionException {
		Elsif_directiveContext _localctx = new Elsif_directiveContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_elsif_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(138);
			match(GA);
			setState(139);
			match(ELSIF_DIRECTIVE);
			setState(140);
			macro_identifier();
			setState(141);
			group_of_lines();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class End_keywords_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode END_KEYWORDS_DIRECTIVE() { return getToken(VerilogPreParser.END_KEYWORDS_DIRECTIVE, 0); }
		public End_keywords_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_end_keywords_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterEnd_keywords_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitEnd_keywords_directive(this);
		}
	}

	public final End_keywords_directiveContext end_keywords_directive() throws RecognitionException {
		End_keywords_directiveContext _localctx = new End_keywords_directiveContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_end_keywords_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(143);
			match(GA);
			setState(144);
			match(END_KEYWORDS_DIRECTIVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Endcelldefine_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode ENDCELLDEFINE_DIRECTIVE() { return getToken(VerilogPreParser.ENDCELLDEFINE_DIRECTIVE, 0); }
		public Endcelldefine_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_endcelldefine_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterEndcelldefine_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitEndcelldefine_directive(this);
		}
	}

	public final Endcelldefine_directiveContext endcelldefine_directive() throws RecognitionException {
		Endcelldefine_directiveContext _localctx = new Endcelldefine_directiveContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_endcelldefine_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(146);
			match(GA);
			setState(147);
			match(ENDCELLDEFINE_DIRECTIVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Endif_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode ENDIF_DIRECTIVE() { return getToken(VerilogPreParser.ENDIF_DIRECTIVE, 0); }
		public Endif_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_endif_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterEndif_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitEndif_directive(this);
		}
	}

	public final Endif_directiveContext endif_directive() throws RecognitionException {
		Endif_directiveContext _localctx = new Endif_directiveContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_endif_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(149);
			match(GA);
			setState(150);
			match(ENDIF_DIRECTIVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FilenameContext extends ParserRuleContext {
		public TerminalNode FILENAME() { return getToken(VerilogPreParser.FILENAME, 0); }
		public FilenameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filename; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterFilename(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitFilename(this);
		}
	}

	public final FilenameContext filename() throws RecognitionException {
		FilenameContext _localctx = new FilenameContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_filename);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(152);
			match(FILENAME);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Group_of_linesContext extends ParserRuleContext {
		public List<Source_text_Context> source_text_() {
			return getRuleContexts(Source_text_Context.class);
		}
		public Source_text_Context source_text_(int i) {
			return getRuleContext(Source_text_Context.class,i);
		}
		public List<Compiler_directiveContext> compiler_directive() {
			return getRuleContexts(Compiler_directiveContext.class);
		}
		public Compiler_directiveContext compiler_directive(int i) {
			return getRuleContext(Compiler_directiveContext.class,i);
		}
		public Group_of_linesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_group_of_lines; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterGroup_of_lines(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitGroup_of_lines(this);
		}
	}

	public final Group_of_linesContext group_of_lines() throws RecognitionException {
		Group_of_linesContext _localctx = new Group_of_linesContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_group_of_lines);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(158);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					setState(156);
					_errHandler.sync(this);
					switch (_input.LA(1)) {
					case SOURCE_TEXT:
						{
						setState(154);
						source_text_();
						}
						break;
					case GA:
						{
						setState(155);
						compiler_directive();
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					} 
				}
				setState(160);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IdentifierContext extends ParserRuleContext {
		public TerminalNode SIMPLE_IDENTIFIER() { return getToken(VerilogPreParser.SIMPLE_IDENTIFIER, 0); }
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterIdentifier(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitIdentifier(this);
		}
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_identifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(161);
			match(SIMPLE_IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Ifdef_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode IFDEF_DIRECTIVE() { return getToken(VerilogPreParser.IFDEF_DIRECTIVE, 0); }
		public Macro_identifierContext macro_identifier() {
			return getRuleContext(Macro_identifierContext.class,0);
		}
		public Group_of_linesContext group_of_lines() {
			return getRuleContext(Group_of_linesContext.class,0);
		}
		public Endif_directiveContext endif_directive() {
			return getRuleContext(Endif_directiveContext.class,0);
		}
		public List<Elsif_directiveContext> elsif_directive() {
			return getRuleContexts(Elsif_directiveContext.class);
		}
		public Elsif_directiveContext elsif_directive(int i) {
			return getRuleContext(Elsif_directiveContext.class,i);
		}
		public Else_directiveContext else_directive() {
			return getRuleContext(Else_directiveContext.class,0);
		}
		public Ifdef_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifdef_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterIfdef_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitIfdef_directive(this);
		}
	}

	public final Ifdef_directiveContext ifdef_directive() throws RecognitionException {
		Ifdef_directiveContext _localctx = new Ifdef_directiveContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_ifdef_directive);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(163);
			match(GA);
			setState(164);
			match(IFDEF_DIRECTIVE);
			setState(165);
			macro_identifier();
			setState(166);
			group_of_lines();
			setState(170);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(167);
					elsif_directive();
					}
					} 
				}
				setState(172);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			}
			setState(174);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				{
				setState(173);
				else_directive();
				}
				break;
			}
			setState(176);
			endif_directive();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Ifndef_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode IFNDEF_DIRECTIVE() { return getToken(VerilogPreParser.IFNDEF_DIRECTIVE, 0); }
		public Macro_identifierContext macro_identifier() {
			return getRuleContext(Macro_identifierContext.class,0);
		}
		public Group_of_linesContext group_of_lines() {
			return getRuleContext(Group_of_linesContext.class,0);
		}
		public Endif_directiveContext endif_directive() {
			return getRuleContext(Endif_directiveContext.class,0);
		}
		public List<Elsif_directiveContext> elsif_directive() {
			return getRuleContexts(Elsif_directiveContext.class);
		}
		public Elsif_directiveContext elsif_directive(int i) {
			return getRuleContext(Elsif_directiveContext.class,i);
		}
		public Else_directiveContext else_directive() {
			return getRuleContext(Else_directiveContext.class,0);
		}
		public Ifndef_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifndef_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterIfndef_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitIfndef_directive(this);
		}
	}

	public final Ifndef_directiveContext ifndef_directive() throws RecognitionException {
		Ifndef_directiveContext _localctx = new Ifndef_directiveContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_ifndef_directive);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(178);
			match(GA);
			setState(179);
			match(IFNDEF_DIRECTIVE);
			setState(180);
			macro_identifier();
			setState(181);
			group_of_lines();
			setState(185);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(182);
					elsif_directive();
					}
					} 
				}
				setState(187);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			}
			setState(189);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				{
				setState(188);
				else_directive();
				}
				break;
			}
			setState(191);
			endif_directive();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Include_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode INCLUDE_DIRECTIVE() { return getToken(VerilogPreParser.INCLUDE_DIRECTIVE, 0); }
		public List<TerminalNode> DQ() { return getTokens(VerilogPreParser.DQ); }
		public TerminalNode DQ(int i) {
			return getToken(VerilogPreParser.DQ, i);
		}
		public FilenameContext filename() {
			return getRuleContext(FilenameContext.class,0);
		}
		public Include_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_include_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterInclude_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitInclude_directive(this);
		}
	}

	public final Include_directiveContext include_directive() throws RecognitionException {
		Include_directiveContext _localctx = new Include_directiveContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_include_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(193);
			match(GA);
			setState(194);
			match(INCLUDE_DIRECTIVE);
			setState(195);
			match(DQ);
			setState(196);
			filename();
			setState(197);
			match(DQ);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LevelContext extends ParserRuleContext {
		public TerminalNode UNSIGNED_NUMBER() { return getToken(VerilogPreParser.UNSIGNED_NUMBER, 0); }
		public LevelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_level; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterLevel(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitLevel(this);
		}
	}

	public final LevelContext level() throws RecognitionException {
		LevelContext _localctx = new LevelContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_level);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(199);
			match(UNSIGNED_NUMBER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Line_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode LINE_DIRECTIVE() { return getToken(VerilogPreParser.LINE_DIRECTIVE, 0); }
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public List<TerminalNode> DQ() { return getTokens(VerilogPreParser.DQ); }
		public TerminalNode DQ(int i) {
			return getToken(VerilogPreParser.DQ, i);
		}
		public FilenameContext filename() {
			return getRuleContext(FilenameContext.class,0);
		}
		public LevelContext level() {
			return getRuleContext(LevelContext.class,0);
		}
		public Line_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_line_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterLine_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitLine_directive(this);
		}
	}

	public final Line_directiveContext line_directive() throws RecognitionException {
		Line_directiveContext _localctx = new Line_directiveContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_line_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(201);
			match(GA);
			setState(202);
			match(LINE_DIRECTIVE);
			setState(203);
			number();
			setState(204);
			match(DQ);
			setState(205);
			filename();
			setState(206);
			match(DQ);
			setState(207);
			level();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Macro_delimiterContext extends ParserRuleContext {
		public TerminalNode MACRO_DELIMITER() { return getToken(VerilogPreParser.MACRO_DELIMITER, 0); }
		public Macro_delimiterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_delimiter; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterMacro_delimiter(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitMacro_delimiter(this);
		}
	}

	public final Macro_delimiterContext macro_delimiter() throws RecognitionException {
		Macro_delimiterContext _localctx = new Macro_delimiterContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_macro_delimiter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(209);
			match(MACRO_DELIMITER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Macro_esc_newlineContext extends ParserRuleContext {
		public TerminalNode MACRO_ESC_NEWLINE() { return getToken(VerilogPreParser.MACRO_ESC_NEWLINE, 0); }
		public Macro_esc_newlineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_esc_newline; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterMacro_esc_newline(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitMacro_esc_newline(this);
		}
	}

	public final Macro_esc_newlineContext macro_esc_newline() throws RecognitionException {
		Macro_esc_newlineContext _localctx = new Macro_esc_newlineContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_macro_esc_newline);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(211);
			match(MACRO_ESC_NEWLINE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Macro_esc_quoteContext extends ParserRuleContext {
		public TerminalNode MACRO_ESC_QUOTE() { return getToken(VerilogPreParser.MACRO_ESC_QUOTE, 0); }
		public Macro_esc_quoteContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_esc_quote; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterMacro_esc_quote(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitMacro_esc_quote(this);
		}
	}

	public final Macro_esc_quoteContext macro_esc_quote() throws RecognitionException {
		Macro_esc_quoteContext _localctx = new Macro_esc_quoteContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_macro_esc_quote);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(213);
			match(MACRO_ESC_QUOTE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Macro_identifierContext extends ParserRuleContext {
		public TerminalNode MACRO_IDENTIFIER() { return getToken(VerilogPreParser.MACRO_IDENTIFIER, 0); }
		public Macro_identifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_identifier; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterMacro_identifier(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitMacro_identifier(this);
		}
	}

	public final Macro_identifierContext macro_identifier() throws RecognitionException {
		Macro_identifierContext _localctx = new Macro_identifierContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_macro_identifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(215);
			match(MACRO_IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Macro_nameContext extends ParserRuleContext {
		public TerminalNode MACRO_NAME() { return getToken(VerilogPreParser.MACRO_NAME, 0); }
		public Macro_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_name; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterMacro_name(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitMacro_name(this);
		}
	}

	public final Macro_nameContext macro_name() throws RecognitionException {
		Macro_nameContext _localctx = new Macro_nameContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_macro_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(217);
			match(MACRO_NAME);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Macro_quoteContext extends ParserRuleContext {
		public TerminalNode MACRO_QUOTE() { return getToken(VerilogPreParser.MACRO_QUOTE, 0); }
		public Macro_quoteContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_quote; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterMacro_quote(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitMacro_quote(this);
		}
	}

	public final Macro_quoteContext macro_quote() throws RecognitionException {
		Macro_quoteContext _localctx = new Macro_quoteContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_macro_quote);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(219);
			match(MACRO_QUOTE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Macro_textContext extends ParserRuleContext {
		public List<Macro_text_Context> macro_text_() {
			return getRuleContexts(Macro_text_Context.class);
		}
		public Macro_text_Context macro_text_(int i) {
			return getRuleContext(Macro_text_Context.class,i);
		}
		public List<Macro_delimiterContext> macro_delimiter() {
			return getRuleContexts(Macro_delimiterContext.class);
		}
		public Macro_delimiterContext macro_delimiter(int i) {
			return getRuleContext(Macro_delimiterContext.class,i);
		}
		public List<Macro_esc_newlineContext> macro_esc_newline() {
			return getRuleContexts(Macro_esc_newlineContext.class);
		}
		public Macro_esc_newlineContext macro_esc_newline(int i) {
			return getRuleContext(Macro_esc_newlineContext.class,i);
		}
		public List<Macro_esc_quoteContext> macro_esc_quote() {
			return getRuleContexts(Macro_esc_quoteContext.class);
		}
		public Macro_esc_quoteContext macro_esc_quote(int i) {
			return getRuleContext(Macro_esc_quoteContext.class,i);
		}
		public List<Macro_quoteContext> macro_quote() {
			return getRuleContexts(Macro_quoteContext.class);
		}
		public Macro_quoteContext macro_quote(int i) {
			return getRuleContext(Macro_quoteContext.class,i);
		}
		public List<String_Context> string_() {
			return getRuleContexts(String_Context.class);
		}
		public String_Context string_(int i) {
			return getRuleContext(String_Context.class,i);
		}
		public Macro_textContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_text; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterMacro_text(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitMacro_text(this);
		}
	}

	public final Macro_textContext macro_text() throws RecognitionException {
		Macro_textContext _localctx = new Macro_textContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_macro_text);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(229);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 217)) & ~0x3f) == 0 && ((1L << (_la - 217)) & 8521215115265L) != 0)) {
				{
				setState(227);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case MACRO_TEXT:
					{
					setState(221);
					macro_text_();
					}
					break;
				case MACRO_DELIMITER:
					{
					setState(222);
					macro_delimiter();
					}
					break;
				case MACRO_ESC_NEWLINE:
					{
					setState(223);
					macro_esc_newline();
					}
					break;
				case MACRO_ESC_QUOTE:
					{
					setState(224);
					macro_esc_quote();
					}
					break;
				case MACRO_QUOTE:
					{
					setState(225);
					macro_quote();
					}
					break;
				case STRING:
					{
					setState(226);
					string_();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(231);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Macro_text_Context extends ParserRuleContext {
		public TerminalNode MACRO_TEXT() { return getToken(VerilogPreParser.MACRO_TEXT, 0); }
		public Macro_text_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_text_; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterMacro_text_(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitMacro_text_(this);
		}
	}

	public final Macro_text_Context macro_text_() throws RecognitionException {
		Macro_text_Context _localctx = new Macro_text_Context(_ctx, getState());
		enterRule(_localctx, 52, RULE_macro_text_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(232);
			match(MACRO_TEXT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Macro_usageContext extends ParserRuleContext {
		public TerminalNode MACRO_USAGE() { return getToken(VerilogPreParser.MACRO_USAGE, 0); }
		public Macro_usageContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_usage; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterMacro_usage(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitMacro_usage(this);
		}
	}

	public final Macro_usageContext macro_usage() throws RecognitionException {
		Macro_usageContext _localctx = new Macro_usageContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_macro_usage);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(234);
			match(MACRO_USAGE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Nounconnected_drive_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode NOUNCONNECTED_DRIVE_DIRECTIVE() { return getToken(VerilogPreParser.NOUNCONNECTED_DRIVE_DIRECTIVE, 0); }
		public Nounconnected_drive_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nounconnected_drive_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterNounconnected_drive_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitNounconnected_drive_directive(this);
		}
	}

	public final Nounconnected_drive_directiveContext nounconnected_drive_directive() throws RecognitionException {
		Nounconnected_drive_directiveContext _localctx = new Nounconnected_drive_directiveContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_nounconnected_drive_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(236);
			match(GA);
			setState(237);
			match(NOUNCONNECTED_DRIVE_DIRECTIVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NumberContext extends ParserRuleContext {
		public TerminalNode UNSIGNED_NUMBER() { return getToken(VerilogPreParser.UNSIGNED_NUMBER, 0); }
		public NumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_number; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterNumber(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitNumber(this);
		}
	}

	public final NumberContext number() throws RecognitionException {
		NumberContext _localctx = new NumberContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_number);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(239);
			match(UNSIGNED_NUMBER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pragma_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode PRAGMA_DIRECTIVE() { return getToken(VerilogPreParser.PRAGMA_DIRECTIVE, 0); }
		public Pragma_nameContext pragma_name() {
			return getRuleContext(Pragma_nameContext.class,0);
		}
		public List<Pragma_expressionContext> pragma_expression() {
			return getRuleContexts(Pragma_expressionContext.class);
		}
		public Pragma_expressionContext pragma_expression(int i) {
			return getRuleContext(Pragma_expressionContext.class,i);
		}
		public List<TerminalNode> CO() { return getTokens(VerilogPreParser.CO); }
		public TerminalNode CO(int i) {
			return getToken(VerilogPreParser.CO, i);
		}
		public Pragma_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pragma_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterPragma_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitPragma_directive(this);
		}
	}

	public final Pragma_directiveContext pragma_directive() throws RecognitionException {
		Pragma_directiveContext _localctx = new Pragma_directiveContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_pragma_directive);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(241);
			match(GA);
			setState(242);
			match(PRAGMA_DIRECTIVE);
			setState(243);
			pragma_name();
			setState(252);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 194)) & ~0x3f) == 0 && ((1L << (_la - 194)) & 46137345L) != 0)) {
				{
				setState(244);
				pragma_expression();
				setState(249);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==CO) {
					{
					{
					setState(245);
					match(CO);
					setState(246);
					pragma_expression();
					}
					}
					setState(251);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pragma_expressionContext extends ParserRuleContext {
		public Pragma_valueContext pragma_value() {
			return getRuleContext(Pragma_valueContext.class,0);
		}
		public Pragma_keywordContext pragma_keyword() {
			return getRuleContext(Pragma_keywordContext.class,0);
		}
		public TerminalNode EQ() { return getToken(VerilogPreParser.EQ, 0); }
		public Pragma_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pragma_expression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterPragma_expression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitPragma_expression(this);
		}
	}

	public final Pragma_expressionContext pragma_expression() throws RecognitionException {
		Pragma_expressionContext _localctx = new Pragma_expressionContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_pragma_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(257);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				{
				setState(254);
				pragma_keyword();
				setState(255);
				match(EQ);
				}
				break;
			}
			setState(259);
			pragma_value();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pragma_keywordContext extends ParserRuleContext {
		public TerminalNode SIMPLE_IDENTIFIER() { return getToken(VerilogPreParser.SIMPLE_IDENTIFIER, 0); }
		public Pragma_keywordContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pragma_keyword; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterPragma_keyword(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitPragma_keyword(this);
		}
	}

	public final Pragma_keywordContext pragma_keyword() throws RecognitionException {
		Pragma_keywordContext _localctx = new Pragma_keywordContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_pragma_keyword);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(261);
			match(SIMPLE_IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pragma_nameContext extends ParserRuleContext {
		public TerminalNode SIMPLE_IDENTIFIER() { return getToken(VerilogPreParser.SIMPLE_IDENTIFIER, 0); }
		public Pragma_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pragma_name; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterPragma_name(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitPragma_name(this);
		}
	}

	public final Pragma_nameContext pragma_name() throws RecognitionException {
		Pragma_nameContext _localctx = new Pragma_nameContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_pragma_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(263);
			match(SIMPLE_IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pragma_valueContext extends ParserRuleContext {
		public TerminalNode LP() { return getToken(VerilogPreParser.LP, 0); }
		public List<Pragma_expressionContext> pragma_expression() {
			return getRuleContexts(Pragma_expressionContext.class);
		}
		public Pragma_expressionContext pragma_expression(int i) {
			return getRuleContext(Pragma_expressionContext.class,i);
		}
		public TerminalNode RP() { return getToken(VerilogPreParser.RP, 0); }
		public List<TerminalNode> CO() { return getTokens(VerilogPreParser.CO); }
		public TerminalNode CO(int i) {
			return getToken(VerilogPreParser.CO, i);
		}
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public String_Context string_() {
			return getRuleContext(String_Context.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Pragma_valueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pragma_value; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterPragma_value(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitPragma_value(this);
		}
	}

	public final Pragma_valueContext pragma_value() throws RecognitionException {
		Pragma_valueContext _localctx = new Pragma_valueContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_pragma_value);
		int _la;
		try {
			setState(279);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LP:
				enterOuterAlt(_localctx, 1);
				{
				setState(265);
				match(LP);
				setState(266);
				pragma_expression();
				setState(271);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==CO) {
					{
					{
					setState(267);
					match(CO);
					setState(268);
					pragma_expression();
					}
					}
					setState(273);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(274);
				match(RP);
				}
				break;
			case UNSIGNED_NUMBER:
				enterOuterAlt(_localctx, 2);
				{
				setState(276);
				number();
				}
				break;
			case STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(277);
				string_();
				}
				break;
			case SIMPLE_IDENTIFIER:
				enterOuterAlt(_localctx, 4);
				{
				setState(278);
				identifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Resetall_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode RESETALL_DIRECTIVE() { return getToken(VerilogPreParser.RESETALL_DIRECTIVE, 0); }
		public Resetall_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_resetall_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterResetall_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitResetall_directive(this);
		}
	}

	public final Resetall_directiveContext resetall_directive() throws RecognitionException {
		Resetall_directiveContext _localctx = new Resetall_directiveContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_resetall_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(281);
			match(GA);
			setState(282);
			match(RESETALL_DIRECTIVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Source_text_Context extends ParserRuleContext {
		public TerminalNode SOURCE_TEXT() { return getToken(VerilogPreParser.SOURCE_TEXT, 0); }
		public Source_text_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_source_text_; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterSource_text_(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitSource_text_(this);
		}
	}

	public final Source_text_Context source_text_() throws RecognitionException {
		Source_text_Context _localctx = new Source_text_Context(_ctx, getState());
		enterRule(_localctx, 72, RULE_source_text_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(284);
			match(SOURCE_TEXT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class String_Context extends ParserRuleContext {
		public TerminalNode STRING() { return getToken(VerilogPreParser.STRING, 0); }
		public String_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string_; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterString_(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitString_(this);
		}
	}

	public final String_Context string_() throws RecognitionException {
		String_Context _localctx = new String_Context(_ctx, getState());
		enterRule(_localctx, 74, RULE_string_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(286);
			match(STRING);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Text_macro_definitionContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode DEFINE_DIRECTIVE() { return getToken(VerilogPreParser.DEFINE_DIRECTIVE, 0); }
		public Macro_nameContext macro_name() {
			return getRuleContext(Macro_nameContext.class,0);
		}
		public Macro_textContext macro_text() {
			return getRuleContext(Macro_textContext.class,0);
		}
		public Text_macro_definitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_text_macro_definition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterText_macro_definition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitText_macro_definition(this);
		}
	}

	public final Text_macro_definitionContext text_macro_definition() throws RecognitionException {
		Text_macro_definitionContext _localctx = new Text_macro_definitionContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_text_macro_definition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(288);
			match(GA);
			setState(289);
			match(DEFINE_DIRECTIVE);
			setState(290);
			macro_name();
			setState(291);
			macro_text();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Text_macro_usageContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public Macro_usageContext macro_usage() {
			return getRuleContext(Macro_usageContext.class,0);
		}
		public Text_macro_usageContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_text_macro_usage; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterText_macro_usage(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitText_macro_usage(this);
		}
	}

	public final Text_macro_usageContext text_macro_usage() throws RecognitionException {
		Text_macro_usageContext _localctx = new Text_macro_usageContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_text_macro_usage);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(293);
			match(GA);
			setState(294);
			macro_usage();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Time_precisionContext extends ParserRuleContext {
		public TerminalNode TIME_VALUE() { return getToken(VerilogPreParser.TIME_VALUE, 0); }
		public TerminalNode TIME_UNIT() { return getToken(VerilogPreParser.TIME_UNIT, 0); }
		public Time_precisionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_time_precision; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterTime_precision(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitTime_precision(this);
		}
	}

	public final Time_precisionContext time_precision() throws RecognitionException {
		Time_precisionContext _localctx = new Time_precisionContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_time_precision);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(296);
			match(TIME_VALUE);
			setState(297);
			match(TIME_UNIT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Time_unitContext extends ParserRuleContext {
		public TerminalNode TIME_VALUE() { return getToken(VerilogPreParser.TIME_VALUE, 0); }
		public TerminalNode TIME_UNIT() { return getToken(VerilogPreParser.TIME_UNIT, 0); }
		public Time_unitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_time_unit; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterTime_unit(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitTime_unit(this);
		}
	}

	public final Time_unitContext time_unit() throws RecognitionException {
		Time_unitContext _localctx = new Time_unitContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_time_unit);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(299);
			match(TIME_VALUE);
			setState(300);
			match(TIME_UNIT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Timescale_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode TIMESCALE_DIRECTIVE() { return getToken(VerilogPreParser.TIMESCALE_DIRECTIVE, 0); }
		public Time_unitContext time_unit() {
			return getRuleContext(Time_unitContext.class,0);
		}
		public TerminalNode SL() { return getToken(VerilogPreParser.SL, 0); }
		public Time_precisionContext time_precision() {
			return getRuleContext(Time_precisionContext.class,0);
		}
		public Timescale_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_timescale_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterTimescale_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitTimescale_directive(this);
		}
	}

	public final Timescale_directiveContext timescale_directive() throws RecognitionException {
		Timescale_directiveContext _localctx = new Timescale_directiveContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_timescale_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(302);
			match(GA);
			setState(303);
			match(TIMESCALE_DIRECTIVE);
			setState(304);
			time_unit();
			setState(305);
			match(SL);
			setState(306);
			time_precision();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Unconnected_drive_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode UNCONNECTED_DRIVE_DIRECTIVE() { return getToken(VerilogPreParser.UNCONNECTED_DRIVE_DIRECTIVE, 0); }
		public Unconnected_drive_valueContext unconnected_drive_value() {
			return getRuleContext(Unconnected_drive_valueContext.class,0);
		}
		public Unconnected_drive_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unconnected_drive_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterUnconnected_drive_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitUnconnected_drive_directive(this);
		}
	}

	public final Unconnected_drive_directiveContext unconnected_drive_directive() throws RecognitionException {
		Unconnected_drive_directiveContext _localctx = new Unconnected_drive_directiveContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_unconnected_drive_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(308);
			match(GA);
			setState(309);
			match(UNCONNECTED_DRIVE_DIRECTIVE);
			setState(310);
			unconnected_drive_value();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Unconnected_drive_valueContext extends ParserRuleContext {
		public TerminalNode UNCONNECTED_DRIVE_VALUE() { return getToken(VerilogPreParser.UNCONNECTED_DRIVE_VALUE, 0); }
		public Unconnected_drive_valueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unconnected_drive_value; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterUnconnected_drive_value(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitUnconnected_drive_value(this);
		}
	}

	public final Unconnected_drive_valueContext unconnected_drive_value() throws RecognitionException {
		Unconnected_drive_valueContext _localctx = new Unconnected_drive_valueContext(_ctx, getState());
		enterRule(_localctx, 88, RULE_unconnected_drive_value);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(312);
			match(UNCONNECTED_DRIVE_VALUE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Undef_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode UNDEF_DIRECTIVE() { return getToken(VerilogPreParser.UNDEF_DIRECTIVE, 0); }
		public Macro_identifierContext macro_identifier() {
			return getRuleContext(Macro_identifierContext.class,0);
		}
		public Undef_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_undef_directive; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterUndef_directive(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitUndef_directive(this);
		}
	}

	public final Undef_directiveContext undef_directive() throws RecognitionException {
		Undef_directiveContext _localctx = new Undef_directiveContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_undef_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(314);
			match(GA);
			setState(315);
			match(UNDEF_DIRECTIVE);
			setState(316);
			macro_identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Version_specifierContext extends ParserRuleContext {
		public TerminalNode VERSION_SPECIFIER() { return getToken(VerilogPreParser.VERSION_SPECIFIER, 0); }
		public Version_specifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_version_specifier; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).enterVersion_specifier(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof VerilogPreParserListener ) ((VerilogPreParserListener)listener).exitVersion_specifier(this);
		}
	}

	public final Version_specifierContext version_specifier() throws RecognitionException {
		Version_specifierContext _localctx = new Version_specifierContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_version_specifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(318);
			match(VERSION_SPECIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001\u0109\u0141\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001"+
		"\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004"+
		"\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007"+
		"\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b"+
		"\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007"+
		"\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007"+
		"\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007"+
		"\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007"+
		"\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002\u001b\u0007"+
		"\u001b\u0002\u001c\u0007\u001c\u0002\u001d\u0007\u001d\u0002\u001e\u0007"+
		"\u001e\u0002\u001f\u0007\u001f\u0002 \u0007 \u0002!\u0007!\u0002\"\u0007"+
		"\"\u0002#\u0007#\u0002$\u0007$\u0002%\u0007%\u0002&\u0007&\u0002\'\u0007"+
		"\'\u0002(\u0007(\u0002)\u0007)\u0002*\u0007*\u0002+\u0007+\u0002,\u0007"+
		",\u0002-\u0007-\u0002.\u0007.\u0001\u0000\u0005\u0000`\b\u0000\n\u0000"+
		"\f\u0000c\t\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0003\u0001v\b\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\b\u0001\t\u0001\t"+
		"\u0001\t\u0001\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\f\u0001"+
		"\f\u0005\f\u009d\b\f\n\f\f\f\u00a0\t\f\u0001\r\u0001\r\u0001\u000e\u0001"+
		"\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0005\u000e\u00a9\b\u000e\n"+
		"\u000e\f\u000e\u00ac\t\u000e\u0001\u000e\u0003\u000e\u00af\b\u000e\u0001"+
		"\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001"+
		"\u000f\u0005\u000f\u00b8\b\u000f\n\u000f\f\u000f\u00bb\t\u000f\u0001\u000f"+
		"\u0003\u000f\u00be\b\u000f\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011"+
		"\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012"+
		"\u0001\u0012\u0001\u0012\u0001\u0013\u0001\u0013\u0001\u0014\u0001\u0014"+
		"\u0001\u0015\u0001\u0015\u0001\u0016\u0001\u0016\u0001\u0017\u0001\u0017"+
		"\u0001\u0018\u0001\u0018\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019"+
		"\u0001\u0019\u0001\u0019\u0005\u0019\u00e4\b\u0019\n\u0019\f\u0019\u00e7"+
		"\t\u0019\u0001\u001a\u0001\u001a\u0001\u001b\u0001\u001b\u0001\u001c\u0001"+
		"\u001c\u0001\u001c\u0001\u001d\u0001\u001d\u0001\u001e\u0001\u001e\u0001"+
		"\u001e\u0001\u001e\u0001\u001e\u0001\u001e\u0005\u001e\u00f8\b\u001e\n"+
		"\u001e\f\u001e\u00fb\t\u001e\u0003\u001e\u00fd\b\u001e\u0001\u001f\u0001"+
		"\u001f\u0001\u001f\u0003\u001f\u0102\b\u001f\u0001\u001f\u0001\u001f\u0001"+
		" \u0001 \u0001!\u0001!\u0001\"\u0001\"\u0001\"\u0001\"\u0005\"\u010e\b"+
		"\"\n\"\f\"\u0111\t\"\u0001\"\u0001\"\u0001\"\u0001\"\u0001\"\u0003\"\u0118"+
		"\b\"\u0001#\u0001#\u0001#\u0001$\u0001$\u0001%\u0001%\u0001&\u0001&\u0001"+
		"&\u0001&\u0001&\u0001\'\u0001\'\u0001\'\u0001(\u0001(\u0001(\u0001)\u0001"+
		")\u0001)\u0001*\u0001*\u0001*\u0001*\u0001*\u0001*\u0001+\u0001+\u0001"+
		"+\u0001+\u0001,\u0001,\u0001-\u0001-\u0001-\u0001-\u0001.\u0001.\u0001"+
		".\u0000\u0000/\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016"+
		"\u0018\u001a\u001c\u001e \"$&(*,.02468:<>@BDFHJLNPRTVXZ\\\u0000\u0000"+
		"\u0135\u0000a\u0001\u0000\u0000\u0000\u0002u\u0001\u0000\u0000\u0000\u0004"+
		"w\u0001\u0000\u0000\u0000\u0006}\u0001\u0000\u0000\u0000\b\u0080\u0001"+
		"\u0000\u0000\u0000\n\u0084\u0001\u0000\u0000\u0000\f\u0086\u0001\u0000"+
		"\u0000\u0000\u000e\u008a\u0001\u0000\u0000\u0000\u0010\u008f\u0001\u0000"+
		"\u0000\u0000\u0012\u0092\u0001\u0000\u0000\u0000\u0014\u0095\u0001\u0000"+
		"\u0000\u0000\u0016\u0098\u0001\u0000\u0000\u0000\u0018\u009e\u0001\u0000"+
		"\u0000\u0000\u001a\u00a1\u0001\u0000\u0000\u0000\u001c\u00a3\u0001\u0000"+
		"\u0000\u0000\u001e\u00b2\u0001\u0000\u0000\u0000 \u00c1\u0001\u0000\u0000"+
		"\u0000\"\u00c7\u0001\u0000\u0000\u0000$\u00c9\u0001\u0000\u0000\u0000"+
		"&\u00d1\u0001\u0000\u0000\u0000(\u00d3\u0001\u0000\u0000\u0000*\u00d5"+
		"\u0001\u0000\u0000\u0000,\u00d7\u0001\u0000\u0000\u0000.\u00d9\u0001\u0000"+
		"\u0000\u00000\u00db\u0001\u0000\u0000\u00002\u00e5\u0001\u0000\u0000\u0000"+
		"4\u00e8\u0001\u0000\u0000\u00006\u00ea\u0001\u0000\u0000\u00008\u00ec"+
		"\u0001\u0000\u0000\u0000:\u00ef\u0001\u0000\u0000\u0000<\u00f1\u0001\u0000"+
		"\u0000\u0000>\u0101\u0001\u0000\u0000\u0000@\u0105\u0001\u0000\u0000\u0000"+
		"B\u0107\u0001\u0000\u0000\u0000D\u0117\u0001\u0000\u0000\u0000F\u0119"+
		"\u0001\u0000\u0000\u0000H\u011c\u0001\u0000\u0000\u0000J\u011e\u0001\u0000"+
		"\u0000\u0000L\u0120\u0001\u0000\u0000\u0000N\u0125\u0001\u0000\u0000\u0000"+
		"P\u0128\u0001\u0000\u0000\u0000R\u012b\u0001\u0000\u0000\u0000T\u012e"+
		"\u0001\u0000\u0000\u0000V\u0134\u0001\u0000\u0000\u0000X\u0138\u0001\u0000"+
		"\u0000\u0000Z\u013a\u0001\u0000\u0000\u0000\\\u013e\u0001\u0000\u0000"+
		"\u0000^`\u0003\u0002\u0001\u0000_^\u0001\u0000\u0000\u0000`c\u0001\u0000"+
		"\u0000\u0000a_\u0001\u0000\u0000\u0000ab\u0001\u0000\u0000\u0000b\u0001"+
		"\u0001\u0000\u0000\u0000ca\u0001\u0000\u0000\u0000dv\u0003\u0004\u0002"+
		"\u0000ev\u0003\u0006\u0003\u0000fv\u0003\b\u0004\u0000gv\u0003\u0010\b"+
		"\u0000hv\u0003\u0012\t\u0000iv\u0003\u001c\u000e\u0000jv\u0003\u001e\u000f"+
		"\u0000kv\u0003 \u0010\u0000lv\u0003$\u0012\u0000mv\u00038\u001c\u0000"+
		"nv\u0003<\u001e\u0000ov\u0003F#\u0000pv\u0003L&\u0000qv\u0003N\'\u0000"+
		"rv\u0003T*\u0000sv\u0003V+\u0000tv\u0003Z-\u0000ud\u0001\u0000\u0000\u0000"+
		"ue\u0001\u0000\u0000\u0000uf\u0001\u0000\u0000\u0000ug\u0001\u0000\u0000"+
		"\u0000uh\u0001\u0000\u0000\u0000ui\u0001\u0000\u0000\u0000uj\u0001\u0000"+
		"\u0000\u0000uk\u0001\u0000\u0000\u0000ul\u0001\u0000\u0000\u0000um\u0001"+
		"\u0000\u0000\u0000un\u0001\u0000\u0000\u0000uo\u0001\u0000\u0000\u0000"+
		"up\u0001\u0000\u0000\u0000uq\u0001\u0000\u0000\u0000ur\u0001\u0000\u0000"+
		"\u0000us\u0001\u0000\u0000\u0000ut\u0001\u0000\u0000\u0000v\u0003\u0001"+
		"\u0000\u0000\u0000wx\u0005\u00bd\u0000\u0000xy\u0005\u00e7\u0000\u0000"+
		"yz\u0005\u00b9\u0000\u0000z{\u0003\\.\u0000{|\u0005\u00b9\u0000\u0000"+
		"|\u0005\u0001\u0000\u0000\u0000}~\u0005\u00bd\u0000\u0000~\u007f\u0005"+
		"\u00e8\u0000\u0000\u007f\u0007\u0001\u0000\u0000\u0000\u0080\u0081\u0005"+
		"\u00bd\u0000\u0000\u0081\u0082\u0005\u00e9\u0000\u0000\u0082\u0083\u0003"+
		"\n\u0005\u0000\u0083\t\u0001\u0000\u0000\u0000\u0084\u0085\u0005\u00fc"+
		"\u0000\u0000\u0085\u000b\u0001\u0000\u0000\u0000\u0086\u0087\u0005\u00bd"+
		"\u0000\u0000\u0087\u0088\u0005\u00eb\u0000\u0000\u0088\u0089\u0003\u0018"+
		"\f\u0000\u0089\r\u0001\u0000\u0000\u0000\u008a\u008b\u0005\u00bd\u0000"+
		"\u0000\u008b\u008c\u0005\u00ec\u0000\u0000\u008c\u008d\u0003,\u0016\u0000"+
		"\u008d\u008e\u0003\u0018\f\u0000\u008e\u000f\u0001\u0000\u0000\u0000\u008f"+
		"\u0090\u0005\u00bd\u0000\u0000\u0090\u0091\u0005\u00ed\u0000\u0000\u0091"+
		"\u0011\u0001\u0000\u0000\u0000\u0092\u0093\u0005\u00bd\u0000\u0000\u0093"+
		"\u0094\u0005\u00ee\u0000\u0000\u0094\u0013\u0001\u0000\u0000\u0000\u0095"+
		"\u0096\u0005\u00bd\u0000\u0000\u0096\u0097\u0005\u00ef\u0000\u0000\u0097"+
		"\u0015\u0001\u0000\u0000\u0000\u0098\u0099\u0005\u00fe\u0000\u0000\u0099"+
		"\u0017\u0001\u0000\u0000\u0000\u009a\u009d\u0003H$\u0000\u009b\u009d\u0003"+
		"\u0002\u0001\u0000\u009c\u009a\u0001\u0000\u0000\u0000\u009c\u009b\u0001"+
		"\u0000\u0000\u0000\u009d\u00a0\u0001\u0000\u0000\u0000\u009e\u009c\u0001"+
		"\u0000\u0000\u0000\u009e\u009f\u0001\u0000\u0000\u0000\u009f\u0019\u0001"+
		"\u0000\u0000\u0000\u00a0\u009e\u0001\u0000\u0000\u0000\u00a1\u00a2\u0005"+
		"\u00d8\u0000\u0000\u00a2\u001b\u0001\u0000\u0000\u0000\u00a3\u00a4\u0005"+
		"\u00bd\u0000\u0000\u00a4\u00a5\u0005\u00f0\u0000\u0000\u00a5\u00a6\u0003"+
		",\u0016\u0000\u00a6\u00aa\u0003\u0018\f\u0000\u00a7\u00a9\u0003\u000e"+
		"\u0007\u0000\u00a8\u00a7\u0001\u0000\u0000\u0000\u00a9\u00ac\u0001\u0000"+
		"\u0000\u0000\u00aa\u00a8\u0001\u0000\u0000\u0000\u00aa\u00ab\u0001\u0000"+
		"\u0000\u0000\u00ab\u00ae\u0001\u0000\u0000\u0000\u00ac\u00aa\u0001\u0000"+
		"\u0000\u0000\u00ad\u00af\u0003\f\u0006\u0000\u00ae\u00ad\u0001\u0000\u0000"+
		"\u0000\u00ae\u00af\u0001\u0000\u0000\u0000\u00af\u00b0\u0001\u0000\u0000"+
		"\u0000\u00b0\u00b1\u0003\u0014\n\u0000\u00b1\u001d\u0001\u0000\u0000\u0000"+
		"\u00b2\u00b3\u0005\u00bd\u0000\u0000\u00b3\u00b4\u0005\u00f1\u0000\u0000"+
		"\u00b4\u00b5\u0003,\u0016\u0000\u00b5\u00b9\u0003\u0018\f\u0000\u00b6"+
		"\u00b8\u0003\u000e\u0007\u0000\u00b7\u00b6\u0001\u0000\u0000\u0000\u00b8"+
		"\u00bb\u0001\u0000\u0000\u0000\u00b9\u00b7\u0001\u0000\u0000\u0000\u00b9"+
		"\u00ba\u0001\u0000\u0000\u0000\u00ba\u00bd\u0001\u0000\u0000\u0000\u00bb"+
		"\u00b9\u0001\u0000\u0000\u0000\u00bc\u00be\u0003\f\u0006\u0000\u00bd\u00bc"+
		"\u0001\u0000\u0000\u0000\u00bd\u00be\u0001\u0000\u0000\u0000\u00be\u00bf"+
		"\u0001\u0000\u0000\u0000\u00bf\u00c0\u0003\u0014\n\u0000\u00c0\u001f\u0001"+
		"\u0000\u0000\u0000\u00c1\u00c2\u0005\u00bd\u0000\u0000\u00c2\u00c3\u0005"+
		"\u00f2\u0000\u0000\u00c3\u00c4\u0005\u00b9\u0000\u0000\u00c4\u00c5\u0003"+
		"\u0016\u000b\u0000\u00c5\u00c6\u0005\u00b9\u0000\u0000\u00c6!\u0001\u0000"+
		"\u0000\u0000\u00c7\u00c8\u0005\u00db\u0000\u0000\u00c8#\u0001\u0000\u0000"+
		"\u0000\u00c9\u00ca\u0005\u00bd\u0000\u0000\u00ca\u00cb\u0005\u00f3\u0000"+
		"\u0000\u00cb\u00cc\u0003:\u001d\u0000\u00cc\u00cd\u0005\u00b9\u0000\u0000"+
		"\u00cd\u00ce\u0003\u0016\u000b\u0000\u00ce\u00cf\u0005\u00b9\u0000\u0000"+
		"\u00cf\u00d0\u0003\"\u0011\u0000\u00d0%\u0001\u0000\u0000\u0000\u00d1"+
		"\u00d2\u0005\u00ff\u0000\u0000\u00d2\'\u0001\u0000\u0000\u0000\u00d3\u00d4"+
		"\u0005\u0100\u0000\u0000\u00d4)\u0001\u0000\u0000\u0000\u00d5\u00d6\u0005"+
		"\u0101\u0000\u0000\u00d6+\u0001\u0000\u0000\u0000\u00d7\u00d8\u0005\u0108"+
		"\u0000\u0000\u00d8-\u0001\u0000\u0000\u0000\u00d9\u00da\u0005\u00fd\u0000"+
		"\u0000\u00da/\u0001\u0000\u0000\u0000\u00db\u00dc\u0005\u0102\u0000\u0000"+
		"\u00dc1\u0001\u0000\u0000\u0000\u00dd\u00e4\u00034\u001a\u0000\u00de\u00e4"+
		"\u0003&\u0013\u0000\u00df\u00e4\u0003(\u0014\u0000\u00e0\u00e4\u0003*"+
		"\u0015\u0000\u00e1\u00e4\u00030\u0018\u0000\u00e2\u00e4\u0003J%\u0000"+
		"\u00e3\u00dd\u0001\u0000\u0000\u0000\u00e3\u00de\u0001\u0000\u0000\u0000"+
		"\u00e3\u00df\u0001\u0000\u0000\u0000\u00e3\u00e0\u0001\u0000\u0000\u0000"+
		"\u00e3\u00e1\u0001\u0000\u0000\u0000\u00e3\u00e2\u0001\u0000\u0000\u0000"+
		"\u00e4\u00e7\u0001\u0000\u0000\u0000\u00e5\u00e3\u0001\u0000\u0000\u0000"+
		"\u00e5\u00e6\u0001\u0000\u0000\u0000\u00e63\u0001\u0000\u0000\u0000\u00e7"+
		"\u00e5\u0001\u0000\u0000\u0000\u00e8\u00e9\u0005\u0103\u0000\u0000\u00e9"+
		"5\u0001\u0000\u0000\u0000\u00ea\u00eb\u0005\u00fa\u0000\u0000\u00eb7\u0001"+
		"\u0000\u0000\u0000\u00ec\u00ed\u0005\u00bd\u0000\u0000\u00ed\u00ee\u0005"+
		"\u00f4\u0000\u0000\u00ee9\u0001\u0000\u0000\u0000\u00ef\u00f0\u0005\u00db"+
		"\u0000\u0000\u00f0;\u0001\u0000\u0000\u0000\u00f1\u00f2\u0005\u00bd\u0000"+
		"\u0000\u00f2\u00f3\u0005\u00f5\u0000\u0000\u00f3\u00fc\u0003B!\u0000\u00f4"+
		"\u00f9\u0003>\u001f\u0000\u00f5\u00f6\u0005\u00b7\u0000\u0000\u00f6\u00f8"+
		"\u0003>\u001f\u0000\u00f7\u00f5\u0001\u0000\u0000\u0000\u00f8\u00fb\u0001"+
		"\u0000\u0000\u0000\u00f9\u00f7\u0001\u0000\u0000\u0000\u00f9\u00fa\u0001"+
		"\u0000\u0000\u0000\u00fa\u00fd\u0001\u0000\u0000\u0000\u00fb\u00f9\u0001"+
		"\u0000\u0000\u0000\u00fc\u00f4\u0001\u0000\u0000\u0000\u00fc\u00fd\u0001"+
		"\u0000\u0000\u0000\u00fd=\u0001\u0000\u0000\u0000\u00fe\u00ff\u0003@ "+
		"\u0000\u00ff\u0100\u0005\u00bc\u0000\u0000\u0100\u0102\u0001\u0000\u0000"+
		"\u0000\u0101\u00fe\u0001\u0000\u0000\u0000\u0101\u0102\u0001\u0000\u0000"+
		"\u0000\u0102\u0103\u0001\u0000\u0000\u0000\u0103\u0104\u0003D\"\u0000"+
		"\u0104?\u0001\u0000\u0000\u0000\u0105\u0106\u0005\u00d8\u0000\u0000\u0106"+
		"A\u0001\u0000\u0000\u0000\u0107\u0108\u0005\u00d8\u0000\u0000\u0108C\u0001"+
		"\u0000\u0000\u0000\u0109\u010a\u0005\u00c2\u0000\u0000\u010a\u010f\u0003"+
		">\u001f\u0000\u010b\u010c\u0005\u00b7\u0000\u0000\u010c\u010e\u0003>\u001f"+
		"\u0000\u010d\u010b\u0001\u0000\u0000\u0000\u010e\u0111\u0001\u0000\u0000"+
		"\u0000\u010f\u010d\u0001\u0000\u0000\u0000\u010f\u0110\u0001\u0000\u0000"+
		"\u0000\u0110\u0112\u0001\u0000\u0000\u0000\u0111\u010f\u0001\u0000\u0000"+
		"\u0000\u0112\u0113\u0005\u00cb\u0000\u0000\u0113\u0118\u0001\u0000\u0000"+
		"\u0000\u0114\u0118\u0003:\u001d\u0000\u0115\u0118\u0003J%\u0000\u0116"+
		"\u0118\u0003\u001a\r\u0000\u0117\u0109\u0001\u0000\u0000\u0000\u0117\u0114"+
		"\u0001\u0000\u0000\u0000\u0117\u0115\u0001\u0000\u0000\u0000\u0117\u0116"+
		"\u0001\u0000\u0000\u0000\u0118E\u0001\u0000\u0000\u0000\u0119\u011a\u0005"+
		"\u00bd\u0000\u0000\u011a\u011b\u0005\u00f6\u0000\u0000\u011bG\u0001\u0000"+
		"\u0000\u0000\u011c\u011d\u0005\u0104\u0000\u0000\u011dI\u0001\u0000\u0000"+
		"\u0000\u011e\u011f\u0005\u00d9\u0000\u0000\u011fK\u0001\u0000\u0000\u0000"+
		"\u0120\u0121\u0005\u00bd\u0000\u0000\u0121\u0122\u0005\u00ea\u0000\u0000"+
		"\u0122\u0123\u0003.\u0017\u0000\u0123\u0124\u00032\u0019\u0000\u0124M"+
		"\u0001\u0000\u0000\u0000\u0125\u0126\u0005\u00bd\u0000\u0000\u0126\u0127"+
		"\u00036\u001b\u0000\u0127O\u0001\u0000\u0000\u0000\u0128\u0129\u0005\u0106"+
		"\u0000\u0000\u0129\u012a\u0005\u0105\u0000\u0000\u012aQ\u0001\u0000\u0000"+
		"\u0000\u012b\u012c\u0005\u0106\u0000\u0000\u012c\u012d\u0005\u0105\u0000"+
		"\u0000\u012dS\u0001\u0000\u0000\u0000\u012e\u012f\u0005\u00bd\u0000\u0000"+
		"\u012f\u0130\u0005\u00f7\u0000\u0000\u0130\u0131\u0003R)\u0000\u0131\u0132"+
		"\u0005\u00cd\u0000\u0000\u0132\u0133\u0003P(\u0000\u0133U\u0001\u0000"+
		"\u0000\u0000\u0134\u0135\u0005\u00bd\u0000\u0000\u0135\u0136\u0005\u00f8"+
		"\u0000\u0000\u0136\u0137\u0003X,\u0000\u0137W\u0001\u0000\u0000\u0000"+
		"\u0138\u0139\u0005\u0107\u0000\u0000\u0139Y\u0001\u0000\u0000\u0000\u013a"+
		"\u013b\u0005\u00bd\u0000\u0000\u013b\u013c\u0005\u00f9\u0000\u0000\u013c"+
		"\u013d\u0003,\u0016\u0000\u013d[\u0001\u0000\u0000\u0000\u013e\u013f\u0005"+
		"\u00fb\u0000\u0000\u013f]\u0001\u0000\u0000\u0000\u000fau\u009c\u009e"+
		"\u00aa\u00ae\u00b9\u00bd\u00e3\u00e5\u00f9\u00fc\u0101\u010f\u0117";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}