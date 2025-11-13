
// Generated from VerilogParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "VerilogParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by VerilogParser.
 */
class  VerilogParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by VerilogParser.
   */
    virtual std::any visitLibrary_text(VerilogParser::Library_textContext *context) = 0;

    virtual std::any visitLibrary_description(VerilogParser::Library_descriptionContext *context) = 0;

    virtual std::any visitLibrary_declaration(VerilogParser::Library_declarationContext *context) = 0;

    virtual std::any visitLibrary_incdir(VerilogParser::Library_incdirContext *context) = 0;

    virtual std::any visitInclude_statement(VerilogParser::Include_statementContext *context) = 0;

    virtual std::any visitFile_path_spec(VerilogParser::File_path_specContext *context) = 0;

    virtual std::any visitSource_text(VerilogParser::Source_textContext *context) = 0;

    virtual std::any visitDescription(VerilogParser::DescriptionContext *context) = 0;

    virtual std::any visitModule_declaration(VerilogParser::Module_declarationContext *context) = 0;

    virtual std::any visitModule_keyword(VerilogParser::Module_keywordContext *context) = 0;

    virtual std::any visitModule_parameter_port_list(VerilogParser::Module_parameter_port_listContext *context) = 0;

    virtual std::any visitList_of_port_declarations(VerilogParser::List_of_port_declarationsContext *context) = 0;

    virtual std::any visitPort(VerilogParser::PortContext *context) = 0;

    virtual std::any visitPort_implicit(VerilogParser::Port_implicitContext *context) = 0;

    virtual std::any visitPort_explicit(VerilogParser::Port_explicitContext *context) = 0;

    virtual std::any visitPort_expression(VerilogParser::Port_expressionContext *context) = 0;

    virtual std::any visitPort_reference(VerilogParser::Port_referenceContext *context) = 0;

    virtual std::any visitPort_declaration(VerilogParser::Port_declarationContext *context) = 0;

    virtual std::any visitModule_item(VerilogParser::Module_itemContext *context) = 0;

    virtual std::any visitModule_or_generate_item(VerilogParser::Module_or_generate_itemContext *context) = 0;

    virtual std::any visitModule_or_generate_item_declaration(VerilogParser::Module_or_generate_item_declarationContext *context) = 0;

    virtual std::any visitParameter_override(VerilogParser::Parameter_overrideContext *context) = 0;

    virtual std::any visitConfig_declaration(VerilogParser::Config_declarationContext *context) = 0;

    virtual std::any visitDesign_statement(VerilogParser::Design_statementContext *context) = 0;

    virtual std::any visitDesign_statement_item(VerilogParser::Design_statement_itemContext *context) = 0;

    virtual std::any visitConfig_rule_statement(VerilogParser::Config_rule_statementContext *context) = 0;

    virtual std::any visitDefault_clause(VerilogParser::Default_clauseContext *context) = 0;

    virtual std::any visitInst_clause(VerilogParser::Inst_clauseContext *context) = 0;

    virtual std::any visitInst_name(VerilogParser::Inst_nameContext *context) = 0;

    virtual std::any visitCell_clause(VerilogParser::Cell_clauseContext *context) = 0;

    virtual std::any visitLiblist_clause(VerilogParser::Liblist_clauseContext *context) = 0;

    virtual std::any visitUse_clause(VerilogParser::Use_clauseContext *context) = 0;

    virtual std::any visitLocal_parameter_declaration(VerilogParser::Local_parameter_declarationContext *context) = 0;

    virtual std::any visitParameter_declaration(VerilogParser::Parameter_declarationContext *context) = 0;

    virtual std::any visitSpecparam_declaration(VerilogParser::Specparam_declarationContext *context) = 0;

    virtual std::any visitParameter_type(VerilogParser::Parameter_typeContext *context) = 0;

    virtual std::any visitInout_declaration(VerilogParser::Inout_declarationContext *context) = 0;

    virtual std::any visitInput_declaration(VerilogParser::Input_declarationContext *context) = 0;

    virtual std::any visitOutput_declaration(VerilogParser::Output_declarationContext *context) = 0;

    virtual std::any visitEvent_declaration(VerilogParser::Event_declarationContext *context) = 0;

    virtual std::any visitInteger_declaration(VerilogParser::Integer_declarationContext *context) = 0;

    virtual std::any visitNet_declaration(VerilogParser::Net_declarationContext *context) = 0;

    virtual std::any visitReal_declaration(VerilogParser::Real_declarationContext *context) = 0;

    virtual std::any visitRealtime_declaration(VerilogParser::Realtime_declarationContext *context) = 0;

    virtual std::any visitReg_declaration(VerilogParser::Reg_declarationContext *context) = 0;

    virtual std::any visitTime_declaration(VerilogParser::Time_declarationContext *context) = 0;

    virtual std::any visitNet_type(VerilogParser::Net_typeContext *context) = 0;

    virtual std::any visitOutput_variable_type(VerilogParser::Output_variable_typeContext *context) = 0;

    virtual std::any visitReal_type(VerilogParser::Real_typeContext *context) = 0;

    virtual std::any visitVariable_type(VerilogParser::Variable_typeContext *context) = 0;

    virtual std::any visitDrive_strength(VerilogParser::Drive_strengthContext *context) = 0;

    virtual std::any visitStrength0(VerilogParser::Strength0Context *context) = 0;

    virtual std::any visitStrength1(VerilogParser::Strength1Context *context) = 0;

    virtual std::any visitCharge_strength(VerilogParser::Charge_strengthContext *context) = 0;

    virtual std::any visitDelay3(VerilogParser::Delay3Context *context) = 0;

    virtual std::any visitDelay2(VerilogParser::Delay2Context *context) = 0;

    virtual std::any visitDelay_value(VerilogParser::Delay_valueContext *context) = 0;

    virtual std::any visitList_of_defparam_assignments(VerilogParser::List_of_defparam_assignmentsContext *context) = 0;

    virtual std::any visitList_of_event_identifiers(VerilogParser::List_of_event_identifiersContext *context) = 0;

    virtual std::any visitEvent_id(VerilogParser::Event_idContext *context) = 0;

    virtual std::any visitList_of_net_decl_assignments(VerilogParser::List_of_net_decl_assignmentsContext *context) = 0;

    virtual std::any visitList_of_net_identifiers(VerilogParser::List_of_net_identifiersContext *context) = 0;

    virtual std::any visitNet_id(VerilogParser::Net_idContext *context) = 0;

    virtual std::any visitList_of_param_assignments(VerilogParser::List_of_param_assignmentsContext *context) = 0;

    virtual std::any visitList_of_port_identifiers(VerilogParser::List_of_port_identifiersContext *context) = 0;

    virtual std::any visitList_of_real_identifiers(VerilogParser::List_of_real_identifiersContext *context) = 0;

    virtual std::any visitList_of_specparam_assignments(VerilogParser::List_of_specparam_assignmentsContext *context) = 0;

    virtual std::any visitList_of_variable_identifiers(VerilogParser::List_of_variable_identifiersContext *context) = 0;

    virtual std::any visitList_of_variable_port_identifiers(VerilogParser::List_of_variable_port_identifiersContext *context) = 0;

    virtual std::any visitVar_port_id(VerilogParser::Var_port_idContext *context) = 0;

    virtual std::any visitDefparam_assignment(VerilogParser::Defparam_assignmentContext *context) = 0;

    virtual std::any visitNet_decl_assignment(VerilogParser::Net_decl_assignmentContext *context) = 0;

    virtual std::any visitParam_assignment(VerilogParser::Param_assignmentContext *context) = 0;

    virtual std::any visitSpecparam_assignment(VerilogParser::Specparam_assignmentContext *context) = 0;

    virtual std::any visitPulse_control_specparam(VerilogParser::Pulse_control_specparamContext *context) = 0;

    virtual std::any visitError_limit_value(VerilogParser::Error_limit_valueContext *context) = 0;

    virtual std::any visitReject_limit_value(VerilogParser::Reject_limit_valueContext *context) = 0;

    virtual std::any visitLimit_value(VerilogParser::Limit_valueContext *context) = 0;

    virtual std::any visitDimension(VerilogParser::DimensionContext *context) = 0;

    virtual std::any visitRange_(VerilogParser::Range_Context *context) = 0;

    virtual std::any visitFunction_declaration(VerilogParser::Function_declarationContext *context) = 0;

    virtual std::any visitFunction_item_declaration(VerilogParser::Function_item_declarationContext *context) = 0;

    virtual std::any visitFunction_port_list(VerilogParser::Function_port_listContext *context) = 0;

    virtual std::any visitFunc_port_item(VerilogParser::Func_port_itemContext *context) = 0;

    virtual std::any visitFunction_range_or_type(VerilogParser::Function_range_or_typeContext *context) = 0;

    virtual std::any visitTask_declaration(VerilogParser::Task_declarationContext *context) = 0;

    virtual std::any visitTask_item_declaration(VerilogParser::Task_item_declarationContext *context) = 0;

    virtual std::any visitTask_port_list(VerilogParser::Task_port_listContext *context) = 0;

    virtual std::any visitTask_port_item(VerilogParser::Task_port_itemContext *context) = 0;

    virtual std::any visitTf_input_declaration(VerilogParser::Tf_input_declarationContext *context) = 0;

    virtual std::any visitTf_output_declaration(VerilogParser::Tf_output_declarationContext *context) = 0;

    virtual std::any visitTf_inout_declaration(VerilogParser::Tf_inout_declarationContext *context) = 0;

    virtual std::any visitTask_port_type(VerilogParser::Task_port_typeContext *context) = 0;

    virtual std::any visitBlock_item_declaration(VerilogParser::Block_item_declarationContext *context) = 0;

    virtual std::any visitList_of_block_variable_identifiers(VerilogParser::List_of_block_variable_identifiersContext *context) = 0;

    virtual std::any visitList_of_block_real_identifiers(VerilogParser::List_of_block_real_identifiersContext *context) = 0;

    virtual std::any visitBlock_variable_type(VerilogParser::Block_variable_typeContext *context) = 0;

    virtual std::any visitBlock_real_type(VerilogParser::Block_real_typeContext *context) = 0;

    virtual std::any visitGate_instantiation(VerilogParser::Gate_instantiationContext *context) = 0;

    virtual std::any visitCmos_switch_instance(VerilogParser::Cmos_switch_instanceContext *context) = 0;

    virtual std::any visitEnable_gate_instance(VerilogParser::Enable_gate_instanceContext *context) = 0;

    virtual std::any visitMos_switch_instance(VerilogParser::Mos_switch_instanceContext *context) = 0;

    virtual std::any visitN_input_gate_instance(VerilogParser::N_input_gate_instanceContext *context) = 0;

    virtual std::any visitN_output_gate_instance(VerilogParser::N_output_gate_instanceContext *context) = 0;

    virtual std::any visitPass_switch_instance(VerilogParser::Pass_switch_instanceContext *context) = 0;

    virtual std::any visitPass_enable_switch_instance(VerilogParser::Pass_enable_switch_instanceContext *context) = 0;

    virtual std::any visitPull_gate_instance(VerilogParser::Pull_gate_instanceContext *context) = 0;

    virtual std::any visitName_of_gate_instance(VerilogParser::Name_of_gate_instanceContext *context) = 0;

    virtual std::any visitPulldown_strength(VerilogParser::Pulldown_strengthContext *context) = 0;

    virtual std::any visitPullup_strength(VerilogParser::Pullup_strengthContext *context) = 0;

    virtual std::any visitEnable_terminal(VerilogParser::Enable_terminalContext *context) = 0;

    virtual std::any visitInout_terminal(VerilogParser::Inout_terminalContext *context) = 0;

    virtual std::any visitInput_terminal(VerilogParser::Input_terminalContext *context) = 0;

    virtual std::any visitNcontrol_terminal(VerilogParser::Ncontrol_terminalContext *context) = 0;

    virtual std::any visitOutput_terminal(VerilogParser::Output_terminalContext *context) = 0;

    virtual std::any visitPcontrol_terminal(VerilogParser::Pcontrol_terminalContext *context) = 0;

    virtual std::any visitCmos_switchtype(VerilogParser::Cmos_switchtypeContext *context) = 0;

    virtual std::any visitEnable_gatetype(VerilogParser::Enable_gatetypeContext *context) = 0;

    virtual std::any visitMos_switchtype(VerilogParser::Mos_switchtypeContext *context) = 0;

    virtual std::any visitN_input_gatetype(VerilogParser::N_input_gatetypeContext *context) = 0;

    virtual std::any visitN_output_gatetype(VerilogParser::N_output_gatetypeContext *context) = 0;

    virtual std::any visitPass_en_switchtype(VerilogParser::Pass_en_switchtypeContext *context) = 0;

    virtual std::any visitPass_switchtype(VerilogParser::Pass_switchtypeContext *context) = 0;

    virtual std::any visitModule_instantiation(VerilogParser::Module_instantiationContext *context) = 0;

    virtual std::any visitParameter_value_assignment(VerilogParser::Parameter_value_assignmentContext *context) = 0;

    virtual std::any visitList_of_parameter_assignments(VerilogParser::List_of_parameter_assignmentsContext *context) = 0;

    virtual std::any visitOrdered_parameter_assignment(VerilogParser::Ordered_parameter_assignmentContext *context) = 0;

    virtual std::any visitNamed_parameter_assignment(VerilogParser::Named_parameter_assignmentContext *context) = 0;

    virtual std::any visitModule_instance(VerilogParser::Module_instanceContext *context) = 0;

    virtual std::any visitName_of_module_instance(VerilogParser::Name_of_module_instanceContext *context) = 0;

    virtual std::any visitList_of_port_connections(VerilogParser::List_of_port_connectionsContext *context) = 0;

    virtual std::any visitOrdered_port_connection(VerilogParser::Ordered_port_connectionContext *context) = 0;

    virtual std::any visitNamed_port_connection(VerilogParser::Named_port_connectionContext *context) = 0;

    virtual std::any visitGenerate_region(VerilogParser::Generate_regionContext *context) = 0;

    virtual std::any visitGenvar_declaration(VerilogParser::Genvar_declarationContext *context) = 0;

    virtual std::any visitList_of_genvar_identifiers(VerilogParser::List_of_genvar_identifiersContext *context) = 0;

    virtual std::any visitLoop_generate_construct(VerilogParser::Loop_generate_constructContext *context) = 0;

    virtual std::any visitGenvar_initialization(VerilogParser::Genvar_initializationContext *context) = 0;

    virtual std::any visitGenvar_expression(VerilogParser::Genvar_expressionContext *context) = 0;

    virtual std::any visitGenvar_iteration(VerilogParser::Genvar_iterationContext *context) = 0;

    virtual std::any visitConditional_generate_construct(VerilogParser::Conditional_generate_constructContext *context) = 0;

    virtual std::any visitIf_generate_construct(VerilogParser::If_generate_constructContext *context) = 0;

    virtual std::any visitCase_generate_construct(VerilogParser::Case_generate_constructContext *context) = 0;

    virtual std::any visitCase_generate_item(VerilogParser::Case_generate_itemContext *context) = 0;

    virtual std::any visitGenerate_block(VerilogParser::Generate_blockContext *context) = 0;

    virtual std::any visitGenerate_block_name(VerilogParser::Generate_block_nameContext *context) = 0;

    virtual std::any visitGenerate_block_or_null(VerilogParser::Generate_block_or_nullContext *context) = 0;

    virtual std::any visitUdp_declaration(VerilogParser::Udp_declarationContext *context) = 0;

    virtual std::any visitUdp_port_list(VerilogParser::Udp_port_listContext *context) = 0;

    virtual std::any visitUdp_declaration_port_list(VerilogParser::Udp_declaration_port_listContext *context) = 0;

    virtual std::any visitUdp_port_declaration(VerilogParser::Udp_port_declarationContext *context) = 0;

    virtual std::any visitUdp_output_declaration(VerilogParser::Udp_output_declarationContext *context) = 0;

    virtual std::any visitUdp_input_declaration(VerilogParser::Udp_input_declarationContext *context) = 0;

    virtual std::any visitUdp_reg_declaration(VerilogParser::Udp_reg_declarationContext *context) = 0;

    virtual std::any visitUdp_body(VerilogParser::Udp_bodyContext *context) = 0;

    virtual std::any visitCombinational_body(VerilogParser::Combinational_bodyContext *context) = 0;

    virtual std::any visitCombinational_entry(VerilogParser::Combinational_entryContext *context) = 0;

    virtual std::any visitSequential_body(VerilogParser::Sequential_bodyContext *context) = 0;

    virtual std::any visitUdp_initial_statement(VerilogParser::Udp_initial_statementContext *context) = 0;

    virtual std::any visitInit_val(VerilogParser::Init_valContext *context) = 0;

    virtual std::any visitSequential_entry(VerilogParser::Sequential_entryContext *context) = 0;

    virtual std::any visitSeq_input_list(VerilogParser::Seq_input_listContext *context) = 0;

    virtual std::any visitLevel_input_list(VerilogParser::Level_input_listContext *context) = 0;

    virtual std::any visitEdge_input_list(VerilogParser::Edge_input_listContext *context) = 0;

    virtual std::any visitEdge_indicator(VerilogParser::Edge_indicatorContext *context) = 0;

    virtual std::any visitCurrent_state(VerilogParser::Current_stateContext *context) = 0;

    virtual std::any visitNext_state(VerilogParser::Next_stateContext *context) = 0;

    virtual std::any visitOutput_symbol(VerilogParser::Output_symbolContext *context) = 0;

    virtual std::any visitLevel_symbol(VerilogParser::Level_symbolContext *context) = 0;

    virtual std::any visitEdge_symbol(VerilogParser::Edge_symbolContext *context) = 0;

    virtual std::any visitUdp_instantiation(VerilogParser::Udp_instantiationContext *context) = 0;

    virtual std::any visitUdp_instance(VerilogParser::Udp_instanceContext *context) = 0;

    virtual std::any visitName_of_udp_instance(VerilogParser::Name_of_udp_instanceContext *context) = 0;

    virtual std::any visitContinuous_assign(VerilogParser::Continuous_assignContext *context) = 0;

    virtual std::any visitList_of_net_assignments(VerilogParser::List_of_net_assignmentsContext *context) = 0;

    virtual std::any visitNet_assignment(VerilogParser::Net_assignmentContext *context) = 0;

    virtual std::any visitInitial_construct(VerilogParser::Initial_constructContext *context) = 0;

    virtual std::any visitAlways_construct(VerilogParser::Always_constructContext *context) = 0;

    virtual std::any visitBlocking_assignment(VerilogParser::Blocking_assignmentContext *context) = 0;

    virtual std::any visitNonblocking_assignment(VerilogParser::Nonblocking_assignmentContext *context) = 0;

    virtual std::any visitProcedural_continuous_assignments(VerilogParser::Procedural_continuous_assignmentsContext *context) = 0;

    virtual std::any visitVariable_assignment(VerilogParser::Variable_assignmentContext *context) = 0;

    virtual std::any visitPar_block(VerilogParser::Par_blockContext *context) = 0;

    virtual std::any visitBlock_name(VerilogParser::Block_nameContext *context) = 0;

    virtual std::any visitSeq_block(VerilogParser::Seq_blockContext *context) = 0;

    virtual std::any visitStatement(VerilogParser::StatementContext *context) = 0;

    virtual std::any visitStatement_or_null(VerilogParser::Statement_or_nullContext *context) = 0;

    virtual std::any visitFunction_statement(VerilogParser::Function_statementContext *context) = 0;

    virtual std::any visitDelay_control(VerilogParser::Delay_controlContext *context) = 0;

    virtual std::any visitDelay_or_event_control(VerilogParser::Delay_or_event_controlContext *context) = 0;

    virtual std::any visitDisable_statement(VerilogParser::Disable_statementContext *context) = 0;

    virtual std::any visitEvent_control(VerilogParser::Event_controlContext *context) = 0;

    virtual std::any visitEvent_trigger(VerilogParser::Event_triggerContext *context) = 0;

    virtual std::any visitEvent_expression(VerilogParser::Event_expressionContext *context) = 0;

    virtual std::any visitProcedural_timing_control(VerilogParser::Procedural_timing_controlContext *context) = 0;

    virtual std::any visitProcedural_timing_control_statement(VerilogParser::Procedural_timing_control_statementContext *context) = 0;

    virtual std::any visitWait_statement(VerilogParser::Wait_statementContext *context) = 0;

    virtual std::any visitConditional_statement(VerilogParser::Conditional_statementContext *context) = 0;

    virtual std::any visitCase_statement(VerilogParser::Case_statementContext *context) = 0;

    virtual std::any visitCase_item(VerilogParser::Case_itemContext *context) = 0;

    virtual std::any visitLoop_statement(VerilogParser::Loop_statementContext *context) = 0;

    virtual std::any visitSystem_task_enable(VerilogParser::System_task_enableContext *context) = 0;

    virtual std::any visitSys_task_en_port_list(VerilogParser::Sys_task_en_port_listContext *context) = 0;

    virtual std::any visitSys_task_en_port_item(VerilogParser::Sys_task_en_port_itemContext *context) = 0;

    virtual std::any visitTask_enable(VerilogParser::Task_enableContext *context) = 0;

    virtual std::any visitTask_en_port_list(VerilogParser::Task_en_port_listContext *context) = 0;

    virtual std::any visitSpecify_block(VerilogParser::Specify_blockContext *context) = 0;

    virtual std::any visitSpecify_item(VerilogParser::Specify_itemContext *context) = 0;

    virtual std::any visitPulsestyle_declaration(VerilogParser::Pulsestyle_declarationContext *context) = 0;

    virtual std::any visitShowcancelled_declaration(VerilogParser::Showcancelled_declarationContext *context) = 0;

    virtual std::any visitPath_declaration(VerilogParser::Path_declarationContext *context) = 0;

    virtual std::any visitSimple_path_declaration(VerilogParser::Simple_path_declarationContext *context) = 0;

    virtual std::any visitParallel_path_description(VerilogParser::Parallel_path_descriptionContext *context) = 0;

    virtual std::any visitFull_path_description(VerilogParser::Full_path_descriptionContext *context) = 0;

    virtual std::any visitList_of_path_inputs(VerilogParser::List_of_path_inputsContext *context) = 0;

    virtual std::any visitList_of_path_outputs(VerilogParser::List_of_path_outputsContext *context) = 0;

    virtual std::any visitSpecify_input_terminal_descriptor(VerilogParser::Specify_input_terminal_descriptorContext *context) = 0;

    virtual std::any visitSpecify_output_terminal_descriptor(VerilogParser::Specify_output_terminal_descriptorContext *context) = 0;

    virtual std::any visitInput_identifier(VerilogParser::Input_identifierContext *context) = 0;

    virtual std::any visitOutput_identifier(VerilogParser::Output_identifierContext *context) = 0;

    virtual std::any visitPath_delay_value(VerilogParser::Path_delay_valueContext *context) = 0;

    virtual std::any visitList_of_path_delay_expressions(VerilogParser::List_of_path_delay_expressionsContext *context) = 0;

    virtual std::any visitT_path_delay_expression(VerilogParser::T_path_delay_expressionContext *context) = 0;

    virtual std::any visitTrise_path_delay_expression(VerilogParser::Trise_path_delay_expressionContext *context) = 0;

    virtual std::any visitTfall_path_delay_expression(VerilogParser::Tfall_path_delay_expressionContext *context) = 0;

    virtual std::any visitTz_path_delay_expression(VerilogParser::Tz_path_delay_expressionContext *context) = 0;

    virtual std::any visitT01_path_delay_expression(VerilogParser::T01_path_delay_expressionContext *context) = 0;

    virtual std::any visitT10_path_delay_expression(VerilogParser::T10_path_delay_expressionContext *context) = 0;

    virtual std::any visitT0z_path_delay_expression(VerilogParser::T0z_path_delay_expressionContext *context) = 0;

    virtual std::any visitTz1_path_delay_expression(VerilogParser::Tz1_path_delay_expressionContext *context) = 0;

    virtual std::any visitT1z_path_delay_expression(VerilogParser::T1z_path_delay_expressionContext *context) = 0;

    virtual std::any visitTz0_path_delay_expression(VerilogParser::Tz0_path_delay_expressionContext *context) = 0;

    virtual std::any visitT0x_path_delay_expression(VerilogParser::T0x_path_delay_expressionContext *context) = 0;

    virtual std::any visitTx1_path_delay_expression(VerilogParser::Tx1_path_delay_expressionContext *context) = 0;

    virtual std::any visitT1x_path_delay_expression(VerilogParser::T1x_path_delay_expressionContext *context) = 0;

    virtual std::any visitTx0_path_delay_expression(VerilogParser::Tx0_path_delay_expressionContext *context) = 0;

    virtual std::any visitTxz_path_delay_expression(VerilogParser::Txz_path_delay_expressionContext *context) = 0;

    virtual std::any visitTzx_path_delay_expression(VerilogParser::Tzx_path_delay_expressionContext *context) = 0;

    virtual std::any visitPath_delay_expression(VerilogParser::Path_delay_expressionContext *context) = 0;

    virtual std::any visitEdge_sensitive_path_declaration(VerilogParser::Edge_sensitive_path_declarationContext *context) = 0;

    virtual std::any visitParallel_edge_sensitive_path_description(VerilogParser::Parallel_edge_sensitive_path_descriptionContext *context) = 0;

    virtual std::any visitFull_edge_sensitive_path_description(VerilogParser::Full_edge_sensitive_path_descriptionContext *context) = 0;

    virtual std::any visitData_source_expression(VerilogParser::Data_source_expressionContext *context) = 0;

    virtual std::any visitEdge_identifier(VerilogParser::Edge_identifierContext *context) = 0;

    virtual std::any visitState_dependent_path_declaration(VerilogParser::State_dependent_path_declarationContext *context) = 0;

    virtual std::any visitPolarity_operator(VerilogParser::Polarity_operatorContext *context) = 0;

    virtual std::any visitSystem_timing_check(VerilogParser::System_timing_checkContext *context) = 0;

    virtual std::any visitSetup_timing_check(VerilogParser::Setup_timing_checkContext *context) = 0;

    virtual std::any visitNotifier_opt(VerilogParser::Notifier_optContext *context) = 0;

    virtual std::any visitHold_timing_check(VerilogParser::Hold_timing_checkContext *context) = 0;

    virtual std::any visitSetuphold_timing_check(VerilogParser::Setuphold_timing_checkContext *context) = 0;

    virtual std::any visitTiming_check_opt(VerilogParser::Timing_check_optContext *context) = 0;

    virtual std::any visitStamptime_cond_opt(VerilogParser::Stamptime_cond_optContext *context) = 0;

    virtual std::any visitChecktime_cond_opt(VerilogParser::Checktime_cond_optContext *context) = 0;

    virtual std::any visitDelayed_ref_opt(VerilogParser::Delayed_ref_optContext *context) = 0;

    virtual std::any visitDelayed_data_opt(VerilogParser::Delayed_data_optContext *context) = 0;

    virtual std::any visitRecovery_timing_check(VerilogParser::Recovery_timing_checkContext *context) = 0;

    virtual std::any visitRemoval_timing_check(VerilogParser::Removal_timing_checkContext *context) = 0;

    virtual std::any visitRecrem_timing_check(VerilogParser::Recrem_timing_checkContext *context) = 0;

    virtual std::any visitSkew_timing_check(VerilogParser::Skew_timing_checkContext *context) = 0;

    virtual std::any visitTimeskew_timing_check(VerilogParser::Timeskew_timing_checkContext *context) = 0;

    virtual std::any visitSkew_timing_check_opt(VerilogParser::Skew_timing_check_optContext *context) = 0;

    virtual std::any visitEvent_based_flag_opt(VerilogParser::Event_based_flag_optContext *context) = 0;

    virtual std::any visitRemain_active_flag_opt(VerilogParser::Remain_active_flag_optContext *context) = 0;

    virtual std::any visitFullskew_timing_check(VerilogParser::Fullskew_timing_checkContext *context) = 0;

    virtual std::any visitPeriod_timing_check(VerilogParser::Period_timing_checkContext *context) = 0;

    virtual std::any visitWidth_timing_check(VerilogParser::Width_timing_checkContext *context) = 0;

    virtual std::any visitThreshold_opt(VerilogParser::Threshold_optContext *context) = 0;

    virtual std::any visitNochange_timing_check(VerilogParser::Nochange_timing_checkContext *context) = 0;

    virtual std::any visitChecktime_condition(VerilogParser::Checktime_conditionContext *context) = 0;

    virtual std::any visitControlled_reference_event(VerilogParser::Controlled_reference_eventContext *context) = 0;

    virtual std::any visitData_event(VerilogParser::Data_eventContext *context) = 0;

    virtual std::any visitDelayed_data(VerilogParser::Delayed_dataContext *context) = 0;

    virtual std::any visitDelayed_reference(VerilogParser::Delayed_referenceContext *context) = 0;

    virtual std::any visitEnd_edge_offset(VerilogParser::End_edge_offsetContext *context) = 0;

    virtual std::any visitEvent_based_flag(VerilogParser::Event_based_flagContext *context) = 0;

    virtual std::any visitNotifier(VerilogParser::NotifierContext *context) = 0;

    virtual std::any visitReference_event(VerilogParser::Reference_eventContext *context) = 0;

    virtual std::any visitRemain_active_flag(VerilogParser::Remain_active_flagContext *context) = 0;

    virtual std::any visitStamptime_condition(VerilogParser::Stamptime_conditionContext *context) = 0;

    virtual std::any visitStart_edge_offset(VerilogParser::Start_edge_offsetContext *context) = 0;

    virtual std::any visitThreshold(VerilogParser::ThresholdContext *context) = 0;

    virtual std::any visitTiming_check_limit(VerilogParser::Timing_check_limitContext *context) = 0;

    virtual std::any visitTiming_check_event(VerilogParser::Timing_check_eventContext *context) = 0;

    virtual std::any visitControlled_timing_check_event(VerilogParser::Controlled_timing_check_eventContext *context) = 0;

    virtual std::any visitTiming_check_event_control(VerilogParser::Timing_check_event_controlContext *context) = 0;

    virtual std::any visitSpecify_terminal_descriptor(VerilogParser::Specify_terminal_descriptorContext *context) = 0;

    virtual std::any visitEdge_control_specifier(VerilogParser::Edge_control_specifierContext *context) = 0;

    virtual std::any visitEdge_descriptor(VerilogParser::Edge_descriptorContext *context) = 0;

    virtual std::any visitTiming_check_condition(VerilogParser::Timing_check_conditionContext *context) = 0;

    virtual std::any visitScalar_timing_check_condition(VerilogParser::Scalar_timing_check_conditionContext *context) = 0;

    virtual std::any visitScalar_constant(VerilogParser::Scalar_constantContext *context) = 0;

    virtual std::any visitConcatenation(VerilogParser::ConcatenationContext *context) = 0;

    virtual std::any visitConstant_concatenation(VerilogParser::Constant_concatenationContext *context) = 0;

    virtual std::any visitConstant_multiple_concatenation(VerilogParser::Constant_multiple_concatenationContext *context) = 0;

    virtual std::any visitModule_path_concatenation(VerilogParser::Module_path_concatenationContext *context) = 0;

    virtual std::any visitModule_path_multiple_concatenation(VerilogParser::Module_path_multiple_concatenationContext *context) = 0;

    virtual std::any visitMultiple_concatenation(VerilogParser::Multiple_concatenationContext *context) = 0;

    virtual std::any visitConstant_function_call(VerilogParser::Constant_function_callContext *context) = 0;

    virtual std::any visitConstant_system_function_call(VerilogParser::Constant_system_function_callContext *context) = 0;

    virtual std::any visitFunction_call(VerilogParser::Function_callContext *context) = 0;

    virtual std::any visitSystem_function_call(VerilogParser::System_function_callContext *context) = 0;

    virtual std::any visitSys_func_call_port_list(VerilogParser::Sys_func_call_port_listContext *context) = 0;

    virtual std::any visitBase_expression(VerilogParser::Base_expressionContext *context) = 0;

    virtual std::any visitConstant_base_expression(VerilogParser::Constant_base_expressionContext *context) = 0;

    virtual std::any visitConstant_expression(VerilogParser::Constant_expressionContext *context) = 0;

    virtual std::any visitConstant_mintypmax_expression(VerilogParser::Constant_mintypmax_expressionContext *context) = 0;

    virtual std::any visitConstant_range_expression(VerilogParser::Constant_range_expressionContext *context) = 0;

    virtual std::any visitDimension_constant_expression(VerilogParser::Dimension_constant_expressionContext *context) = 0;

    virtual std::any visitExpression(VerilogParser::ExpressionContext *context) = 0;

    virtual std::any visitLsb_constant_expression(VerilogParser::Lsb_constant_expressionContext *context) = 0;

    virtual std::any visitMintypmax_expression(VerilogParser::Mintypmax_expressionContext *context) = 0;

    virtual std::any visitModule_path_expression(VerilogParser::Module_path_expressionContext *context) = 0;

    virtual std::any visitModule_path_mintypmax_expression(VerilogParser::Module_path_mintypmax_expressionContext *context) = 0;

    virtual std::any visitMsb_constant_expression(VerilogParser::Msb_constant_expressionContext *context) = 0;

    virtual std::any visitRange_expression(VerilogParser::Range_expressionContext *context) = 0;

    virtual std::any visitWidth_constant_expression(VerilogParser::Width_constant_expressionContext *context) = 0;

    virtual std::any visitConstant_primary(VerilogParser::Constant_primaryContext *context) = 0;

    virtual std::any visitModule_path_primary(VerilogParser::Module_path_primaryContext *context) = 0;

    virtual std::any visitPrimary(VerilogParser::PrimaryContext *context) = 0;

    virtual std::any visitSelect_(VerilogParser::Select_Context *context) = 0;

    virtual std::any visitBit_select(VerilogParser::Bit_selectContext *context) = 0;

    virtual std::any visitNet_lvalue(VerilogParser::Net_lvalueContext *context) = 0;

    virtual std::any visitConst_select(VerilogParser::Const_selectContext *context) = 0;

    virtual std::any visitConst_bit_select(VerilogParser::Const_bit_selectContext *context) = 0;

    virtual std::any visitVariable_lvalue(VerilogParser::Variable_lvalueContext *context) = 0;

    virtual std::any visitUnary_operator(VerilogParser::Unary_operatorContext *context) = 0;

    virtual std::any visitUnary_module_path_operator(VerilogParser::Unary_module_path_operatorContext *context) = 0;

    virtual std::any visitNumber(VerilogParser::NumberContext *context) = 0;

    virtual std::any visitReal_number(VerilogParser::Real_numberContext *context) = 0;

    virtual std::any visitDecimal_number(VerilogParser::Decimal_numberContext *context) = 0;

    virtual std::any visitBinary_number(VerilogParser::Binary_numberContext *context) = 0;

    virtual std::any visitOctal_number(VerilogParser::Octal_numberContext *context) = 0;

    virtual std::any visitHex_number(VerilogParser::Hex_numberContext *context) = 0;

    virtual std::any visitSize(VerilogParser::SizeContext *context) = 0;

    virtual std::any visitFixed_point_number(VerilogParser::Fixed_point_numberContext *context) = 0;

    virtual std::any visitExponential_number(VerilogParser::Exponential_numberContext *context) = 0;

    virtual std::any visitUnsigned_number(VerilogParser::Unsigned_numberContext *context) = 0;

    virtual std::any visitDecimal_value(VerilogParser::Decimal_valueContext *context) = 0;

    virtual std::any visitBinary_value(VerilogParser::Binary_valueContext *context) = 0;

    virtual std::any visitOctal_value(VerilogParser::Octal_valueContext *context) = 0;

    virtual std::any visitHex_value(VerilogParser::Hex_valueContext *context) = 0;

    virtual std::any visitDecimal_base(VerilogParser::Decimal_baseContext *context) = 0;

    virtual std::any visitBinary_base(VerilogParser::Binary_baseContext *context) = 0;

    virtual std::any visitOctal_base(VerilogParser::Octal_baseContext *context) = 0;

    virtual std::any visitHex_base(VerilogParser::Hex_baseContext *context) = 0;

    virtual std::any visitString_(VerilogParser::String_Context *context) = 0;

    virtual std::any visitAttribute_instance(VerilogParser::Attribute_instanceContext *context) = 0;

    virtual std::any visitAttr_spec(VerilogParser::Attr_specContext *context) = 0;

    virtual std::any visitAttr_name(VerilogParser::Attr_nameContext *context) = 0;

    virtual std::any visitBlock_identifier(VerilogParser::Block_identifierContext *context) = 0;

    virtual std::any visitCell_identifier(VerilogParser::Cell_identifierContext *context) = 0;

    virtual std::any visitConfig_identifier(VerilogParser::Config_identifierContext *context) = 0;

    virtual std::any visitEscaped_identifier(VerilogParser::Escaped_identifierContext *context) = 0;

    virtual std::any visitEvent_identifier(VerilogParser::Event_identifierContext *context) = 0;

    virtual std::any visitFunction_identifier(VerilogParser::Function_identifierContext *context) = 0;

    virtual std::any visitGate_instance_identifier(VerilogParser::Gate_instance_identifierContext *context) = 0;

    virtual std::any visitGenerate_block_identifier(VerilogParser::Generate_block_identifierContext *context) = 0;

    virtual std::any visitGenvar_identifier(VerilogParser::Genvar_identifierContext *context) = 0;

    virtual std::any visitHierarchical_identifier(VerilogParser::Hierarchical_identifierContext *context) = 0;

    virtual std::any visitHier_ref(VerilogParser::Hier_refContext *context) = 0;

    virtual std::any visitIdentifier(VerilogParser::IdentifierContext *context) = 0;

    virtual std::any visitInput_port_identifier(VerilogParser::Input_port_identifierContext *context) = 0;

    virtual std::any visitInstance_identifier(VerilogParser::Instance_identifierContext *context) = 0;

    virtual std::any visitLibrary_identifier(VerilogParser::Library_identifierContext *context) = 0;

    virtual std::any visitModule_identifier(VerilogParser::Module_identifierContext *context) = 0;

    virtual std::any visitModule_instance_identifier(VerilogParser::Module_instance_identifierContext *context) = 0;

    virtual std::any visitNet_identifier(VerilogParser::Net_identifierContext *context) = 0;

    virtual std::any visitOutput_port_identifier(VerilogParser::Output_port_identifierContext *context) = 0;

    virtual std::any visitParameter_identifier(VerilogParser::Parameter_identifierContext *context) = 0;

    virtual std::any visitPort_identifier(VerilogParser::Port_identifierContext *context) = 0;

    virtual std::any visitReal_identifier(VerilogParser::Real_identifierContext *context) = 0;

    virtual std::any visitSimple_identifier(VerilogParser::Simple_identifierContext *context) = 0;

    virtual std::any visitSpecparam_identifier(VerilogParser::Specparam_identifierContext *context) = 0;

    virtual std::any visitSystem_function_identifier(VerilogParser::System_function_identifierContext *context) = 0;

    virtual std::any visitSystem_task_identifier(VerilogParser::System_task_identifierContext *context) = 0;

    virtual std::any visitTask_identifier(VerilogParser::Task_identifierContext *context) = 0;

    virtual std::any visitTerminal_identifier(VerilogParser::Terminal_identifierContext *context) = 0;

    virtual std::any visitTopmodule_identifier(VerilogParser::Topmodule_identifierContext *context) = 0;

    virtual std::any visitUdp_identifier(VerilogParser::Udp_identifierContext *context) = 0;

    virtual std::any visitUdp_instance_identifier(VerilogParser::Udp_instance_identifierContext *context) = 0;

    virtual std::any visitVariable_identifier(VerilogParser::Variable_identifierContext *context) = 0;


};

