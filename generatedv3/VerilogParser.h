
// Generated from VerilogParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  VerilogParser : public antlr4::Parser {
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
    RuleLibrary_text = 0, RuleLibrary_description = 1, RuleLibrary_declaration = 2, 
    RuleLibrary_incdir = 3, RuleInclude_statement = 4, RuleFile_path_spec = 5, 
    RuleSource_text = 6, RuleDescription = 7, RuleModule_declaration = 8, 
    RuleModule_keyword = 9, RuleModule_parameter_port_list = 10, RuleList_of_port_declarations = 11, 
    RulePort = 12, RulePort_implicit = 13, RulePort_explicit = 14, RulePort_expression = 15, 
    RulePort_reference = 16, RulePort_declaration = 17, RuleModule_item = 18, 
    RuleModule_or_generate_item = 19, RuleModule_or_generate_item_declaration = 20, 
    RuleParameter_override = 21, RuleConfig_declaration = 22, RuleDesign_statement = 23, 
    RuleDesign_statement_item = 24, RuleConfig_rule_statement = 25, RuleDefault_clause = 26, 
    RuleInst_clause = 27, RuleInst_name = 28, RuleCell_clause = 29, RuleLiblist_clause = 30, 
    RuleUse_clause = 31, RuleLocal_parameter_declaration = 32, RuleParameter_declaration = 33, 
    RuleSpecparam_declaration = 34, RuleParameter_type = 35, RuleInout_declaration = 36, 
    RuleInput_declaration = 37, RuleOutput_declaration = 38, RuleEvent_declaration = 39, 
    RuleInteger_declaration = 40, RuleNet_declaration = 41, RuleReal_declaration = 42, 
    RuleRealtime_declaration = 43, RuleReg_declaration = 44, RuleTime_declaration = 45, 
    RuleNet_type = 46, RuleDiscipline_declaration = 47, RuleNature_declaration = 48, 
    RuleElectrical_declaration = 49, RuleOutput_variable_type = 50, RuleReal_type = 51, 
    RuleVariable_type = 52, RuleDrive_strength = 53, RuleStrength0 = 54, 
    RuleStrength1 = 55, RuleCharge_strength = 56, RuleDelay3 = 57, RuleDelay2 = 58, 
    RuleDelay_value = 59, RuleList_of_defparam_assignments = 60, RuleList_of_event_identifiers = 61, 
    RuleEvent_id = 62, RuleList_of_net_decl_assignments = 63, RuleList_of_net_identifiers = 64, 
    RuleNet_id = 65, RuleList_of_param_assignments = 66, RuleList_of_port_identifiers = 67, 
    RuleList_of_real_identifiers = 68, RuleList_of_specparam_assignments = 69, 
    RuleList_of_variable_identifiers = 70, RuleList_of_variable_port_identifiers = 71, 
    RuleVar_port_id = 72, RuleDefparam_assignment = 73, RuleNet_decl_assignment = 74, 
    RuleParam_assignment = 75, RuleSpecparam_assignment = 76, RulePulse_control_specparam = 77, 
    RuleError_limit_value = 78, RuleReject_limit_value = 79, RuleLimit_value = 80, 
    RuleDimension = 81, RuleRange_ = 82, RuleFunction_declaration = 83, 
    RuleFunction_item_declaration = 84, RuleFunction_port_list = 85, RuleFunc_port_item = 86, 
    RuleFunction_range_or_type = 87, RuleTask_declaration = 88, RuleTask_item_declaration = 89, 
    RuleTask_port_list = 90, RuleTask_port_item = 91, RuleTf_input_declaration = 92, 
    RuleTf_output_declaration = 93, RuleTf_inout_declaration = 94, RuleTask_port_type = 95, 
    RuleBlock_item_declaration = 96, RuleList_of_block_variable_identifiers = 97, 
    RuleList_of_block_real_identifiers = 98, RuleBlock_variable_type = 99, 
    RuleBlock_real_type = 100, RuleGate_instantiation = 101, RuleCmos_switch_instance = 102, 
    RuleEnable_gate_instance = 103, RuleMos_switch_instance = 104, RuleN_input_gate_instance = 105, 
    RuleN_output_gate_instance = 106, RulePass_switch_instance = 107, RulePass_enable_switch_instance = 108, 
    RulePull_gate_instance = 109, RuleName_of_gate_instance = 110, RulePulldown_strength = 111, 
    RulePullup_strength = 112, RuleEnable_terminal = 113, RuleInout_terminal = 114, 
    RuleInput_terminal = 115, RuleNcontrol_terminal = 116, RuleOutput_terminal = 117, 
    RulePcontrol_terminal = 118, RuleCmos_switchtype = 119, RuleEnable_gatetype = 120, 
    RuleMos_switchtype = 121, RuleN_input_gatetype = 122, RuleN_output_gatetype = 123, 
    RulePass_en_switchtype = 124, RulePass_switchtype = 125, RuleModule_instantiation = 126, 
    RuleParameter_value_assignment = 127, RuleList_of_parameter_assignments = 128, 
    RuleOrdered_parameter_assignment = 129, RuleNamed_parameter_assignment = 130, 
    RuleModule_instance = 131, RuleName_of_module_instance = 132, RuleList_of_port_connections = 133, 
    RuleOrdered_port_connection = 134, RuleNamed_port_connection = 135, 
    RuleGenerate_region = 136, RuleGenvar_declaration = 137, RuleList_of_genvar_identifiers = 138, 
    RuleLoop_generate_construct = 139, RuleGenvar_initialization = 140, 
    RuleGenvar_expression = 141, RuleGenvar_iteration = 142, RuleConditional_generate_construct = 143, 
    RuleIf_generate_construct = 144, RuleCase_generate_construct = 145, 
    RuleCase_generate_item = 146, RuleGenerate_block = 147, RuleGenerate_block_name = 148, 
    RuleGenerate_block_or_null = 149, RuleUdp_declaration = 150, RuleUdp_port_list = 151, 
    RuleUdp_declaration_port_list = 152, RuleUdp_port_declaration = 153, 
    RuleUdp_output_declaration = 154, RuleUdp_input_declaration = 155, RuleUdp_reg_declaration = 156, 
    RuleUdp_body = 157, RuleCombinational_body = 158, RuleCombinational_entry = 159, 
    RuleSequential_body = 160, RuleUdp_initial_statement = 161, RuleInit_val = 162, 
    RuleSequential_entry = 163, RuleSeq_input_list = 164, RuleLevel_input_list = 165, 
    RuleEdge_input_list = 166, RuleEdge_indicator = 167, RuleCurrent_state = 168, 
    RuleNext_state = 169, RuleOutput_symbol = 170, RuleLevel_symbol = 171, 
    RuleEdge_symbol = 172, RuleUdp_instantiation = 173, RuleUdp_instance = 174, 
    RuleName_of_udp_instance = 175, RuleContinuous_assign = 176, RuleList_of_net_assignments = 177, 
    RuleNet_assignment = 178, RuleInitial_construct = 179, RuleAlways_construct = 180, 
    RuleAnalog_construct = 181, RuleBlocking_assignment = 182, RuleNonblocking_assignment = 183, 
    RuleAnalog_assignment = 184, RuleProcedural_continuous_assignments = 185, 
    RuleVariable_assignment = 186, RulePar_block = 187, RuleBlock_name = 188, 
    RuleSeq_block = 189, RuleStatement = 190, RuleStatement_or_null = 191, 
    RuleFunction_statement = 192, RuleDelay_control = 193, RuleDelay_or_event_control = 194, 
    RuleDisable_statement = 195, RuleEvent_control = 196, RuleEvent_trigger = 197, 
    RuleEvent_expression = 198, RuleProcedural_timing_control = 199, RuleProcedural_timing_control_statement = 200, 
    RuleWait_statement = 201, RuleConditional_statement = 202, RuleCase_statement = 203, 
    RuleCase_item = 204, RuleLoop_statement = 205, RuleSystem_task_enable = 206, 
    RuleSys_task_en_port_list = 207, RuleSys_task_en_port_item = 208, RuleTask_enable = 209, 
    RuleTask_en_port_list = 210, RuleSpecify_block = 211, RuleSpecify_item = 212, 
    RulePulsestyle_declaration = 213, RuleShowcancelled_declaration = 214, 
    RulePath_declaration = 215, RuleSimple_path_declaration = 216, RuleParallel_path_description = 217, 
    RuleFull_path_description = 218, RuleList_of_path_inputs = 219, RuleList_of_path_outputs = 220, 
    RuleSpecify_input_terminal_descriptor = 221, RuleSpecify_output_terminal_descriptor = 222, 
    RuleInput_identifier = 223, RuleOutput_identifier = 224, RulePath_delay_value = 225, 
    RuleList_of_path_delay_expressions = 226, RuleT_path_delay_expression = 227, 
    RuleTrise_path_delay_expression = 228, RuleTfall_path_delay_expression = 229, 
    RuleTz_path_delay_expression = 230, RuleT01_path_delay_expression = 231, 
    RuleT10_path_delay_expression = 232, RuleT0z_path_delay_expression = 233, 
    RuleTz1_path_delay_expression = 234, RuleT1z_path_delay_expression = 235, 
    RuleTz0_path_delay_expression = 236, RuleT0x_path_delay_expression = 237, 
    RuleTx1_path_delay_expression = 238, RuleT1x_path_delay_expression = 239, 
    RuleTx0_path_delay_expression = 240, RuleTxz_path_delay_expression = 241, 
    RuleTzx_path_delay_expression = 242, RulePath_delay_expression = 243, 
    RuleEdge_sensitive_path_declaration = 244, RuleParallel_edge_sensitive_path_description = 245, 
    RuleFull_edge_sensitive_path_description = 246, RuleData_source_expression = 247, 
    RuleEdge_identifier = 248, RuleState_dependent_path_declaration = 249, 
    RulePolarity_operator = 250, RuleSystem_timing_check = 251, RuleSetup_timing_check = 252, 
    RuleNotifier_opt = 253, RuleHold_timing_check = 254, RuleSetuphold_timing_check = 255, 
    RuleTiming_check_opt = 256, RuleStamptime_cond_opt = 257, RuleChecktime_cond_opt = 258, 
    RuleDelayed_ref_opt = 259, RuleDelayed_data_opt = 260, RuleRecovery_timing_check = 261, 
    RuleRemoval_timing_check = 262, RuleRecrem_timing_check = 263, RuleSkew_timing_check = 264, 
    RuleTimeskew_timing_check = 265, RuleSkew_timing_check_opt = 266, RuleEvent_based_flag_opt = 267, 
    RuleRemain_active_flag_opt = 268, RuleFullskew_timing_check = 269, RulePeriod_timing_check = 270, 
    RuleWidth_timing_check = 271, RuleThreshold_opt = 272, RuleNochange_timing_check = 273, 
    RuleChecktime_condition = 274, RuleControlled_reference_event = 275, 
    RuleData_event = 276, RuleDelayed_data = 277, RuleDelayed_reference = 278, 
    RuleEnd_edge_offset = 279, RuleEvent_based_flag = 280, RuleNotifier = 281, 
    RuleReference_event = 282, RuleRemain_active_flag = 283, RuleStamptime_condition = 284, 
    RuleStart_edge_offset = 285, RuleThreshold = 286, RuleTiming_check_limit = 287, 
    RuleTiming_check_event = 288, RuleControlled_timing_check_event = 289, 
    RuleTiming_check_event_control = 290, RuleSpecify_terminal_descriptor = 291, 
    RuleEdge_control_specifier = 292, RuleEdge_descriptor = 293, RuleTiming_check_condition = 294, 
    RuleScalar_timing_check_condition = 295, RuleScalar_constant = 296, 
    RuleConcatenation = 297, RuleConstant_concatenation = 298, RuleConstant_multiple_concatenation = 299, 
    RuleModule_path_concatenation = 300, RuleModule_path_multiple_concatenation = 301, 
    RuleMultiple_concatenation = 302, RuleConstant_function_call = 303, 
    RuleConstant_system_function_call = 304, RuleFunction_call = 305, RuleSystem_function_call = 306, 
    RuleSys_func_call_port_list = 307, RuleBase_expression = 308, RuleConstant_base_expression = 309, 
    RuleConstant_expression = 310, RuleConstant_mintypmax_expression = 311, 
    RuleConstant_range_expression = 312, RuleDimension_constant_expression = 313, 
    RuleExpression = 314, RuleLsb_constant_expression = 315, RuleMintypmax_expression = 316, 
    RuleModule_path_expression = 317, RuleModule_path_mintypmax_expression = 318, 
    RuleMsb_constant_expression = 319, RuleRange_expression = 320, RuleWidth_constant_expression = 321, 
    RuleConstant_primary = 322, RuleModule_path_primary = 323, RulePrimary = 324, 
    RuleSelect_ = 325, RuleBit_select = 326, RuleNet_lvalue = 327, RuleConst_select = 328, 
    RuleConst_bit_select = 329, RuleVariable_lvalue = 330, RuleUnary_operator = 331, 
    RuleUnary_module_path_operator = 332, RuleNumber = 333, RuleReal_number = 334, 
    RuleDecimal_number = 335, RuleBinary_number = 336, RuleOctal_number = 337, 
    RuleHex_number = 338, RuleSize = 339, RuleFixed_point_number = 340, 
    RuleExponential_number = 341, RuleUnsigned_number = 342, RuleDecimal_value = 343, 
    RuleBinary_value = 344, RuleOctal_value = 345, RuleHex_value = 346, 
    RuleDecimal_base = 347, RuleBinary_base = 348, RuleOctal_base = 349, 
    RuleHex_base = 350, RuleString_ = 351, RuleAttribute_instance = 352, 
    RuleAttr_spec = 353, RuleAttr_name = 354, RuleBlock_identifier = 355, 
    RuleCell_identifier = 356, RuleConfig_identifier = 357, RuleEscaped_identifier = 358, 
    RuleEvent_identifier = 359, RuleFunction_identifier = 360, RuleGate_instance_identifier = 361, 
    RuleGenerate_block_identifier = 362, RuleGenvar_identifier = 363, RuleHierarchical_identifier = 364, 
    RuleHier_ref = 365, RuleIdentifier = 366, RuleInput_port_identifier = 367, 
    RuleInstance_identifier = 368, RuleLibrary_identifier = 369, RuleModule_identifier = 370, 
    RuleModule_instance_identifier = 371, RuleNet_identifier = 372, RuleOutput_port_identifier = 373, 
    RuleParameter_identifier = 374, RulePort_identifier = 375, RuleReal_identifier = 376, 
    RuleSimple_identifier = 377, RuleSpecparam_identifier = 378, RuleSystem_function_identifier = 379, 
    RuleSystem_task_identifier = 380, RuleTask_identifier = 381, RuleTerminal_identifier = 382, 
    RuleTopmodule_identifier = 383, RuleUdp_identifier = 384, RuleUdp_instance_identifier = 385, 
    RuleVariable_identifier = 386
  };

  explicit VerilogParser(antlr4::TokenStream *input);

  VerilogParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~VerilogParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Library_textContext;
  class Library_descriptionContext;
  class Library_declarationContext;
  class Library_incdirContext;
  class Include_statementContext;
  class File_path_specContext;
  class Source_textContext;
  class DescriptionContext;
  class Module_declarationContext;
  class Module_keywordContext;
  class Module_parameter_port_listContext;
  class List_of_port_declarationsContext;
  class PortContext;
  class Port_implicitContext;
  class Port_explicitContext;
  class Port_expressionContext;
  class Port_referenceContext;
  class Port_declarationContext;
  class Module_itemContext;
  class Module_or_generate_itemContext;
  class Module_or_generate_item_declarationContext;
  class Parameter_overrideContext;
  class Config_declarationContext;
  class Design_statementContext;
  class Design_statement_itemContext;
  class Config_rule_statementContext;
  class Default_clauseContext;
  class Inst_clauseContext;
  class Inst_nameContext;
  class Cell_clauseContext;
  class Liblist_clauseContext;
  class Use_clauseContext;
  class Local_parameter_declarationContext;
  class Parameter_declarationContext;
  class Specparam_declarationContext;
  class Parameter_typeContext;
  class Inout_declarationContext;
  class Input_declarationContext;
  class Output_declarationContext;
  class Event_declarationContext;
  class Integer_declarationContext;
  class Net_declarationContext;
  class Real_declarationContext;
  class Realtime_declarationContext;
  class Reg_declarationContext;
  class Time_declarationContext;
  class Net_typeContext;
  class Discipline_declarationContext;
  class Nature_declarationContext;
  class Electrical_declarationContext;
  class Output_variable_typeContext;
  class Real_typeContext;
  class Variable_typeContext;
  class Drive_strengthContext;
  class Strength0Context;
  class Strength1Context;
  class Charge_strengthContext;
  class Delay3Context;
  class Delay2Context;
  class Delay_valueContext;
  class List_of_defparam_assignmentsContext;
  class List_of_event_identifiersContext;
  class Event_idContext;
  class List_of_net_decl_assignmentsContext;
  class List_of_net_identifiersContext;
  class Net_idContext;
  class List_of_param_assignmentsContext;
  class List_of_port_identifiersContext;
  class List_of_real_identifiersContext;
  class List_of_specparam_assignmentsContext;
  class List_of_variable_identifiersContext;
  class List_of_variable_port_identifiersContext;
  class Var_port_idContext;
  class Defparam_assignmentContext;
  class Net_decl_assignmentContext;
  class Param_assignmentContext;
  class Specparam_assignmentContext;
  class Pulse_control_specparamContext;
  class Error_limit_valueContext;
  class Reject_limit_valueContext;
  class Limit_valueContext;
  class DimensionContext;
  class Range_Context;
  class Function_declarationContext;
  class Function_item_declarationContext;
  class Function_port_listContext;
  class Func_port_itemContext;
  class Function_range_or_typeContext;
  class Task_declarationContext;
  class Task_item_declarationContext;
  class Task_port_listContext;
  class Task_port_itemContext;
  class Tf_input_declarationContext;
  class Tf_output_declarationContext;
  class Tf_inout_declarationContext;
  class Task_port_typeContext;
  class Block_item_declarationContext;
  class List_of_block_variable_identifiersContext;
  class List_of_block_real_identifiersContext;
  class Block_variable_typeContext;
  class Block_real_typeContext;
  class Gate_instantiationContext;
  class Cmos_switch_instanceContext;
  class Enable_gate_instanceContext;
  class Mos_switch_instanceContext;
  class N_input_gate_instanceContext;
  class N_output_gate_instanceContext;
  class Pass_switch_instanceContext;
  class Pass_enable_switch_instanceContext;
  class Pull_gate_instanceContext;
  class Name_of_gate_instanceContext;
  class Pulldown_strengthContext;
  class Pullup_strengthContext;
  class Enable_terminalContext;
  class Inout_terminalContext;
  class Input_terminalContext;
  class Ncontrol_terminalContext;
  class Output_terminalContext;
  class Pcontrol_terminalContext;
  class Cmos_switchtypeContext;
  class Enable_gatetypeContext;
  class Mos_switchtypeContext;
  class N_input_gatetypeContext;
  class N_output_gatetypeContext;
  class Pass_en_switchtypeContext;
  class Pass_switchtypeContext;
  class Module_instantiationContext;
  class Parameter_value_assignmentContext;
  class List_of_parameter_assignmentsContext;
  class Ordered_parameter_assignmentContext;
  class Named_parameter_assignmentContext;
  class Module_instanceContext;
  class Name_of_module_instanceContext;
  class List_of_port_connectionsContext;
  class Ordered_port_connectionContext;
  class Named_port_connectionContext;
  class Generate_regionContext;
  class Genvar_declarationContext;
  class List_of_genvar_identifiersContext;
  class Loop_generate_constructContext;
  class Genvar_initializationContext;
  class Genvar_expressionContext;
  class Genvar_iterationContext;
  class Conditional_generate_constructContext;
  class If_generate_constructContext;
  class Case_generate_constructContext;
  class Case_generate_itemContext;
  class Generate_blockContext;
  class Generate_block_nameContext;
  class Generate_block_or_nullContext;
  class Udp_declarationContext;
  class Udp_port_listContext;
  class Udp_declaration_port_listContext;
  class Udp_port_declarationContext;
  class Udp_output_declarationContext;
  class Udp_input_declarationContext;
  class Udp_reg_declarationContext;
  class Udp_bodyContext;
  class Combinational_bodyContext;
  class Combinational_entryContext;
  class Sequential_bodyContext;
  class Udp_initial_statementContext;
  class Init_valContext;
  class Sequential_entryContext;
  class Seq_input_listContext;
  class Level_input_listContext;
  class Edge_input_listContext;
  class Edge_indicatorContext;
  class Current_stateContext;
  class Next_stateContext;
  class Output_symbolContext;
  class Level_symbolContext;
  class Edge_symbolContext;
  class Udp_instantiationContext;
  class Udp_instanceContext;
  class Name_of_udp_instanceContext;
  class Continuous_assignContext;
  class List_of_net_assignmentsContext;
  class Net_assignmentContext;
  class Initial_constructContext;
  class Always_constructContext;
  class Analog_constructContext;
  class Blocking_assignmentContext;
  class Nonblocking_assignmentContext;
  class Analog_assignmentContext;
  class Procedural_continuous_assignmentsContext;
  class Variable_assignmentContext;
  class Par_blockContext;
  class Block_nameContext;
  class Seq_blockContext;
  class StatementContext;
  class Statement_or_nullContext;
  class Function_statementContext;
  class Delay_controlContext;
  class Delay_or_event_controlContext;
  class Disable_statementContext;
  class Event_controlContext;
  class Event_triggerContext;
  class Event_expressionContext;
  class Procedural_timing_controlContext;
  class Procedural_timing_control_statementContext;
  class Wait_statementContext;
  class Conditional_statementContext;
  class Case_statementContext;
  class Case_itemContext;
  class Loop_statementContext;
  class System_task_enableContext;
  class Sys_task_en_port_listContext;
  class Sys_task_en_port_itemContext;
  class Task_enableContext;
  class Task_en_port_listContext;
  class Specify_blockContext;
  class Specify_itemContext;
  class Pulsestyle_declarationContext;
  class Showcancelled_declarationContext;
  class Path_declarationContext;
  class Simple_path_declarationContext;
  class Parallel_path_descriptionContext;
  class Full_path_descriptionContext;
  class List_of_path_inputsContext;
  class List_of_path_outputsContext;
  class Specify_input_terminal_descriptorContext;
  class Specify_output_terminal_descriptorContext;
  class Input_identifierContext;
  class Output_identifierContext;
  class Path_delay_valueContext;
  class List_of_path_delay_expressionsContext;
  class T_path_delay_expressionContext;
  class Trise_path_delay_expressionContext;
  class Tfall_path_delay_expressionContext;
  class Tz_path_delay_expressionContext;
  class T01_path_delay_expressionContext;
  class T10_path_delay_expressionContext;
  class T0z_path_delay_expressionContext;
  class Tz1_path_delay_expressionContext;
  class T1z_path_delay_expressionContext;
  class Tz0_path_delay_expressionContext;
  class T0x_path_delay_expressionContext;
  class Tx1_path_delay_expressionContext;
  class T1x_path_delay_expressionContext;
  class Tx0_path_delay_expressionContext;
  class Txz_path_delay_expressionContext;
  class Tzx_path_delay_expressionContext;
  class Path_delay_expressionContext;
  class Edge_sensitive_path_declarationContext;
  class Parallel_edge_sensitive_path_descriptionContext;
  class Full_edge_sensitive_path_descriptionContext;
  class Data_source_expressionContext;
  class Edge_identifierContext;
  class State_dependent_path_declarationContext;
  class Polarity_operatorContext;
  class System_timing_checkContext;
  class Setup_timing_checkContext;
  class Notifier_optContext;
  class Hold_timing_checkContext;
  class Setuphold_timing_checkContext;
  class Timing_check_optContext;
  class Stamptime_cond_optContext;
  class Checktime_cond_optContext;
  class Delayed_ref_optContext;
  class Delayed_data_optContext;
  class Recovery_timing_checkContext;
  class Removal_timing_checkContext;
  class Recrem_timing_checkContext;
  class Skew_timing_checkContext;
  class Timeskew_timing_checkContext;
  class Skew_timing_check_optContext;
  class Event_based_flag_optContext;
  class Remain_active_flag_optContext;
  class Fullskew_timing_checkContext;
  class Period_timing_checkContext;
  class Width_timing_checkContext;
  class Threshold_optContext;
  class Nochange_timing_checkContext;
  class Checktime_conditionContext;
  class Controlled_reference_eventContext;
  class Data_eventContext;
  class Delayed_dataContext;
  class Delayed_referenceContext;
  class End_edge_offsetContext;
  class Event_based_flagContext;
  class NotifierContext;
  class Reference_eventContext;
  class Remain_active_flagContext;
  class Stamptime_conditionContext;
  class Start_edge_offsetContext;
  class ThresholdContext;
  class Timing_check_limitContext;
  class Timing_check_eventContext;
  class Controlled_timing_check_eventContext;
  class Timing_check_event_controlContext;
  class Specify_terminal_descriptorContext;
  class Edge_control_specifierContext;
  class Edge_descriptorContext;
  class Timing_check_conditionContext;
  class Scalar_timing_check_conditionContext;
  class Scalar_constantContext;
  class ConcatenationContext;
  class Constant_concatenationContext;
  class Constant_multiple_concatenationContext;
  class Module_path_concatenationContext;
  class Module_path_multiple_concatenationContext;
  class Multiple_concatenationContext;
  class Constant_function_callContext;
  class Constant_system_function_callContext;
  class Function_callContext;
  class System_function_callContext;
  class Sys_func_call_port_listContext;
  class Base_expressionContext;
  class Constant_base_expressionContext;
  class Constant_expressionContext;
  class Constant_mintypmax_expressionContext;
  class Constant_range_expressionContext;
  class Dimension_constant_expressionContext;
  class ExpressionContext;
  class Lsb_constant_expressionContext;
  class Mintypmax_expressionContext;
  class Module_path_expressionContext;
  class Module_path_mintypmax_expressionContext;
  class Msb_constant_expressionContext;
  class Range_expressionContext;
  class Width_constant_expressionContext;
  class Constant_primaryContext;
  class Module_path_primaryContext;
  class PrimaryContext;
  class Select_Context;
  class Bit_selectContext;
  class Net_lvalueContext;
  class Const_selectContext;
  class Const_bit_selectContext;
  class Variable_lvalueContext;
  class Unary_operatorContext;
  class Unary_module_path_operatorContext;
  class NumberContext;
  class Real_numberContext;
  class Decimal_numberContext;
  class Binary_numberContext;
  class Octal_numberContext;
  class Hex_numberContext;
  class SizeContext;
  class Fixed_point_numberContext;
  class Exponential_numberContext;
  class Unsigned_numberContext;
  class Decimal_valueContext;
  class Binary_valueContext;
  class Octal_valueContext;
  class Hex_valueContext;
  class Decimal_baseContext;
  class Binary_baseContext;
  class Octal_baseContext;
  class Hex_baseContext;
  class String_Context;
  class Attribute_instanceContext;
  class Attr_specContext;
  class Attr_nameContext;
  class Block_identifierContext;
  class Cell_identifierContext;
  class Config_identifierContext;
  class Escaped_identifierContext;
  class Event_identifierContext;
  class Function_identifierContext;
  class Gate_instance_identifierContext;
  class Generate_block_identifierContext;
  class Genvar_identifierContext;
  class Hierarchical_identifierContext;
  class Hier_refContext;
  class IdentifierContext;
  class Input_port_identifierContext;
  class Instance_identifierContext;
  class Library_identifierContext;
  class Module_identifierContext;
  class Module_instance_identifierContext;
  class Net_identifierContext;
  class Output_port_identifierContext;
  class Parameter_identifierContext;
  class Port_identifierContext;
  class Real_identifierContext;
  class Simple_identifierContext;
  class Specparam_identifierContext;
  class System_function_identifierContext;
  class System_task_identifierContext;
  class Task_identifierContext;
  class Terminal_identifierContext;
  class Topmodule_identifierContext;
  class Udp_identifierContext;
  class Udp_instance_identifierContext;
  class Variable_identifierContext; 

  class  Library_textContext : public antlr4::ParserRuleContext {
  public:
    Library_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Library_descriptionContext *> library_description();
    Library_descriptionContext* library_description(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_textContext* library_text();

  class  Library_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Library_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Library_declarationContext *library_declaration();
    Include_statementContext *include_statement();
    Config_declarationContext *config_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_descriptionContext* library_description();

  class  Library_declarationContext : public antlr4::ParserRuleContext {
  public:
    Library_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIBRARY();
    Library_identifierContext *library_identifier();
    std::vector<File_path_specContext *> file_path_spec();
    File_path_specContext* file_path_spec(size_t i);
    antlr4::tree::TerminalNode *SC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Library_incdirContext *library_incdir();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_declarationContext* library_declaration();

  class  Library_incdirContext : public antlr4::ParserRuleContext {
  public:
    Library_incdirContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MIINCDIR();
    std::vector<File_path_specContext *> file_path_spec();
    File_path_specContext* file_path_spec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_incdirContext* library_incdir();

  class  Include_statementContext : public antlr4::ParserRuleContext {
  public:
    Include_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDE();
    File_path_specContext *file_path_spec();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Include_statementContext* include_statement();

  class  File_path_specContext : public antlr4::ParserRuleContext {
  public:
    File_path_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILE_PATH_SPEC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_path_specContext* file_path_spec();

  class  Source_textContext : public antlr4::ParserRuleContext {
  public:
    Source_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<DescriptionContext *> description();
    DescriptionContext* description(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_textContext* source_text();

  class  DescriptionContext : public antlr4::ParserRuleContext {
  public:
    DescriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_declarationContext *module_declaration();
    Udp_declarationContext *udp_declaration();
    Config_declarationContext *config_declaration();
    Nature_declarationContext *nature_declaration();
    Discipline_declarationContext *discipline_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescriptionContext* description();

  class  Module_declarationContext : public antlr4::ParserRuleContext {
  public:
    Module_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_keywordContext *module_keyword();
    Module_identifierContext *module_identifier();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *ENDMODULE();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Module_parameter_port_listContext *module_parameter_port_list();
    List_of_port_declarationsContext *list_of_port_declarations();
    std::vector<Module_itemContext *> module_item();
    Module_itemContext* module_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_declarationContext* module_declaration();

  class  Module_keywordContext : public antlr4::ParserRuleContext {
  public:
    Module_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *MACROMODULE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_keywordContext* module_keyword();

  class  Module_parameter_port_listContext : public antlr4::ParserRuleContext {
  public:
    Module_parameter_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HA();
    antlr4::tree::TerminalNode *LP();
    std::vector<Parameter_declarationContext *> parameter_declaration();
    Parameter_declarationContext* parameter_declaration(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_parameter_port_listContext* module_parameter_port_list();

  class  List_of_port_declarationsContext : public antlr4::ParserRuleContext {
  public:
    List_of_port_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Port_declarationContext *> port_declaration();
    Port_declarationContext* port_declaration(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<PortContext *> port();
    PortContext* port(size_t i);
    Port_implicitContext *port_implicit();
    Port_explicitContext *port_explicit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_port_declarationsContext* list_of_port_declarations();

  class  PortContext : public antlr4::ParserRuleContext {
  public:
    PortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_implicitContext *port_implicit();
    Port_explicitContext *port_explicit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PortContext* port();

  class  Port_implicitContext : public antlr4::ParserRuleContext {
  public:
    Port_implicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_expressionContext *port_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_implicitContext* port_implicit();

  class  Port_explicitContext : public antlr4::ParserRuleContext {
  public:
    Port_explicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DT();
    Port_identifierContext *port_identifier();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Port_expressionContext *port_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_explicitContext* port_explicit();

  class  Port_expressionContext : public antlr4::ParserRuleContext {
  public:
    Port_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Port_referenceContext *> port_reference();
    Port_referenceContext* port_reference(size_t i);
    antlr4::tree::TerminalNode *LC();
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_expressionContext* port_expression();

  class  Port_referenceContext : public antlr4::ParserRuleContext {
  public:
    Port_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    antlr4::tree::TerminalNode *LB();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *RB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_referenceContext* port_reference();

  class  Port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Inout_declarationContext *inout_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Input_declarationContext *input_declaration();
    Output_declarationContext *output_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_declarationContext* port_declaration();

  class  Module_itemContext : public antlr4::ParserRuleContext {
  public:
    Module_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_declarationContext *port_declaration();
    antlr4::tree::TerminalNode *SC();
    Module_or_generate_itemContext *module_or_generate_item();
    Generate_regionContext *generate_region();
    Specify_blockContext *specify_block();
    Parameter_declarationContext *parameter_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Specparam_declarationContext *specparam_declaration();
    Electrical_declarationContext *electrical_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_itemContext* module_item();

  class  Module_or_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Module_or_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_or_generate_item_declarationContext *module_or_generate_item_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Local_parameter_declarationContext *local_parameter_declaration();
    antlr4::tree::TerminalNode *SC();
    Parameter_overrideContext *parameter_override();
    Continuous_assignContext *continuous_assign();
    Gate_instantiationContext *gate_instantiation();
    Module_instantiationContext *module_instantiation();
    Udp_instantiationContext *udp_instantiation();
    Initial_constructContext *initial_construct();
    Always_constructContext *always_construct();
    Analog_constructContext *analog_construct();
    Loop_generate_constructContext *loop_generate_construct();
    Conditional_generate_constructContext *conditional_generate_construct();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_or_generate_itemContext* module_or_generate_item();

  class  Module_or_generate_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Module_or_generate_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_declarationContext *net_declaration();
    Reg_declarationContext *reg_declaration();
    Integer_declarationContext *integer_declaration();
    Real_declarationContext *real_declaration();
    Time_declarationContext *time_declaration();
    Realtime_declarationContext *realtime_declaration();
    Event_declarationContext *event_declaration();
    Genvar_declarationContext *genvar_declaration();
    Task_declarationContext *task_declaration();
    Function_declarationContext *function_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_or_generate_item_declarationContext* module_or_generate_item_declaration();

  class  Parameter_overrideContext : public antlr4::ParserRuleContext {
  public:
    Parameter_overrideContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFPARAM();
    List_of_defparam_assignmentsContext *list_of_defparam_assignments();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_overrideContext* parameter_override();

  class  Config_declarationContext : public antlr4::ParserRuleContext {
  public:
    Config_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONFIG();
    Config_identifierContext *config_identifier();
    antlr4::tree::TerminalNode *SC();
    Design_statementContext *design_statement();
    antlr4::tree::TerminalNode *ENDCONFIG();
    std::vector<Config_rule_statementContext *> config_rule_statement();
    Config_rule_statementContext* config_rule_statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Config_declarationContext* config_declaration();

  class  Design_statementContext : public antlr4::ParserRuleContext {
  public:
    Design_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DESIGN();
    antlr4::tree::TerminalNode *SC();
    std::vector<Design_statement_itemContext *> design_statement_item();
    Design_statement_itemContext* design_statement_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Design_statementContext* design_statement();

  class  Design_statement_itemContext : public antlr4::ParserRuleContext {
  public:
    Design_statement_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cell_identifierContext *cell_identifier();
    Library_identifierContext *library_identifier();
    antlr4::tree::TerminalNode *DT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Design_statement_itemContext* design_statement_item();

  class  Config_rule_statementContext : public antlr4::ParserRuleContext {
  public:
    Config_rule_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Default_clauseContext *default_clause();
    Liblist_clauseContext *liblist_clause();
    antlr4::tree::TerminalNode *SC();
    Inst_clauseContext *inst_clause();
    Use_clauseContext *use_clause();
    Cell_clauseContext *cell_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Config_rule_statementContext* config_rule_statement();

  class  Default_clauseContext : public antlr4::ParserRuleContext {
  public:
    Default_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_clauseContext* default_clause();

  class  Inst_clauseContext : public antlr4::ParserRuleContext {
  public:
    Inst_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTANCE();
    Inst_nameContext *inst_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inst_clauseContext* inst_clause();

  class  Inst_nameContext : public antlr4::ParserRuleContext {
  public:
    Inst_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Topmodule_identifierContext *topmodule_identifier();
    std::vector<antlr4::tree::TerminalNode *> DT();
    antlr4::tree::TerminalNode* DT(size_t i);
    std::vector<Instance_identifierContext *> instance_identifier();
    Instance_identifierContext* instance_identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inst_nameContext* inst_name();

  class  Cell_clauseContext : public antlr4::ParserRuleContext {
  public:
    Cell_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CELL();
    Cell_identifierContext *cell_identifier();
    Library_identifierContext *library_identifier();
    antlr4::tree::TerminalNode *DT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cell_clauseContext* cell_clause();

  class  Liblist_clauseContext : public antlr4::ParserRuleContext {
  public:
    Liblist_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIBLIST();
    std::vector<Library_identifierContext *> library_identifier();
    Library_identifierContext* library_identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Liblist_clauseContext* liblist_clause();

  class  Use_clauseContext : public antlr4::ParserRuleContext {
  public:
    Use_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    Cell_identifierContext *cell_identifier();
    Library_identifierContext *library_identifier();
    antlr4::tree::TerminalNode *DT();
    antlr4::tree::TerminalNode *CL();
    antlr4::tree::TerminalNode *CONFIG();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_clauseContext* use_clause();

  class  Local_parameter_declarationContext : public antlr4::ParserRuleContext {
  public:
    Local_parameter_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCALPARAM();
    List_of_param_assignmentsContext *list_of_param_assignments();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();
    Parameter_typeContext *parameter_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Local_parameter_declarationContext* local_parameter_declaration();

  class  Parameter_declarationContext : public antlr4::ParserRuleContext {
  public:
    Parameter_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAMETER();
    List_of_param_assignmentsContext *list_of_param_assignments();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();
    Parameter_typeContext *parameter_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_declarationContext* parameter_declaration();

  class  Specparam_declarationContext : public antlr4::ParserRuleContext {
  public:
    Specparam_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPECPARAM();
    List_of_specparam_assignmentsContext *list_of_specparam_assignments();
    antlr4::tree::TerminalNode *SC();
    Range_Context *range_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specparam_declarationContext* specparam_declaration();

  class  Parameter_typeContext : public antlr4::ParserRuleContext {
  public:
    Parameter_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *REALTIME();
    antlr4::tree::TerminalNode *TIME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_typeContext* parameter_type();

  class  Inout_declarationContext : public antlr4::ParserRuleContext {
  public:
    Inout_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INOUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    Net_typeContext *net_type();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inout_declarationContext* inout_declaration();

  class  Input_declarationContext : public antlr4::ParserRuleContext {
  public:
    Input_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    Net_typeContext *net_type();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Input_declarationContext* input_declaration();

  class  Output_declarationContext : public antlr4::ParserRuleContext {
  public:
    Output_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    Net_typeContext *net_type();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();
    antlr4::tree::TerminalNode *REG();
    List_of_variable_port_identifiersContext *list_of_variable_port_identifiers();
    Output_variable_typeContext *output_variable_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_declarationContext* output_declaration();

  class  Event_declarationContext : public antlr4::ParserRuleContext {
  public:
    Event_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENT();
    List_of_event_identifiersContext *list_of_event_identifiers();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_declarationContext* event_declaration();

  class  Integer_declarationContext : public antlr4::ParserRuleContext {
  public:
    Integer_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    List_of_variable_identifiersContext *list_of_variable_identifiers();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_declarationContext* integer_declaration();

  class  Net_declarationContext : public antlr4::ParserRuleContext {
  public:
    Net_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_typeContext *net_type();
    List_of_net_identifiersContext *list_of_net_identifiers();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *SIGNED();
    Delay3Context *delay3();
    List_of_net_decl_assignmentsContext *list_of_net_decl_assignments();
    Drive_strengthContext *drive_strength();
    Range_Context *range_();
    antlr4::tree::TerminalNode *VECTORED();
    antlr4::tree::TerminalNode *SCALARED();
    antlr4::tree::TerminalNode *TRIREG();
    Charge_strengthContext *charge_strength();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_declarationContext* net_declaration();

  class  Real_declarationContext : public antlr4::ParserRuleContext {
  public:
    Real_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REAL();
    List_of_real_identifiersContext *list_of_real_identifiers();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Real_declarationContext* real_declaration();

  class  Realtime_declarationContext : public antlr4::ParserRuleContext {
  public:
    Realtime_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REALTIME();
    List_of_real_identifiersContext *list_of_real_identifiers();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Realtime_declarationContext* realtime_declaration();

  class  Reg_declarationContext : public antlr4::ParserRuleContext {
  public:
    Reg_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REG();
    List_of_variable_identifiersContext *list_of_variable_identifiers();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reg_declarationContext* reg_declaration();

  class  Time_declarationContext : public antlr4::ParserRuleContext {
  public:
    Time_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIME();
    List_of_variable_identifiersContext *list_of_variable_identifiers();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Time_declarationContext* time_declaration();

  class  Net_typeContext : public antlr4::ParserRuleContext {
  public:
    Net_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPPLYZERO();
    antlr4::tree::TerminalNode *SUPPLYONE();
    antlr4::tree::TerminalNode *TRI();
    antlr4::tree::TerminalNode *TRIAND();
    antlr4::tree::TerminalNode *TRIOR();
    antlr4::tree::TerminalNode *TRIZERO();
    antlr4::tree::TerminalNode *TRIONE();
    antlr4::tree::TerminalNode *UWIRE();
    antlr4::tree::TerminalNode *WIRE();
    antlr4::tree::TerminalNode *WAND();
    antlr4::tree::TerminalNode *WOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_typeContext* net_type();

  class  Discipline_declarationContext : public antlr4::ParserRuleContext {
  public:
    Discipline_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISCIPLINE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Discipline_declarationContext* discipline_declaration();

  class  Nature_declarationContext : public antlr4::ParserRuleContext {
  public:
    Nature_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NATURE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nature_declarationContext* nature_declaration();

  class  Electrical_declarationContext : public antlr4::ParserRuleContext {
  public:
    Electrical_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELECTRICAL();
    List_of_port_identifiersContext *list_of_port_identifiers();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Electrical_declarationContext* electrical_declaration();

  class  Output_variable_typeContext : public antlr4::ParserRuleContext {
  public:
    Output_variable_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *TIME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_variable_typeContext* output_variable_type();

  class  Real_typeContext : public antlr4::ParserRuleContext {
  public:
    Real_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Real_identifierContext *real_identifier();
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Real_typeContext* real_type();

  class  Variable_typeContext : public antlr4::ParserRuleContext {
  public:
    Variable_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_identifierContext *variable_identifier();
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_typeContext* variable_type();

  class  Drive_strengthContext : public antlr4::ParserRuleContext {
  public:
    Drive_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *CO();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *HIGHZONE();
    antlr4::tree::TerminalNode *HIGHZZERO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drive_strengthContext* drive_strength();

  class  Strength0Context : public antlr4::ParserRuleContext {
  public:
    Strength0Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPPLYZERO();
    antlr4::tree::TerminalNode *STRONGZERO();
    antlr4::tree::TerminalNode *PULLZERO();
    antlr4::tree::TerminalNode *WEAKZERO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Strength0Context* strength0();

  class  Strength1Context : public antlr4::ParserRuleContext {
  public:
    Strength1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPPLYONE();
    antlr4::tree::TerminalNode *STRONGONE();
    antlr4::tree::TerminalNode *PULLONE();
    antlr4::tree::TerminalNode *WEAKONE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Strength1Context* strength1();

  class  Charge_strengthContext : public antlr4::ParserRuleContext {
  public:
    Charge_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *SMALL();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *LARGE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Charge_strengthContext* charge_strength();

  class  Delay3Context : public antlr4::ParserRuleContext {
  public:
    Delay3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HA();
    Delay_valueContext *delay_value();
    antlr4::tree::TerminalNode *LP();
    std::vector<Mintypmax_expressionContext *> mintypmax_expression();
    Mintypmax_expressionContext* mintypmax_expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay3Context* delay3();

  class  Delay2Context : public antlr4::ParserRuleContext {
  public:
    Delay2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HA();
    Delay_valueContext *delay_value();
    antlr4::tree::TerminalNode *LP();
    std::vector<Mintypmax_expressionContext *> mintypmax_expression();
    Mintypmax_expressionContext* mintypmax_expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *CO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay2Context* delay2();

  class  Delay_valueContext : public antlr4::ParserRuleContext {
  public:
    Delay_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unsigned_numberContext *unsigned_number();
    Real_numberContext *real_number();
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_valueContext* delay_value();

  class  List_of_defparam_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_defparam_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Defparam_assignmentContext *> defparam_assignment();
    Defparam_assignmentContext* defparam_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_defparam_assignmentsContext* list_of_defparam_assignments();

  class  List_of_event_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_event_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Event_idContext *> event_id();
    Event_idContext* event_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_event_identifiersContext* list_of_event_identifiers();

  class  Event_idContext : public antlr4::ParserRuleContext {
  public:
    Event_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Event_identifierContext *event_identifier();
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_idContext* event_id();

  class  List_of_net_decl_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_net_decl_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Net_decl_assignmentContext *> net_decl_assignment();
    Net_decl_assignmentContext* net_decl_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_net_decl_assignmentsContext* list_of_net_decl_assignments();

  class  List_of_net_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_net_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Net_idContext *> net_id();
    Net_idContext* net_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_net_identifiersContext* list_of_net_identifiers();

  class  Net_idContext : public antlr4::ParserRuleContext {
  public:
    Net_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_identifierContext *net_identifier();
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_idContext* net_id();

  class  List_of_param_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_param_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Param_assignmentContext *> param_assignment();
    Param_assignmentContext* param_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_param_assignmentsContext* list_of_param_assignments();

  class  List_of_port_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_port_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Port_identifierContext *> port_identifier();
    Port_identifierContext* port_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_port_identifiersContext* list_of_port_identifiers();

  class  List_of_real_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_real_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Real_typeContext *> real_type();
    Real_typeContext* real_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_real_identifiersContext* list_of_real_identifiers();

  class  List_of_specparam_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_specparam_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specparam_assignmentContext *> specparam_assignment();
    Specparam_assignmentContext* specparam_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_specparam_assignmentsContext* list_of_specparam_assignments();

  class  List_of_variable_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_typeContext *> variable_type();
    Variable_typeContext* variable_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_variable_identifiersContext* list_of_variable_identifiers();

  class  List_of_variable_port_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_port_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Var_port_idContext *> var_port_id();
    Var_port_idContext* var_port_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_variable_port_identifiersContext* list_of_variable_port_identifiers();

  class  Var_port_idContext : public antlr4::ParserRuleContext {
  public:
    Var_port_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_port_idContext* var_port_id();

  class  Defparam_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Defparam_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Defparam_assignmentContext* defparam_assignment();

  class  Net_decl_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Net_decl_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_identifierContext *net_identifier();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_decl_assignmentContext* net_decl_assignment();

  class  Param_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Param_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_identifierContext *parameter_identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_assignmentContext* param_assignment();

  class  Specparam_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Specparam_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specparam_identifierContext *specparam_identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    Pulse_control_specparamContext *pulse_control_specparam();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specparam_assignmentContext* specparam_assignment();

  class  Pulse_control_specparamContext : public antlr4::ParserRuleContext {
  public:
    Pulse_control_specparamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PATHPULSEDL();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *LP();
    Reject_limit_valueContext *reject_limit_value();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *CO();
    Error_limit_valueContext *error_limit_value();
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    antlr4::tree::TerminalNode *DL();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pulse_control_specparamContext* pulse_control_specparam();

  class  Error_limit_valueContext : public antlr4::ParserRuleContext {
  public:
    Error_limit_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Limit_valueContext *limit_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Error_limit_valueContext* error_limit_value();

  class  Reject_limit_valueContext : public antlr4::ParserRuleContext {
  public:
    Reject_limit_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Limit_valueContext *limit_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reject_limit_valueContext* reject_limit_value();

  class  Limit_valueContext : public antlr4::ParserRuleContext {
  public:
    Limit_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Limit_valueContext* limit_value();

  class  DimensionContext : public antlr4::ParserRuleContext {
  public:
    DimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    std::vector<Dimension_constant_expressionContext *> dimension_constant_expression();
    Dimension_constant_expressionContext* dimension_constant_expression(size_t i);
    antlr4::tree::TerminalNode *CL();
    antlr4::tree::TerminalNode *RB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DimensionContext* dimension();

  class  Range_Context : public antlr4::ParserRuleContext {
  public:
    Range_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    Msb_constant_expressionContext *msb_constant_expression();
    antlr4::tree::TerminalNode *CL();
    Lsb_constant_expressionContext *lsb_constant_expression();
    antlr4::tree::TerminalNode *RB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Range_Context* range_();

  class  Function_declarationContext : public antlr4::ParserRuleContext {
  public:
    Function_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Function_identifierContext *function_identifier();
    antlr4::tree::TerminalNode *SC();
    Function_statementContext *function_statement();
    antlr4::tree::TerminalNode *ENDFUNCTION();
    antlr4::tree::TerminalNode *AUTOMATIC();
    Function_range_or_typeContext *function_range_or_type();
    std::vector<Function_item_declarationContext *> function_item_declaration();
    Function_item_declarationContext* function_item_declaration(size_t i);
    antlr4::tree::TerminalNode *LP();
    Function_port_listContext *function_port_list();
    antlr4::tree::TerminalNode *RP();
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_declarationContext* function_declaration();

  class  Function_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Function_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_item_declarationContext *block_item_declaration();
    Tf_input_declarationContext *tf_input_declaration();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_item_declarationContext* function_item_declaration();

  class  Function_port_listContext : public antlr4::ParserRuleContext {
  public:
    Function_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Func_port_itemContext *> func_port_item();
    Func_port_itemContext* func_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_port_listContext* function_port_list();

  class  Func_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Func_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tf_input_declarationContext *tf_input_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_port_itemContext* func_port_item();

  class  Function_range_or_typeContext : public antlr4::ParserRuleContext {
  public:
    Function_range_or_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Range_Context *range_();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *REALTIME();
    antlr4::tree::TerminalNode *TIME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_range_or_typeContext* function_range_or_type();

  class  Task_declarationContext : public antlr4::ParserRuleContext {
  public:
    Task_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TASK();
    Task_identifierContext *task_identifier();
    antlr4::tree::TerminalNode *SC();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *ENDTASK();
    antlr4::tree::TerminalNode *AUTOMATIC();
    std::vector<Task_item_declarationContext *> task_item_declaration();
    Task_item_declarationContext* task_item_declaration(size_t i);
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Task_port_listContext *task_port_list();
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_declarationContext* task_declaration();

  class  Task_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Task_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_item_declarationContext *block_item_declaration();
    Tf_input_declarationContext *tf_input_declaration();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Tf_output_declarationContext *tf_output_declaration();
    Tf_inout_declarationContext *tf_inout_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_item_declarationContext* task_item_declaration();

  class  Task_port_listContext : public antlr4::ParserRuleContext {
  public:
    Task_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Task_port_itemContext *> task_port_item();
    Task_port_itemContext* task_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_port_listContext* task_port_list();

  class  Task_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Task_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tf_input_declarationContext *tf_input_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Tf_output_declarationContext *tf_output_declaration();
    Tf_inout_declarationContext *tf_inout_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_port_itemContext* task_port_item();

  class  Tf_input_declarationContext : public antlr4::ParserRuleContext {
  public:
    Tf_input_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    antlr4::tree::TerminalNode *REG();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();
    Task_port_typeContext *task_port_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_input_declarationContext* tf_input_declaration();

  class  Tf_output_declarationContext : public antlr4::ParserRuleContext {
  public:
    Tf_output_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    antlr4::tree::TerminalNode *REG();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();
    Task_port_typeContext *task_port_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_output_declarationContext* tf_output_declaration();

  class  Tf_inout_declarationContext : public antlr4::ParserRuleContext {
  public:
    Tf_inout_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INOUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    antlr4::tree::TerminalNode *REG();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();
    Task_port_typeContext *task_port_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_inout_declarationContext* tf_inout_declaration();

  class  Task_port_typeContext : public antlr4::ParserRuleContext {
  public:
    Task_port_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *REALTIME();
    antlr4::tree::TerminalNode *TIME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_port_typeContext* task_port_type();

  class  Block_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Block_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REG();
    List_of_block_variable_identifiersContext *list_of_block_variable_identifiers();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *REAL();
    List_of_block_real_identifiersContext *list_of_block_real_identifiers();
    antlr4::tree::TerminalNode *REALTIME();
    Event_declarationContext *event_declaration();
    Local_parameter_declarationContext *local_parameter_declaration();
    Parameter_declarationContext *parameter_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_item_declarationContext* block_item_declaration();

  class  List_of_block_variable_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_block_variable_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Block_variable_typeContext *> block_variable_type();
    Block_variable_typeContext* block_variable_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_block_variable_identifiersContext* list_of_block_variable_identifiers();

  class  List_of_block_real_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_block_real_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Block_real_typeContext *> block_real_type();
    Block_real_typeContext* block_real_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_block_real_identifiersContext* list_of_block_real_identifiers();

  class  Block_variable_typeContext : public antlr4::ParserRuleContext {
  public:
    Block_variable_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_identifierContext *variable_identifier();
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_variable_typeContext* block_variable_type();

  class  Block_real_typeContext : public antlr4::ParserRuleContext {
  public:
    Block_real_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Real_identifierContext *real_identifier();
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_real_typeContext* block_real_type();

  class  Gate_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Gate_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cmos_switchtypeContext *cmos_switchtype();
    std::vector<Cmos_switch_instanceContext *> cmos_switch_instance();
    Cmos_switch_instanceContext* cmos_switch_instance(size_t i);
    antlr4::tree::TerminalNode *SC();
    Delay3Context *delay3();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Enable_gatetypeContext *enable_gatetype();
    std::vector<Enable_gate_instanceContext *> enable_gate_instance();
    Enable_gate_instanceContext* enable_gate_instance(size_t i);
    Drive_strengthContext *drive_strength();
    Mos_switchtypeContext *mos_switchtype();
    std::vector<Mos_switch_instanceContext *> mos_switch_instance();
    Mos_switch_instanceContext* mos_switch_instance(size_t i);
    N_input_gatetypeContext *n_input_gatetype();
    std::vector<N_input_gate_instanceContext *> n_input_gate_instance();
    N_input_gate_instanceContext* n_input_gate_instance(size_t i);
    Delay2Context *delay2();
    N_output_gatetypeContext *n_output_gatetype();
    std::vector<N_output_gate_instanceContext *> n_output_gate_instance();
    N_output_gate_instanceContext* n_output_gate_instance(size_t i);
    Pass_en_switchtypeContext *pass_en_switchtype();
    std::vector<Pass_enable_switch_instanceContext *> pass_enable_switch_instance();
    Pass_enable_switch_instanceContext* pass_enable_switch_instance(size_t i);
    Pass_switchtypeContext *pass_switchtype();
    std::vector<Pass_switch_instanceContext *> pass_switch_instance();
    Pass_switch_instanceContext* pass_switch_instance(size_t i);
    antlr4::tree::TerminalNode *PULLDOWN();
    std::vector<Pull_gate_instanceContext *> pull_gate_instance();
    Pull_gate_instanceContext* pull_gate_instance(size_t i);
    Pulldown_strengthContext *pulldown_strength();
    antlr4::tree::TerminalNode *PULLUP();
    Pullup_strengthContext *pullup_strength();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Gate_instantiationContext* gate_instantiation();

  class  Cmos_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Cmos_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Output_terminalContext *output_terminal();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Input_terminalContext *input_terminal();
    Ncontrol_terminalContext *ncontrol_terminal();
    Pcontrol_terminalContext *pcontrol_terminal();
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cmos_switch_instanceContext* cmos_switch_instance();

  class  Enable_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    Enable_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Output_terminalContext *output_terminal();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Input_terminalContext *input_terminal();
    Enable_terminalContext *enable_terminal();
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enable_gate_instanceContext* enable_gate_instance();

  class  Mos_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Mos_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Output_terminalContext *output_terminal();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Input_terminalContext *input_terminal();
    Enable_terminalContext *enable_terminal();
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mos_switch_instanceContext* mos_switch_instance();

  class  N_input_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    N_input_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Output_terminalContext *output_terminal();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Input_terminalContext *> input_terminal();
    Input_terminalContext* input_terminal(size_t i);
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  N_input_gate_instanceContext* n_input_gate_instance();

  class  N_output_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    N_output_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Output_terminalContext *> output_terminal();
    Output_terminalContext* output_terminal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Input_terminalContext *input_terminal();
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  N_output_gate_instanceContext* n_output_gate_instance();

  class  Pass_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Pass_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Inout_terminalContext *> inout_terminal();
    Inout_terminalContext* inout_terminal(size_t i);
    antlr4::tree::TerminalNode *CO();
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pass_switch_instanceContext* pass_switch_instance();

  class  Pass_enable_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Pass_enable_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Inout_terminalContext *> inout_terminal();
    Inout_terminalContext* inout_terminal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Enable_terminalContext *enable_terminal();
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pass_enable_switch_instanceContext* pass_enable_switch_instance();

  class  Pull_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    Pull_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Output_terminalContext *output_terminal();
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pull_gate_instanceContext* pull_gate_instance();

  class  Name_of_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    Name_of_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Gate_instance_identifierContext *gate_instance_identifier();
    Range_Context *range_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Name_of_gate_instanceContext* name_of_gate_instance();

  class  Pulldown_strengthContext : public antlr4::ParserRuleContext {
  public:
    Pulldown_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *CO();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pulldown_strengthContext* pulldown_strength();

  class  Pullup_strengthContext : public antlr4::ParserRuleContext {
  public:
    Pullup_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *CO();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pullup_strengthContext* pullup_strength();

  class  Enable_terminalContext : public antlr4::ParserRuleContext {
  public:
    Enable_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enable_terminalContext* enable_terminal();

  class  Inout_terminalContext : public antlr4::ParserRuleContext {
  public:
    Inout_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inout_terminalContext* inout_terminal();

  class  Input_terminalContext : public antlr4::ParserRuleContext {
  public:
    Input_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Input_terminalContext* input_terminal();

  class  Ncontrol_terminalContext : public antlr4::ParserRuleContext {
  public:
    Ncontrol_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ncontrol_terminalContext* ncontrol_terminal();

  class  Output_terminalContext : public antlr4::ParserRuleContext {
  public:
    Output_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_terminalContext* output_terminal();

  class  Pcontrol_terminalContext : public antlr4::ParserRuleContext {
  public:
    Pcontrol_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pcontrol_terminalContext* pcontrol_terminal();

  class  Cmos_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Cmos_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CMOS();
    antlr4::tree::TerminalNode *RCMOS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cmos_switchtypeContext* cmos_switchtype();

  class  Enable_gatetypeContext : public antlr4::ParserRuleContext {
  public:
    Enable_gatetypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BUFIFZERO();
    antlr4::tree::TerminalNode *BUFIFONE();
    antlr4::tree::TerminalNode *NOTIFZERO();
    antlr4::tree::TerminalNode *NOTIFONE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enable_gatetypeContext* enable_gatetype();

  class  Mos_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Mos_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NMOS();
    antlr4::tree::TerminalNode *PMOS();
    antlr4::tree::TerminalNode *RNMOS();
    antlr4::tree::TerminalNode *RPMOS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mos_switchtypeContext* mos_switchtype();

  class  N_input_gatetypeContext : public antlr4::ParserRuleContext {
  public:
    N_input_gatetypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *NAND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *NOR();
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *XNOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  N_input_gatetypeContext* n_input_gatetype();

  class  N_output_gatetypeContext : public antlr4::ParserRuleContext {
  public:
    N_output_gatetypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BUF();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  N_output_gatetypeContext* n_output_gatetype();

  class  Pass_en_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Pass_en_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRANIFZERO();
    antlr4::tree::TerminalNode *TRANIFONE();
    antlr4::tree::TerminalNode *RTRANIFONE();
    antlr4::tree::TerminalNode *RTRANIFZERO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pass_en_switchtypeContext* pass_en_switchtype();

  class  Pass_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Pass_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRAN();
    antlr4::tree::TerminalNode *RTRAN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pass_switchtypeContext* pass_switchtype();

  class  Module_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Module_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_identifierContext *module_identifier();
    std::vector<Module_instanceContext *> module_instance();
    Module_instanceContext* module_instance(size_t i);
    antlr4::tree::TerminalNode *SC();
    Parameter_value_assignmentContext *parameter_value_assignment();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_instantiationContext* module_instantiation();

  class  Parameter_value_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Parameter_value_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HA();
    antlr4::tree::TerminalNode *LP();
    List_of_parameter_assignmentsContext *list_of_parameter_assignments();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_value_assignmentContext* parameter_value_assignment();

  class  List_of_parameter_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_parameter_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ordered_parameter_assignmentContext *> ordered_parameter_assignment();
    Ordered_parameter_assignmentContext* ordered_parameter_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Named_parameter_assignmentContext *> named_parameter_assignment();
    Named_parameter_assignmentContext* named_parameter_assignment(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_parameter_assignmentsContext* list_of_parameter_assignments();

  class  Ordered_parameter_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Ordered_parameter_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ordered_parameter_assignmentContext* ordered_parameter_assignment();

  class  Named_parameter_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Named_parameter_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DT();
    Parameter_identifierContext *parameter_identifier();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Mintypmax_expressionContext *mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Named_parameter_assignmentContext* named_parameter_assignment();

  class  Module_instanceContext : public antlr4::ParserRuleContext {
  public:
    Module_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Name_of_module_instanceContext *name_of_module_instance();
    antlr4::tree::TerminalNode *LP();
    List_of_port_connectionsContext *list_of_port_connections();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_instanceContext* module_instance();

  class  Name_of_module_instanceContext : public antlr4::ParserRuleContext {
  public:
    Name_of_module_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_instance_identifierContext *module_instance_identifier();
    Range_Context *range_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Name_of_module_instanceContext* name_of_module_instance();

  class  List_of_port_connectionsContext : public antlr4::ParserRuleContext {
  public:
    List_of_port_connectionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ordered_port_connectionContext *> ordered_port_connection();
    Ordered_port_connectionContext* ordered_port_connection(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Named_port_connectionContext *> named_port_connection();
    Named_port_connectionContext* named_port_connection(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_port_connectionsContext* list_of_port_connections();

  class  Ordered_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Ordered_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ordered_port_connectionContext* ordered_port_connection();

  class  Named_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Named_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DT();
    Port_identifierContext *port_identifier();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Named_port_connectionContext* named_port_connection();

  class  Generate_regionContext : public antlr4::ParserRuleContext {
  public:
    Generate_regionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERATE();
    antlr4::tree::TerminalNode *ENDGENERATE();
    std::vector<Module_or_generate_itemContext *> module_or_generate_item();
    Module_or_generate_itemContext* module_or_generate_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_regionContext* generate_region();

  class  Genvar_declarationContext : public antlr4::ParserRuleContext {
  public:
    Genvar_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENVAR();
    List_of_genvar_identifiersContext *list_of_genvar_identifiers();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_declarationContext* genvar_declaration();

  class  List_of_genvar_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_genvar_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Genvar_identifierContext *> genvar_identifier();
    Genvar_identifierContext* genvar_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_genvar_identifiersContext* list_of_genvar_identifiers();

  class  Loop_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    Loop_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LP();
    Genvar_initializationContext *genvar_initialization();
    std::vector<antlr4::tree::TerminalNode *> SC();
    antlr4::tree::TerminalNode* SC(size_t i);
    Genvar_expressionContext *genvar_expression();
    Genvar_iterationContext *genvar_iteration();
    antlr4::tree::TerminalNode *RP();
    Generate_blockContext *generate_block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_generate_constructContext* loop_generate_construct();

  class  Genvar_initializationContext : public antlr4::ParserRuleContext {
  public:
    Genvar_initializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Genvar_identifierContext *genvar_identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_initializationContext* genvar_initialization();

  class  Genvar_expressionContext : public antlr4::ParserRuleContext {
  public:
    Genvar_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_expressionContext* genvar_expression();

  class  Genvar_iterationContext : public antlr4::ParserRuleContext {
  public:
    Genvar_iterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Genvar_identifierContext *genvar_identifier();
    antlr4::tree::TerminalNode *EQ();
    Genvar_expressionContext *genvar_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_iterationContext* genvar_iteration();

  class  Conditional_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    Conditional_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_generate_constructContext *if_generate_construct();
    Case_generate_constructContext *case_generate_construct();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_generate_constructContext* conditional_generate_construct();

  class  If_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    If_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LP();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *RP();
    std::vector<Generate_block_or_nullContext *> generate_block_or_null();
    Generate_block_or_nullContext* generate_block_or_null(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_generate_constructContext* if_generate_construct();

  class  Case_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    Case_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *LP();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *ENDCASE();
    std::vector<Case_generate_itemContext *> case_generate_item();
    Case_generate_itemContext* case_generate_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_generate_constructContext* case_generate_construct();

  class  Case_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *CL();
    Generate_block_or_nullContext *generate_block_or_null();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_generate_itemContext* case_generate_item();

  class  Generate_blockContext : public antlr4::ParserRuleContext {
  public:
    Generate_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Module_or_generate_itemContext *> module_or_generate_item();
    Module_or_generate_itemContext* module_or_generate_item(size_t i);
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    Generate_block_nameContext *generate_block_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_blockContext* generate_block();

  class  Generate_block_nameContext : public antlr4::ParserRuleContext {
  public:
    Generate_block_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Generate_block_identifierContext *generate_block_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_block_nameContext* generate_block_name();

  class  Generate_block_or_nullContext : public antlr4::ParserRuleContext {
  public:
    Generate_block_or_nullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generate_blockContext *generate_block();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_block_or_nullContext* generate_block_or_null();

  class  Udp_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIMITIVE();
    Udp_identifierContext *udp_identifier();
    antlr4::tree::TerminalNode *LP();
    Udp_port_listContext *udp_port_list();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Udp_bodyContext *udp_body();
    antlr4::tree::TerminalNode *ENDPRIMITIVE();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Udp_port_declarationContext *> udp_port_declaration();
    Udp_port_declarationContext* udp_port_declaration(size_t i);
    Udp_declaration_port_listContext *udp_declaration_port_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_declarationContext* udp_declaration();

  class  Udp_port_listContext : public antlr4::ParserRuleContext {
  public:
    Udp_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_port_identifierContext *output_port_identifier();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Input_port_identifierContext *> input_port_identifier();
    Input_port_identifierContext* input_port_identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_port_listContext* udp_port_list();

  class  Udp_declaration_port_listContext : public antlr4::ParserRuleContext {
  public:
    Udp_declaration_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Udp_output_declarationContext *udp_output_declaration();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Udp_input_declarationContext *> udp_input_declaration();
    Udp_input_declarationContext* udp_input_declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_declaration_port_listContext* udp_declaration_port_list();

  class  Udp_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Udp_output_declarationContext *udp_output_declaration();
    antlr4::tree::TerminalNode *SC();
    Udp_input_declarationContext *udp_input_declaration();
    Udp_reg_declarationContext *udp_reg_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_port_declarationContext* udp_port_declaration();

  class  Udp_output_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_output_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();
    Port_identifierContext *port_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *REG();
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_output_declarationContext* udp_output_declaration();

  class  Udp_input_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_input_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_input_declarationContext* udp_input_declaration();

  class  Udp_reg_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_reg_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REG();
    Variable_identifierContext *variable_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_reg_declarationContext* udp_reg_declaration();

  class  Udp_bodyContext : public antlr4::ParserRuleContext {
  public:
    Udp_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Combinational_bodyContext *combinational_body();
    Sequential_bodyContext *sequential_body();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_bodyContext* udp_body();

  class  Combinational_bodyContext : public antlr4::ParserRuleContext {
  public:
    Combinational_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *ENDTABLE();
    std::vector<Combinational_entryContext *> combinational_entry();
    Combinational_entryContext* combinational_entry(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Combinational_bodyContext* combinational_body();

  class  Combinational_entryContext : public antlr4::ParserRuleContext {
  public:
    Combinational_entryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Level_input_listContext *level_input_list();
    antlr4::tree::TerminalNode *CL();
    Output_symbolContext *output_symbol();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Combinational_entryContext* combinational_entry();

  class  Sequential_bodyContext : public antlr4::ParserRuleContext {
  public:
    Sequential_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *ENDTABLE();
    Udp_initial_statementContext *udp_initial_statement();
    std::vector<Sequential_entryContext *> sequential_entry();
    Sequential_entryContext* sequential_entry(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequential_bodyContext* sequential_body();

  class  Udp_initial_statementContext : public antlr4::ParserRuleContext {
  public:
    Udp_initial_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL();
    Output_port_identifierContext *output_port_identifier();
    antlr4::tree::TerminalNode *EQ();
    Init_valContext *init_val();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_initial_statementContext* udp_initial_statement();

  class  Init_valContext : public antlr4::ParserRuleContext {
  public:
    Init_valContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Binary_numberContext *binary_number();
    Unsigned_numberContext *unsigned_number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Init_valContext* init_val();

  class  Sequential_entryContext : public antlr4::ParserRuleContext {
  public:
    Sequential_entryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Seq_input_listContext *seq_input_list();
    std::vector<antlr4::tree::TerminalNode *> CL();
    antlr4::tree::TerminalNode* CL(size_t i);
    Current_stateContext *current_state();
    Next_stateContext *next_state();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequential_entryContext* sequential_entry();

  class  Seq_input_listContext : public antlr4::ParserRuleContext {
  public:
    Seq_input_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Level_input_listContext *level_input_list();
    Edge_input_listContext *edge_input_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Seq_input_listContext* seq_input_list();

  class  Level_input_listContext : public antlr4::ParserRuleContext {
  public:
    Level_input_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Level_symbolContext *> level_symbol();
    Level_symbolContext* level_symbol(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Level_input_listContext* level_input_list();

  class  Edge_input_listContext : public antlr4::ParserRuleContext {
  public:
    Edge_input_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Edge_indicatorContext *edge_indicator();
    std::vector<Level_symbolContext *> level_symbol();
    Level_symbolContext* level_symbol(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_input_listContext* edge_input_list();

  class  Edge_indicatorContext : public antlr4::ParserRuleContext {
  public:
    Edge_indicatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Level_symbolContext *> level_symbol();
    Level_symbolContext* level_symbol(size_t i);
    antlr4::tree::TerminalNode *RP();
    Edge_symbolContext *edge_symbol();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_indicatorContext* edge_indicator();

  class  Current_stateContext : public antlr4::ParserRuleContext {
  public:
    Current_stateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Level_symbolContext *level_symbol();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Current_stateContext* current_state();

  class  Next_stateContext : public antlr4::ParserRuleContext {
  public:
    Next_stateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_symbolContext *output_symbol();
    antlr4::tree::TerminalNode *MI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Next_stateContext* next_state();

  class  Output_symbolContext : public antlr4::ParserRuleContext {
  public:
    Output_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT_OR_LEVEL_SYMBOL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_symbolContext* output_symbol();

  class  Level_symbolContext : public antlr4::ParserRuleContext {
  public:
    Level_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEVEL_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *OUTPUT_OR_LEVEL_SYMBOL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Level_symbolContext* level_symbol();

  class  Edge_symbolContext : public antlr4::ParserRuleContext {
  public:
    Edge_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EDGE_SYMBOL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_symbolContext* edge_symbol();

  class  Udp_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Udp_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Udp_identifierContext *udp_identifier();
    std::vector<Udp_instanceContext *> udp_instance();
    Udp_instanceContext* udp_instance(size_t i);
    antlr4::tree::TerminalNode *SC();
    Drive_strengthContext *drive_strength();
    Delay2Context *delay2();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_instantiationContext* udp_instantiation();

  class  Udp_instanceContext : public antlr4::ParserRuleContext {
  public:
    Udp_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Output_terminalContext *output_terminal();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Input_terminalContext *> input_terminal();
    Input_terminalContext* input_terminal(size_t i);
    antlr4::tree::TerminalNode *RP();
    Name_of_udp_instanceContext *name_of_udp_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_instanceContext* udp_instance();

  class  Name_of_udp_instanceContext : public antlr4::ParserRuleContext {
  public:
    Name_of_udp_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Udp_instance_identifierContext *udp_instance_identifier();
    Range_Context *range_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Name_of_udp_instanceContext* name_of_udp_instance();

  class  Continuous_assignContext : public antlr4::ParserRuleContext {
  public:
    Continuous_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    List_of_net_assignmentsContext *list_of_net_assignments();
    antlr4::tree::TerminalNode *SC();
    Drive_strengthContext *drive_strength();
    Delay3Context *delay3();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Continuous_assignContext* continuous_assign();

  class  List_of_net_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_net_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Net_assignmentContext *> net_assignment();
    Net_assignmentContext* net_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_net_assignmentsContext* list_of_net_assignments();

  class  Net_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Net_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_assignmentContext* net_assignment();

  class  Initial_constructContext : public antlr4::ParserRuleContext {
  public:
    Initial_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Initial_constructContext* initial_construct();

  class  Always_constructContext : public antlr4::ParserRuleContext {
  public:
    Always_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALWAYS();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Always_constructContext* always_construct();

  class  Analog_constructContext : public antlr4::ParserRuleContext {
  public:
    Analog_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANALOG();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Analog_constructContext* analog_construct();

  class  Blocking_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Blocking_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();
    Delay_or_event_controlContext *delay_or_event_control();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Blocking_assignmentContext* blocking_assignment();

  class  Nonblocking_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Nonblocking_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *LTEQ();
    ExpressionContext *expression();
    Delay_or_event_controlContext *delay_or_event_control();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nonblocking_assignmentContext* nonblocking_assignment();

  class  Analog_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Analog_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_callContext *function_call();
    antlr4::tree::TerminalNode *LTPL();
    ExpressionContext *expression();
    Delay_or_event_controlContext *delay_or_event_control();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Analog_assignmentContext* analog_assignment();

  class  Procedural_continuous_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    Procedural_continuous_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    Variable_assignmentContext *variable_assignment();
    antlr4::tree::TerminalNode *DEASSIGN();
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *RELEASE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_continuous_assignmentsContext* procedural_continuous_assignments();

  class  Variable_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Variable_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_assignmentContext* variable_assignment();

  class  Par_blockContext : public antlr4::ParserRuleContext {
  public:
    Par_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORK();
    antlr4::tree::TerminalNode *JOIN();
    Block_nameContext *block_name();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Par_blockContext* par_block();

  class  Block_nameContext : public antlr4::ParserRuleContext {
  public:
    Block_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Block_identifierContext *block_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_nameContext* block_name();

  class  Seq_blockContext : public antlr4::ParserRuleContext {
  public:
    Seq_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    Block_nameContext *block_name();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Seq_blockContext* seq_block();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Blocking_assignmentContext *blocking_assignment();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Case_statementContext *case_statement();
    Conditional_statementContext *conditional_statement();
    Disable_statementContext *disable_statement();
    Event_triggerContext *event_trigger();
    Loop_statementContext *loop_statement();
    Nonblocking_assignmentContext *nonblocking_assignment();
    Analog_assignmentContext *analog_assignment();
    Par_blockContext *par_block();
    Procedural_continuous_assignmentsContext *procedural_continuous_assignments();
    Procedural_timing_control_statementContext *procedural_timing_control_statement();
    Seq_blockContext *seq_block();
    System_task_enableContext *system_task_enable();
    Task_enableContext *task_enable();
    Wait_statementContext *wait_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Statement_or_nullContext : public antlr4::ParserRuleContext {
  public:
    Statement_or_nullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_or_nullContext* statement_or_null();

  class  Function_statementContext : public antlr4::ParserRuleContext {
  public:
    Function_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_statementContext* function_statement();

  class  Delay_controlContext : public antlr4::ParserRuleContext {
  public:
    Delay_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HA();
    Delay_valueContext *delay_value();
    antlr4::tree::TerminalNode *LP();
    Mintypmax_expressionContext *mintypmax_expression();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_controlContext* delay_control();

  class  Delay_or_event_controlContext : public antlr4::ParserRuleContext {
  public:
    Delay_or_event_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delay_controlContext *delay_control();
    Event_controlContext *event_control();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_or_event_controlContext* delay_or_event_control();

  class  Disable_statementContext : public antlr4::ParserRuleContext {
  public:
    Disable_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISABLE();
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Disable_statementContext* disable_statement();

  class  Event_controlContext : public antlr4::ParserRuleContext {
  public:
    Event_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *LP();
    Event_expressionContext *event_expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *AS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_controlContext* event_control();

  class  Event_triggerContext : public antlr4::ParserRuleContext {
  public:
    Event_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MIGT();
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *SC();
    Bit_selectContext *bit_select();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_triggerContext* event_trigger();

  class  Event_expressionContext : public antlr4::ParserRuleContext {
  public:
    Event_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *POSEDGE();
    antlr4::tree::TerminalNode *NEGEDGE();
    std::vector<Event_expressionContext *> event_expression();
    Event_expressionContext* event_expression(size_t i);
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *CO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_expressionContext* event_expression();
  Event_expressionContext* event_expression(int precedence);
  class  Procedural_timing_controlContext : public antlr4::ParserRuleContext {
  public:
    Procedural_timing_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delay_controlContext *delay_control();
    Event_controlContext *event_control();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_timing_controlContext* procedural_timing_control();

  class  Procedural_timing_control_statementContext : public antlr4::ParserRuleContext {
  public:
    Procedural_timing_control_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedural_timing_controlContext *procedural_timing_control();
    Statement_or_nullContext *statement_or_null();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_timing_control_statementContext* procedural_timing_control_statement();

  class  Wait_statementContext : public antlr4::ParserRuleContext {
  public:
    Wait_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    Statement_or_nullContext *statement_or_null();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Wait_statementContext* wait_statement();

  class  Conditional_statementContext : public antlr4::ParserRuleContext {
  public:
    Conditional_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_statementContext* conditional_statement();

  class  Case_statementContext : public antlr4::ParserRuleContext {
  public:
    Case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *ENDCASE();
    std::vector<Case_itemContext *> case_item();
    Case_itemContext* case_item(size_t i);
    antlr4::tree::TerminalNode *CASEZ();
    antlr4::tree::TerminalNode *CASEX();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_statementContext* case_statement();

  class  Case_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CL();
    Statement_or_nullContext *statement_or_null();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_itemContext* case_item();

  class  Loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOREVER();
    StatementContext *statement();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *FOR();
    std::vector<Variable_assignmentContext *> variable_assignment();
    Variable_assignmentContext* variable_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SC();
    antlr4::tree::TerminalNode* SC(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_statementContext* loop_statement();

  class  System_task_enableContext : public antlr4::ParserRuleContext {
  public:
    System_task_enableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    System_task_identifierContext *system_task_identifier();
    antlr4::tree::TerminalNode *SC();
    Sys_task_en_port_listContext *sys_task_en_port_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  System_task_enableContext* system_task_enable();

  class  Sys_task_en_port_listContext : public antlr4::ParserRuleContext {
  public:
    Sys_task_en_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Sys_task_en_port_itemContext *> sys_task_en_port_item();
    Sys_task_en_port_itemContext* sys_task_en_port_item(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sys_task_en_port_listContext* sys_task_en_port_list();

  class  Sys_task_en_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Sys_task_en_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sys_task_en_port_itemContext* sys_task_en_port_item();

  class  Task_enableContext : public antlr4::ParserRuleContext {
  public:
    Task_enableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *SC();
    Task_en_port_listContext *task_en_port_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_enableContext* task_enable();

  class  Task_en_port_listContext : public antlr4::ParserRuleContext {
  public:
    Task_en_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_en_port_listContext* task_en_port_list();

  class  Specify_blockContext : public antlr4::ParserRuleContext {
  public:
    Specify_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPECIFY();
    antlr4::tree::TerminalNode *ENDSPECIFY();
    std::vector<Specify_itemContext *> specify_item();
    Specify_itemContext* specify_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specify_blockContext* specify_block();

  class  Specify_itemContext : public antlr4::ParserRuleContext {
  public:
    Specify_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specparam_declarationContext *specparam_declaration();
    Pulsestyle_declarationContext *pulsestyle_declaration();
    Showcancelled_declarationContext *showcancelled_declaration();
    Path_declarationContext *path_declaration();
    System_timing_checkContext *system_timing_check();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specify_itemContext* specify_item();

  class  Pulsestyle_declarationContext : public antlr4::ParserRuleContext {
  public:
    Pulsestyle_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PULSESTYLE_ONEVENT();
    List_of_path_outputsContext *list_of_path_outputs();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *PULSESTYLE_ONDETECT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pulsestyle_declarationContext* pulsestyle_declaration();

  class  Showcancelled_declarationContext : public antlr4::ParserRuleContext {
  public:
    Showcancelled_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOWCANCELLED();
    List_of_path_outputsContext *list_of_path_outputs();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *NOSHOWCANCELLED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Showcancelled_declarationContext* showcancelled_declaration();

  class  Path_declarationContext : public antlr4::ParserRuleContext {
  public:
    Path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_path_declarationContext *simple_path_declaration();
    antlr4::tree::TerminalNode *SC();
    Edge_sensitive_path_declarationContext *edge_sensitive_path_declaration();
    State_dependent_path_declarationContext *state_dependent_path_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_declarationContext* path_declaration();

  class  Simple_path_declarationContext : public antlr4::ParserRuleContext {
  public:
    Simple_path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parallel_path_descriptionContext *parallel_path_description();
    antlr4::tree::TerminalNode *EQ();
    Path_delay_valueContext *path_delay_value();
    Full_path_descriptionContext *full_path_description();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_path_declarationContext* simple_path_declaration();

  class  Parallel_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Parallel_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    antlr4::tree::TerminalNode *EQGT();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();
    antlr4::tree::TerminalNode *RP();
    Polarity_operatorContext *polarity_operator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parallel_path_descriptionContext* parallel_path_description();

  class  Full_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Full_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    List_of_path_inputsContext *list_of_path_inputs();
    antlr4::tree::TerminalNode *ASGT();
    List_of_path_outputsContext *list_of_path_outputs();
    antlr4::tree::TerminalNode *RP();
    Polarity_operatorContext *polarity_operator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_path_descriptionContext* full_path_description();

  class  List_of_path_inputsContext : public antlr4::ParserRuleContext {
  public:
    List_of_path_inputsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specify_input_terminal_descriptorContext *> specify_input_terminal_descriptor();
    Specify_input_terminal_descriptorContext* specify_input_terminal_descriptor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_path_inputsContext* list_of_path_inputs();

  class  List_of_path_outputsContext : public antlr4::ParserRuleContext {
  public:
    List_of_path_outputsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specify_output_terminal_descriptorContext *> specify_output_terminal_descriptor();
    Specify_output_terminal_descriptorContext* specify_output_terminal_descriptor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_path_outputsContext* list_of_path_outputs();

  class  Specify_input_terminal_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Specify_input_terminal_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Input_identifierContext *input_identifier();
    antlr4::tree::TerminalNode *LB();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *RB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specify_input_terminal_descriptorContext* specify_input_terminal_descriptor();

  class  Specify_output_terminal_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Specify_output_terminal_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_identifierContext *output_identifier();
    antlr4::tree::TerminalNode *LB();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *RB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specify_output_terminal_descriptorContext* specify_output_terminal_descriptor();

  class  Input_identifierContext : public antlr4::ParserRuleContext {
  public:
    Input_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Input_identifierContext* input_identifier();

  class  Output_identifierContext : public antlr4::ParserRuleContext {
  public:
    Output_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_identifierContext* output_identifier();

  class  Path_delay_valueContext : public antlr4::ParserRuleContext {
  public:
    Path_delay_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_path_delay_expressionsContext *list_of_path_delay_expressions();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_delay_valueContext* path_delay_value();

  class  List_of_path_delay_expressionsContext : public antlr4::ParserRuleContext {
  public:
    List_of_path_delay_expressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    T_path_delay_expressionContext *t_path_delay_expression();
    Trise_path_delay_expressionContext *trise_path_delay_expression();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Tfall_path_delay_expressionContext *tfall_path_delay_expression();
    Tz_path_delay_expressionContext *tz_path_delay_expression();
    T01_path_delay_expressionContext *t01_path_delay_expression();
    T10_path_delay_expressionContext *t10_path_delay_expression();
    T0z_path_delay_expressionContext *t0z_path_delay_expression();
    Tz1_path_delay_expressionContext *tz1_path_delay_expression();
    T1z_path_delay_expressionContext *t1z_path_delay_expression();
    Tz0_path_delay_expressionContext *tz0_path_delay_expression();
    T0x_path_delay_expressionContext *t0x_path_delay_expression();
    Tx1_path_delay_expressionContext *tx1_path_delay_expression();
    T1x_path_delay_expressionContext *t1x_path_delay_expression();
    Tx0_path_delay_expressionContext *tx0_path_delay_expression();
    Txz_path_delay_expressionContext *txz_path_delay_expression();
    Tzx_path_delay_expressionContext *tzx_path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_path_delay_expressionsContext* list_of_path_delay_expressions();

  class  T_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T_path_delay_expressionContext* t_path_delay_expression();

  class  Trise_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Trise_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trise_path_delay_expressionContext* trise_path_delay_expression();

  class  Tfall_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tfall_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tfall_path_delay_expressionContext* tfall_path_delay_expression();

  class  Tz_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tz_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tz_path_delay_expressionContext* tz_path_delay_expression();

  class  T01_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T01_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T01_path_delay_expressionContext* t01_path_delay_expression();

  class  T10_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T10_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T10_path_delay_expressionContext* t10_path_delay_expression();

  class  T0z_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T0z_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T0z_path_delay_expressionContext* t0z_path_delay_expression();

  class  Tz1_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tz1_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tz1_path_delay_expressionContext* tz1_path_delay_expression();

  class  T1z_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T1z_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T1z_path_delay_expressionContext* t1z_path_delay_expression();

  class  Tz0_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tz0_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tz0_path_delay_expressionContext* tz0_path_delay_expression();

  class  T0x_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T0x_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T0x_path_delay_expressionContext* t0x_path_delay_expression();

  class  Tx1_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tx1_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tx1_path_delay_expressionContext* tx1_path_delay_expression();

  class  T1x_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T1x_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T1x_path_delay_expressionContext* t1x_path_delay_expression();

  class  Tx0_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tx0_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tx0_path_delay_expressionContext* tx0_path_delay_expression();

  class  Txz_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Txz_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Txz_path_delay_expressionContext* txz_path_delay_expression();

  class  Tzx_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tzx_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tzx_path_delay_expressionContext* tzx_path_delay_expression();

  class  Path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_delay_expressionContext* path_delay_expression();

  class  Edge_sensitive_path_declarationContext : public antlr4::ParserRuleContext {
  public:
    Edge_sensitive_path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parallel_edge_sensitive_path_descriptionContext *parallel_edge_sensitive_path_description();
    antlr4::tree::TerminalNode *EQ();
    Path_delay_valueContext *path_delay_value();
    Full_edge_sensitive_path_descriptionContext *full_edge_sensitive_path_description();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_sensitive_path_declarationContext* edge_sensitive_path_declaration();

  class  Parallel_edge_sensitive_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Parallel_edge_sensitive_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LP();
    antlr4::tree::TerminalNode* LP(size_t i);
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    antlr4::tree::TerminalNode *EQGT();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();
    antlr4::tree::TerminalNode *CL();
    Data_source_expressionContext *data_source_expression();
    std::vector<antlr4::tree::TerminalNode *> RP();
    antlr4::tree::TerminalNode* RP(size_t i);
    Edge_identifierContext *edge_identifier();
    Polarity_operatorContext *polarity_operator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parallel_edge_sensitive_path_descriptionContext* parallel_edge_sensitive_path_description();

  class  Full_edge_sensitive_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Full_edge_sensitive_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LP();
    antlr4::tree::TerminalNode* LP(size_t i);
    List_of_path_inputsContext *list_of_path_inputs();
    antlr4::tree::TerminalNode *ASGT();
    List_of_path_outputsContext *list_of_path_outputs();
    antlr4::tree::TerminalNode *CL();
    Data_source_expressionContext *data_source_expression();
    std::vector<antlr4::tree::TerminalNode *> RP();
    antlr4::tree::TerminalNode* RP(size_t i);
    Edge_identifierContext *edge_identifier();
    Polarity_operatorContext *polarity_operator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_edge_sensitive_path_descriptionContext* full_edge_sensitive_path_description();

  class  Data_source_expressionContext : public antlr4::ParserRuleContext {
  public:
    Data_source_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_source_expressionContext* data_source_expression();

  class  Edge_identifierContext : public antlr4::ParserRuleContext {
  public:
    Edge_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSEDGE();
    antlr4::tree::TerminalNode *NEGEDGE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_identifierContext* edge_identifier();

  class  State_dependent_path_declarationContext : public antlr4::ParserRuleContext {
  public:
    State_dependent_path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LP();
    Module_path_expressionContext *module_path_expression();
    antlr4::tree::TerminalNode *RP();
    Simple_path_declarationContext *simple_path_declaration();
    Edge_sensitive_path_declarationContext *edge_sensitive_path_declaration();
    antlr4::tree::TerminalNode *IFNONE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  State_dependent_path_declarationContext* state_dependent_path_declaration();

  class  Polarity_operatorContext : public antlr4::ParserRuleContext {
  public:
    Polarity_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PL();
    antlr4::tree::TerminalNode *MI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Polarity_operatorContext* polarity_operator();

  class  System_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    System_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Setup_timing_checkContext *setup_timing_check();
    Hold_timing_checkContext *hold_timing_check();
    Setuphold_timing_checkContext *setuphold_timing_check();
    Recovery_timing_checkContext *recovery_timing_check();
    Removal_timing_checkContext *removal_timing_check();
    Recrem_timing_checkContext *recrem_timing_check();
    Skew_timing_checkContext *skew_timing_check();
    Timeskew_timing_checkContext *timeskew_timing_check();
    Fullskew_timing_checkContext *fullskew_timing_check();
    Period_timing_checkContext *period_timing_check();
    Width_timing_checkContext *width_timing_check();
    Nochange_timing_checkContext *nochange_timing_check();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  System_timing_checkContext* system_timing_check();

  class  Setup_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Setup_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLSETUP();
    antlr4::tree::TerminalNode *LP();
    Data_eventContext *data_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Reference_eventContext *reference_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Notifier_optContext *notifier_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Setup_timing_checkContext* setup_timing_check();

  class  Notifier_optContext : public antlr4::ParserRuleContext {
  public:
    Notifier_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    NotifierContext *notifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Notifier_optContext* notifier_opt();

  class  Hold_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Hold_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLHOLD();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Notifier_optContext *notifier_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hold_timing_checkContext* hold_timing_check();

  class  Setuphold_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Setuphold_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLSETUPHOLD();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    std::vector<Timing_check_limitContext *> timing_check_limit();
    Timing_check_limitContext* timing_check_limit(size_t i);
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Timing_check_optContext *timing_check_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Setuphold_timing_checkContext* setuphold_timing_check();

  class  Timing_check_optContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    NotifierContext *notifier();
    Stamptime_cond_optContext *stamptime_cond_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timing_check_optContext* timing_check_opt();

  class  Stamptime_cond_optContext : public antlr4::ParserRuleContext {
  public:
    Stamptime_cond_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Stamptime_conditionContext *stamptime_condition();
    Checktime_cond_optContext *checktime_cond_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stamptime_cond_optContext* stamptime_cond_opt();

  class  Checktime_cond_optContext : public antlr4::ParserRuleContext {
  public:
    Checktime_cond_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Checktime_conditionContext *checktime_condition();
    Delayed_ref_optContext *delayed_ref_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checktime_cond_optContext* checktime_cond_opt();

  class  Delayed_ref_optContext : public antlr4::ParserRuleContext {
  public:
    Delayed_ref_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Delayed_referenceContext *delayed_reference();
    Delayed_data_optContext *delayed_data_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delayed_ref_optContext* delayed_ref_opt();

  class  Delayed_data_optContext : public antlr4::ParserRuleContext {
  public:
    Delayed_data_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Delayed_dataContext *delayed_data();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delayed_data_optContext* delayed_data_opt();

  class  Recovery_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Recovery_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLRECOVERY();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Notifier_optContext *notifier_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Recovery_timing_checkContext* recovery_timing_check();

  class  Removal_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Removal_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLREMOVAL();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Notifier_optContext *notifier_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Removal_timing_checkContext* removal_timing_check();

  class  Recrem_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Recrem_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLRECREM();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    std::vector<Timing_check_limitContext *> timing_check_limit();
    Timing_check_limitContext* timing_check_limit(size_t i);
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Timing_check_optContext *timing_check_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Recrem_timing_checkContext* recrem_timing_check();

  class  Skew_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Skew_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLSKEW();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Notifier_optContext *notifier_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Skew_timing_checkContext* skew_timing_check();

  class  Timeskew_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Timeskew_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLTIMESKEW();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Skew_timing_check_optContext *skew_timing_check_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timeskew_timing_checkContext* timeskew_timing_check();

  class  Skew_timing_check_optContext : public antlr4::ParserRuleContext {
  public:
    Skew_timing_check_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    NotifierContext *notifier();
    Event_based_flag_optContext *event_based_flag_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Skew_timing_check_optContext* skew_timing_check_opt();

  class  Event_based_flag_optContext : public antlr4::ParserRuleContext {
  public:
    Event_based_flag_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Event_based_flagContext *event_based_flag();
    Remain_active_flag_optContext *remain_active_flag_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_based_flag_optContext* event_based_flag_opt();

  class  Remain_active_flag_optContext : public antlr4::ParserRuleContext {
  public:
    Remain_active_flag_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Remain_active_flagContext *remain_active_flag();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Remain_active_flag_optContext* remain_active_flag_opt();

  class  Fullskew_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Fullskew_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLFULLSKEW();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    std::vector<Timing_check_limitContext *> timing_check_limit();
    Timing_check_limitContext* timing_check_limit(size_t i);
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Skew_timing_check_optContext *skew_timing_check_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fullskew_timing_checkContext* fullskew_timing_check();

  class  Period_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Period_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLPERIOD();
    antlr4::tree::TerminalNode *LP();
    Controlled_reference_eventContext *controlled_reference_event();
    antlr4::tree::TerminalNode *CO();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Notifier_optContext *notifier_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Period_timing_checkContext* period_timing_check();

  class  Width_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Width_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLWIDTH();
    antlr4::tree::TerminalNode *LP();
    Controlled_reference_eventContext *controlled_reference_event();
    antlr4::tree::TerminalNode *CO();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Threshold_optContext *threshold_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Width_timing_checkContext* width_timing_check();

  class  Threshold_optContext : public antlr4::ParserRuleContext {
  public:
    Threshold_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    ThresholdContext *threshold();
    NotifierContext *notifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Threshold_optContext* threshold_opt();

  class  Nochange_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Nochange_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLNOCHANGE();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    Start_edge_offsetContext *start_edge_offset();
    End_edge_offsetContext *end_edge_offset();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Notifier_optContext *notifier_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nochange_timing_checkContext* nochange_timing_check();

  class  Checktime_conditionContext : public antlr4::ParserRuleContext {
  public:
    Checktime_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checktime_conditionContext* checktime_condition();

  class  Controlled_reference_eventContext : public antlr4::ParserRuleContext {
  public:
    Controlled_reference_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Controlled_timing_check_eventContext *controlled_timing_check_event();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Controlled_reference_eventContext* controlled_reference_event();

  class  Data_eventContext : public antlr4::ParserRuleContext {
  public:
    Data_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Timing_check_eventContext *timing_check_event();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_eventContext* data_event();

  class  Delayed_dataContext : public antlr4::ParserRuleContext {
  public:
    Delayed_dataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Terminal_identifierContext *terminal_identifier();
    antlr4::tree::TerminalNode *LB();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    antlr4::tree::TerminalNode *RB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delayed_dataContext* delayed_data();

  class  Delayed_referenceContext : public antlr4::ParserRuleContext {
  public:
    Delayed_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Terminal_identifierContext *terminal_identifier();
    antlr4::tree::TerminalNode *LB();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    antlr4::tree::TerminalNode *RB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delayed_referenceContext* delayed_reference();

  class  End_edge_offsetContext : public antlr4::ParserRuleContext {
  public:
    End_edge_offsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  End_edge_offsetContext* end_edge_offset();

  class  Event_based_flagContext : public antlr4::ParserRuleContext {
  public:
    Event_based_flagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_based_flagContext* event_based_flag();

  class  NotifierContext : public antlr4::ParserRuleContext {
  public:
    NotifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_identifierContext *variable_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NotifierContext* notifier();

  class  Reference_eventContext : public antlr4::ParserRuleContext {
  public:
    Reference_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Timing_check_eventContext *timing_check_event();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reference_eventContext* reference_event();

  class  Remain_active_flagContext : public antlr4::ParserRuleContext {
  public:
    Remain_active_flagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Remain_active_flagContext* remain_active_flag();

  class  Stamptime_conditionContext : public antlr4::ParserRuleContext {
  public:
    Stamptime_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stamptime_conditionContext* stamptime_condition();

  class  Start_edge_offsetContext : public antlr4::ParserRuleContext {
  public:
    Start_edge_offsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_edge_offsetContext* start_edge_offset();

  class  ThresholdContext : public antlr4::ParserRuleContext {
  public:
    ThresholdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThresholdContext* threshold();

  class  Timing_check_limitContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_limitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timing_check_limitContext* timing_check_limit();

  class  Timing_check_eventContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specify_terminal_descriptorContext *specify_terminal_descriptor();
    Timing_check_event_controlContext *timing_check_event_control();
    antlr4::tree::TerminalNode *AMAMAM();
    Timing_check_conditionContext *timing_check_condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timing_check_eventContext* timing_check_event();

  class  Controlled_timing_check_eventContext : public antlr4::ParserRuleContext {
  public:
    Controlled_timing_check_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Timing_check_event_controlContext *timing_check_event_control();
    Specify_terminal_descriptorContext *specify_terminal_descriptor();
    antlr4::tree::TerminalNode *AMAMAM();
    Timing_check_conditionContext *timing_check_condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Controlled_timing_check_eventContext* controlled_timing_check_event();

  class  Timing_check_event_controlContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_event_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSEDGE();
    antlr4::tree::TerminalNode *NEGEDGE();
    Edge_control_specifierContext *edge_control_specifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timing_check_event_controlContext* timing_check_event_control();

  class  Specify_terminal_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Specify_terminal_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specify_terminal_descriptorContext* specify_terminal_descriptor();

  class  Edge_control_specifierContext : public antlr4::ParserRuleContext {
  public:
    Edge_control_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EDGE();
    antlr4::tree::TerminalNode *LB();
    std::vector<Edge_descriptorContext *> edge_descriptor();
    Edge_descriptorContext* edge_descriptor(size_t i);
    antlr4::tree::TerminalNode *RB();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_control_specifierContext* edge_control_specifier();

  class  Edge_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Edge_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EDGE_DESCRIPTOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_descriptorContext* edge_descriptor();

  class  Timing_check_conditionContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scalar_timing_check_conditionContext *scalar_timing_check_condition();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timing_check_conditionContext* timing_check_condition();

  class  Scalar_timing_check_conditionContext : public antlr4::ParserRuleContext {
  public:
    Scalar_timing_check_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *TI();
    antlr4::tree::TerminalNode *EQEQ();
    Scalar_constantContext *scalar_constant();
    antlr4::tree::TerminalNode *EQEQEQ();
    antlr4::tree::TerminalNode *EMEQ();
    antlr4::tree::TerminalNode *EMEQEQ();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scalar_timing_check_conditionContext* scalar_timing_check_condition();

  class  Scalar_constantContext : public antlr4::ParserRuleContext {
  public:
    Scalar_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Binary_numberContext *binary_number();
    Unsigned_numberContext *unsigned_number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scalar_constantContext* scalar_constant();

  class  ConcatenationContext : public antlr4::ParserRuleContext {
  public:
    ConcatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConcatenationContext* concatenation();

  class  Constant_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Constant_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_concatenationContext* constant_concatenation();

  class  Constant_multiple_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Constant_multiple_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    Constant_expressionContext *constant_expression();
    Constant_concatenationContext *constant_concatenation();
    antlr4::tree::TerminalNode *RC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_multiple_concatenationContext* constant_multiple_concatenation();

  class  Module_path_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Module_path_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_concatenationContext* module_path_concatenation();

  class  Module_path_multiple_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Module_path_multiple_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    Constant_expressionContext *constant_expression();
    Module_path_concatenationContext *module_path_concatenation();
    antlr4::tree::TerminalNode *RC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_multiple_concatenationContext* module_path_multiple_concatenation();

  class  Multiple_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Multiple_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    Constant_expressionContext *constant_expression();
    ConcatenationContext *concatenation();
    antlr4::tree::TerminalNode *RC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiple_concatenationContext* multiple_concatenation();

  class  Constant_function_callContext : public antlr4::ParserRuleContext {
  public:
    Constant_function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_identifierContext *function_identifier();
    antlr4::tree::TerminalNode *LP();
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_function_callContext* constant_function_call();

  class  Constant_system_function_callContext : public antlr4::ParserRuleContext {
  public:
    Constant_system_function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    System_function_identifierContext *system_function_identifier();
    antlr4::tree::TerminalNode *LP();
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_system_function_callContext* constant_system_function_call();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *LP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  System_function_callContext : public antlr4::ParserRuleContext {
  public:
    System_function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    System_function_identifierContext *system_function_identifier();
    Sys_func_call_port_listContext *sys_func_call_port_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  System_function_callContext* system_function_call();

  class  Sys_func_call_port_listContext : public antlr4::ParserRuleContext {
  public:
    Sys_func_call_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sys_func_call_port_listContext* sys_func_call_port_list();

  class  Base_expressionContext : public antlr4::ParserRuleContext {
  public:
    Base_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Base_expressionContext* base_expression();

  class  Constant_base_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_base_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_base_expressionContext* constant_base_expression();

  class  Constant_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_primaryContext *constant_primary();
    Unary_operatorContext *unary_operator();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *ASAS();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *SL();
    antlr4::tree::TerminalNode *MO();
    antlr4::tree::TerminalNode *PL();
    antlr4::tree::TerminalNode *MI();
    antlr4::tree::TerminalNode *GTGT();
    antlr4::tree::TerminalNode *LTLT();
    antlr4::tree::TerminalNode *GTGTGT();
    antlr4::tree::TerminalNode *LTLTLT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTEQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTEQ();
    antlr4::tree::TerminalNode *EQEQ();
    antlr4::tree::TerminalNode *EMEQ();
    antlr4::tree::TerminalNode *EQEQEQ();
    antlr4::tree::TerminalNode *EMEQEQ();
    antlr4::tree::TerminalNode *AM();
    antlr4::tree::TerminalNode *CA();
    antlr4::tree::TerminalNode *CATI();
    antlr4::tree::TerminalNode *TICA();
    antlr4::tree::TerminalNode *VL();
    antlr4::tree::TerminalNode *AMAM();
    antlr4::tree::TerminalNode *VLVL();
    antlr4::tree::TerminalNode *QM();
    antlr4::tree::TerminalNode *CL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_expressionContext* constant_expression();
  Constant_expressionContext* constant_expression(int precedence);
  class  Constant_mintypmax_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_mintypmax_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CL();
    antlr4::tree::TerminalNode* CL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_mintypmax_expressionContext* constant_mintypmax_expression();

  class  Constant_range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    Msb_constant_expressionContext *msb_constant_expression();
    antlr4::tree::TerminalNode *CL();
    Lsb_constant_expressionContext *lsb_constant_expression();
    Constant_base_expressionContext *constant_base_expression();
    antlr4::tree::TerminalNode *PLCL();
    Width_constant_expressionContext *width_constant_expression();
    antlr4::tree::TerminalNode *MICL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_range_expressionContext* constant_range_expression();

  class  Dimension_constant_expressionContext : public antlr4::ParserRuleContext {
  public:
    Dimension_constant_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dimension_constant_expressionContext* dimension_constant_expression();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    Unary_operatorContext *unary_operator();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ASAS();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *SL();
    antlr4::tree::TerminalNode *MO();
    antlr4::tree::TerminalNode *PL();
    antlr4::tree::TerminalNode *MI();
    antlr4::tree::TerminalNode *GTGT();
    antlr4::tree::TerminalNode *LTLT();
    antlr4::tree::TerminalNode *GTGTGT();
    antlr4::tree::TerminalNode *LTLTLT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTEQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTEQ();
    antlr4::tree::TerminalNode *EQEQ();
    antlr4::tree::TerminalNode *EMEQ();
    antlr4::tree::TerminalNode *EQEQEQ();
    antlr4::tree::TerminalNode *EMEQEQ();
    antlr4::tree::TerminalNode *AM();
    antlr4::tree::TerminalNode *CA();
    antlr4::tree::TerminalNode *CATI();
    antlr4::tree::TerminalNode *TICA();
    antlr4::tree::TerminalNode *VL();
    antlr4::tree::TerminalNode *AMAM();
    antlr4::tree::TerminalNode *VLVL();
    antlr4::tree::TerminalNode *QM();
    antlr4::tree::TerminalNode *CL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Lsb_constant_expressionContext : public antlr4::ParserRuleContext {
  public:
    Lsb_constant_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lsb_constant_expressionContext* lsb_constant_expression();

  class  Mintypmax_expressionContext : public antlr4::ParserRuleContext {
  public:
    Mintypmax_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CL();
    antlr4::tree::TerminalNode* CL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mintypmax_expressionContext* mintypmax_expression();

  class  Module_path_expressionContext : public antlr4::ParserRuleContext {
  public:
    Module_path_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_path_primaryContext *module_path_primary();
    Unary_module_path_operatorContext *unary_module_path_operator();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);
    antlr4::tree::TerminalNode *EQEQ();
    antlr4::tree::TerminalNode *EMEQ();
    antlr4::tree::TerminalNode *AM();
    antlr4::tree::TerminalNode *CA();
    antlr4::tree::TerminalNode *CATI();
    antlr4::tree::TerminalNode *TICA();
    antlr4::tree::TerminalNode *VL();
    antlr4::tree::TerminalNode *AMAM();
    antlr4::tree::TerminalNode *VLVL();
    antlr4::tree::TerminalNode *QM();
    antlr4::tree::TerminalNode *CL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_expressionContext* module_path_expression();
  Module_path_expressionContext* module_path_expression(int precedence);
  class  Module_path_mintypmax_expressionContext : public antlr4::ParserRuleContext {
  public:
    Module_path_mintypmax_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CL();
    antlr4::tree::TerminalNode* CL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_mintypmax_expressionContext* module_path_mintypmax_expression();

  class  Msb_constant_expressionContext : public antlr4::ParserRuleContext {
  public:
    Msb_constant_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Msb_constant_expressionContext* msb_constant_expression();

  class  Range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Msb_constant_expressionContext *msb_constant_expression();
    antlr4::tree::TerminalNode *CL();
    Lsb_constant_expressionContext *lsb_constant_expression();
    Base_expressionContext *base_expression();
    antlr4::tree::TerminalNode *PLCL();
    Width_constant_expressionContext *width_constant_expression();
    antlr4::tree::TerminalNode *MICL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Range_expressionContext* range_expression();

  class  Width_constant_expressionContext : public antlr4::ParserRuleContext {
  public:
    Width_constant_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Width_constant_expressionContext* width_constant_expression();

  class  Constant_primaryContext : public antlr4::ParserRuleContext {
  public:
    Constant_primaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LB();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *RB();
    Constant_concatenationContext *constant_concatenation();
    Constant_multiple_concatenationContext *constant_multiple_concatenation();
    Constant_function_callContext *constant_function_call();
    Constant_system_function_callContext *constant_system_function_call();
    antlr4::tree::TerminalNode *LP();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    antlr4::tree::TerminalNode *RP();
    String_Context *string_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_primaryContext* constant_primary();

  class  Module_path_primaryContext : public antlr4::ParserRuleContext {
  public:
    Module_path_primaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    IdentifierContext *identifier();
    Module_path_concatenationContext *module_path_concatenation();
    Module_path_multiple_concatenationContext *module_path_multiple_concatenation();
    Function_callContext *function_call();
    System_function_callContext *system_function_call();
    antlr4::tree::TerminalNode *LP();
    Module_path_mintypmax_expressionContext *module_path_mintypmax_expression();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_primaryContext* module_path_primary();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    Hierarchical_identifierContext *hierarchical_identifier();
    Select_Context *select_();
    ConcatenationContext *concatenation();
    Multiple_concatenationContext *multiple_concatenation();
    Function_callContext *function_call();
    System_function_callContext *system_function_call();
    antlr4::tree::TerminalNode *LP();
    Mintypmax_expressionContext *mintypmax_expression();
    antlr4::tree::TerminalNode *RP();
    String_Context *string_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryContext* primary();

  class  Select_Context : public antlr4::ParserRuleContext {
  public:
    Select_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    Range_expressionContext *range_expression();
    antlr4::tree::TerminalNode *RB();
    Bit_selectContext *bit_select();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_Context* select_();

  class  Bit_selectContext : public antlr4::ParserRuleContext {
  public:
    Bit_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LB();
    antlr4::tree::TerminalNode* LB(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RB();
    antlr4::tree::TerminalNode* RB(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bit_selectContext* bit_select();

  class  Net_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Net_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    Const_selectContext *const_select();
    antlr4::tree::TerminalNode *LC();
    std::vector<Net_lvalueContext *> net_lvalue();
    Net_lvalueContext* net_lvalue(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_lvalueContext* net_lvalue();

  class  Const_selectContext : public antlr4::ParserRuleContext {
  public:
    Const_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *RB();
    Const_bit_selectContext *const_bit_select();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_selectContext* const_select();

  class  Const_bit_selectContext : public antlr4::ParserRuleContext {
  public:
    Const_bit_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LB();
    antlr4::tree::TerminalNode* LB(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RB();
    antlr4::tree::TerminalNode* RB(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_bit_selectContext* const_bit_select();

  class  Variable_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Variable_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    Select_Context *select_();
    antlr4::tree::TerminalNode *LC();
    std::vector<Variable_lvalueContext *> variable_lvalue();
    Variable_lvalueContext* variable_lvalue(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_lvalueContext* variable_lvalue();

  class  Unary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Unary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PL();
    antlr4::tree::TerminalNode *MI();
    antlr4::tree::TerminalNode *EM();
    antlr4::tree::TerminalNode *TI();
    antlr4::tree::TerminalNode *AM();
    antlr4::tree::TerminalNode *TIAM();
    antlr4::tree::TerminalNode *VL();
    antlr4::tree::TerminalNode *TIVL();
    antlr4::tree::TerminalNode *CA();
    antlr4::tree::TerminalNode *TICA();
    antlr4::tree::TerminalNode *CATI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_operatorContext* unary_operator();

  class  Unary_module_path_operatorContext : public antlr4::ParserRuleContext {
  public:
    Unary_module_path_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EM();
    antlr4::tree::TerminalNode *TI();
    antlr4::tree::TerminalNode *AM();
    antlr4::tree::TerminalNode *TIAM();
    antlr4::tree::TerminalNode *VL();
    antlr4::tree::TerminalNode *TIVL();
    antlr4::tree::TerminalNode *CA();
    antlr4::tree::TerminalNode *TICA();
    antlr4::tree::TerminalNode *CATI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_module_path_operatorContext* unary_module_path_operator();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Decimal_numberContext *decimal_number();
    Octal_numberContext *octal_number();
    Binary_numberContext *binary_number();
    Hex_numberContext *hex_number();
    Real_numberContext *real_number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  Real_numberContext : public antlr4::ParserRuleContext {
  public:
    Real_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fixed_point_numberContext *fixed_point_number();
    antlr4::tree::TerminalNode *UNIT();
    Exponential_numberContext *exponential_number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Real_numberContext* real_number();

  class  Decimal_numberContext : public antlr4::ParserRuleContext {
  public:
    Decimal_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unsigned_numberContext *unsigned_number();
    Decimal_baseContext *decimal_base();
    Decimal_valueContext *decimal_value();
    SizeContext *size();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decimal_numberContext* decimal_number();

  class  Binary_numberContext : public antlr4::ParserRuleContext {
  public:
    Binary_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Binary_baseContext *binary_base();
    Binary_valueContext *binary_value();
    SizeContext *size();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_numberContext* binary_number();

  class  Octal_numberContext : public antlr4::ParserRuleContext {
  public:
    Octal_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Octal_baseContext *octal_base();
    Octal_valueContext *octal_value();
    SizeContext *size();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Octal_numberContext* octal_number();

  class  Hex_numberContext : public antlr4::ParserRuleContext {
  public:
    Hex_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hex_baseContext *hex_base();
    Hex_valueContext *hex_value();
    SizeContext *size();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hex_numberContext* hex_number();

  class  SizeContext : public antlr4::ParserRuleContext {
  public:
    SizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SizeContext* size();

  class  Fixed_point_numberContext : public antlr4::ParserRuleContext {
  public:
    Fixed_point_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIXED_POINT_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fixed_point_numberContext* fixed_point_number();

  class  Exponential_numberContext : public antlr4::ParserRuleContext {
  public:
    Exponential_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPONENTIAL_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exponential_numberContext* exponential_number();

  class  Unsigned_numberContext : public antlr4::ParserRuleContext {
  public:
    Unsigned_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unsigned_numberContext* unsigned_number();

  class  Decimal_valueContext : public antlr4::ParserRuleContext {
  public:
    Decimal_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();
    antlr4::tree::TerminalNode *X_OR_Z_UNDERSCORE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decimal_valueContext* decimal_value();

  class  Binary_valueContext : public antlr4::ParserRuleContext {
  public:
    Binary_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY_VALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_valueContext* binary_value();

  class  Octal_valueContext : public antlr4::ParserRuleContext {
  public:
    Octal_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OCTAL_VALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Octal_valueContext* octal_value();

  class  Hex_valueContext : public antlr4::ParserRuleContext {
  public:
    Hex_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEX_VALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hex_valueContext* hex_value();

  class  Decimal_baseContext : public antlr4::ParserRuleContext {
  public:
    Decimal_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_BASE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decimal_baseContext* decimal_base();

  class  Binary_baseContext : public antlr4::ParserRuleContext {
  public:
    Binary_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY_BASE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_baseContext* binary_base();

  class  Octal_baseContext : public antlr4::ParserRuleContext {
  public:
    Octal_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OCTAL_BASE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Octal_baseContext* octal_base();

  class  Hex_baseContext : public antlr4::ParserRuleContext {
  public:
    Hex_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEX_BASE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hex_baseContext* hex_base();

  class  String_Context : public antlr4::ParserRuleContext {
  public:
    String_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_Context* string_();

  class  Attribute_instanceContext : public antlr4::ParserRuleContext {
  public:
    Attribute_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<antlr4::tree::TerminalNode *> AS();
    antlr4::tree::TerminalNode* AS(size_t i);
    std::vector<Attr_specContext *> attr_spec();
    Attr_specContext* attr_spec(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_instanceContext* attribute_instance();

  class  Attr_specContext : public antlr4::ParserRuleContext {
  public:
    Attr_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Attr_nameContext *attr_name();
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_specContext* attr_spec();

  class  Attr_nameContext : public antlr4::ParserRuleContext {
  public:
    Attr_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_nameContext* attr_name();

  class  Block_identifierContext : public antlr4::ParserRuleContext {
  public:
    Block_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_identifierContext* block_identifier();

  class  Cell_identifierContext : public antlr4::ParserRuleContext {
  public:
    Cell_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cell_identifierContext* cell_identifier();

  class  Config_identifierContext : public antlr4::ParserRuleContext {
  public:
    Config_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Config_identifierContext* config_identifier();

  class  Escaped_identifierContext : public antlr4::ParserRuleContext {
  public:
    Escaped_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ESCAPED_IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Escaped_identifierContext* escaped_identifier();

  class  Event_identifierContext : public antlr4::ParserRuleContext {
  public:
    Event_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_identifierContext* event_identifier();

  class  Function_identifierContext : public antlr4::ParserRuleContext {
  public:
    Function_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_identifierContext* function_identifier();

  class  Gate_instance_identifierContext : public antlr4::ParserRuleContext {
  public:
    Gate_instance_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Gate_instance_identifierContext* gate_instance_identifier();

  class  Generate_block_identifierContext : public antlr4::ParserRuleContext {
  public:
    Generate_block_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_block_identifierContext* generate_block_identifier();

  class  Genvar_identifierContext : public antlr4::ParserRuleContext {
  public:
    Genvar_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_identifierContext* genvar_identifier();

  class  Hierarchical_identifierContext : public antlr4::ParserRuleContext {
  public:
    Hierarchical_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Hier_refContext *> hier_ref();
    Hier_refContext* hier_ref(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchical_identifierContext* hierarchical_identifier();

  class  Hier_refContext : public antlr4::ParserRuleContext {
  public:
    Hier_refContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DT();
    Const_bit_selectContext *const_bit_select();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hier_refContext* hier_ref();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Escaped_identifierContext *escaped_identifier();
    Simple_identifierContext *simple_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  Input_port_identifierContext : public antlr4::ParserRuleContext {
  public:
    Input_port_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Input_port_identifierContext* input_port_identifier();

  class  Instance_identifierContext : public antlr4::ParserRuleContext {
  public:
    Instance_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Instance_identifierContext* instance_identifier();

  class  Library_identifierContext : public antlr4::ParserRuleContext {
  public:
    Library_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_identifierContext* library_identifier();

  class  Module_identifierContext : public antlr4::ParserRuleContext {
  public:
    Module_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_identifierContext* module_identifier();

  class  Module_instance_identifierContext : public antlr4::ParserRuleContext {
  public:
    Module_instance_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_instance_identifierContext* module_instance_identifier();

  class  Net_identifierContext : public antlr4::ParserRuleContext {
  public:
    Net_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_identifierContext* net_identifier();

  class  Output_port_identifierContext : public antlr4::ParserRuleContext {
  public:
    Output_port_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_port_identifierContext* output_port_identifier();

  class  Parameter_identifierContext : public antlr4::ParserRuleContext {
  public:
    Parameter_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_identifierContext* parameter_identifier();

  class  Port_identifierContext : public antlr4::ParserRuleContext {
  public:
    Port_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_identifierContext* port_identifier();

  class  Real_identifierContext : public antlr4::ParserRuleContext {
  public:
    Real_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Real_identifierContext* real_identifier();

  class  Simple_identifierContext : public antlr4::ParserRuleContext {
  public:
    Simple_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLE_IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_identifierContext* simple_identifier();

  class  Specparam_identifierContext : public antlr4::ParserRuleContext {
  public:
    Specparam_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specparam_identifierContext* specparam_identifier();

  class  System_function_identifierContext : public antlr4::ParserRuleContext {
  public:
    System_function_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYSTEM_TF_IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  System_function_identifierContext* system_function_identifier();

  class  System_task_identifierContext : public antlr4::ParserRuleContext {
  public:
    System_task_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYSTEM_TF_IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  System_task_identifierContext* system_task_identifier();

  class  Task_identifierContext : public antlr4::ParserRuleContext {
  public:
    Task_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_identifierContext* task_identifier();

  class  Terminal_identifierContext : public antlr4::ParserRuleContext {
  public:
    Terminal_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Terminal_identifierContext* terminal_identifier();

  class  Topmodule_identifierContext : public antlr4::ParserRuleContext {
  public:
    Topmodule_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Topmodule_identifierContext* topmodule_identifier();

  class  Udp_identifierContext : public antlr4::ParserRuleContext {
  public:
    Udp_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_identifierContext* udp_identifier();

  class  Udp_instance_identifierContext : public antlr4::ParserRuleContext {
  public:
    Udp_instance_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_instance_identifierContext* udp_instance_identifier();

  class  Variable_identifierContext : public antlr4::ParserRuleContext {
  public:
    Variable_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_identifierContext* variable_identifier();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool event_expressionSempred(Event_expressionContext *_localctx, size_t predicateIndex);
  bool constant_expressionSempred(Constant_expressionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool module_path_expressionSempred(Module_path_expressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

