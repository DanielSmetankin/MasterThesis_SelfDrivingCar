//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: RL_AGENT_SAFE_POLICY_types.h
//
// Code generated for Simulink model 'RL_AGENT_SAFE_POLICY'.
//
// Model version                  : 1.1
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Wed May 24 17:47:57 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_RL_AGENT_SAFE_POLICY_types_h_
#define RTW_HEADER_RL_AGENT_SAFE_POLICY_types_h_
#include "rtwtypes.h"

// Custom Type definition for MATLAB Function: '<S1>/PolicyWrapper'
#ifndef struct_cell_wrap_22_RL_AGENT_SAFE_PO_T
#define struct_cell_wrap_22_RL_AGENT_SAFE_PO_T

struct cell_wrap_22_RL_AGENT_SAFE_PO_T
{
  real32_T f1[48];
};

#endif                                // struct_cell_wrap_22_RL_AGENT_SAFE_PO_T

#ifndef struct_dlarray_1_RL_AGENT_SAFE_POLIC_T
#define struct_dlarray_1_RL_AGENT_SAFE_POLIC_T

struct dlarray_1_RL_AGENT_SAFE_POLIC_T
{
  real32_T Data;
};

#endif                                // struct_dlarray_1_RL_AGENT_SAFE_POLIC_T

#ifndef struct_c_coder_internal_ctarget_dlne_T
#define struct_c_coder_internal_ctarget_dlne_T

struct c_coder_internal_ctarget_dlne_T
{
  boolean_T matlabCodegenIsDeleted;
  boolean_T IsNetworkInitialized;
};

#endif                                // struct_c_coder_internal_ctarget_dlne_T

#ifndef struct_rl_codegen_model_DLNetworkMod_T
#define struct_rl_codegen_model_DLNetworkMod_T

struct rl_codegen_model_DLNetworkMod_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  c_coder_internal_ctarget_dlne_T *InternalNetwork_;
};

#endif                                // struct_rl_codegen_model_DLNetworkMod_T

#ifndef struct_c_rl_codegen_policy_internal__T
#define struct_c_rl_codegen_policy_internal__T

struct c_rl_codegen_policy_internal__T
{
  real_T UpperLimits_;
  real_T LowerLimits_;
};

#endif                                // struct_c_rl_codegen_policy_internal__T

#ifndef struct_c_rl_codegen_policy_rlDetermi_T
#define struct_c_rl_codegen_policy_rlDetermi_T

struct c_rl_codegen_policy_rlDetermi_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  rl_codegen_model_DLNetworkMod_T *Model_;
  c_rl_codegen_policy_internal__T ActionBounder_;
};

#endif                                // struct_c_rl_codegen_policy_rlDetermi_T
#endif                              // RTW_HEADER_RL_AGENT_SAFE_POLICY_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
