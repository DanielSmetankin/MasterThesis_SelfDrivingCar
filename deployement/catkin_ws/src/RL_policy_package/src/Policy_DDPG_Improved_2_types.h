//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Policy_DDPG_Improved_2_types.h
//
// Code generated for Simulink model 'Policy_DDPG_Improved_2'.
//
// Model version                  : 1.5
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Fri May 12 15:08:13 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_Policy_DDPG_Improved_2_types_h_
#define RTW_HEADER_Policy_DDPG_Improved_2_types_h_
#include "rtwtypes.h"

// Custom Type definition for MATLAB Function: '<S1>/PolicyWrapper'
#ifndef struct_cell_wrap_22_Policy_DDPG_Impr_T
#define struct_cell_wrap_22_Policy_DDPG_Impr_T

struct cell_wrap_22_Policy_DDPG_Impr_T
{
  real32_T f1[48];
};

#endif                                // struct_cell_wrap_22_Policy_DDPG_Impr_T

#ifndef struct_dlarray_1_Policy_DDPG_Improve_T
#define struct_dlarray_1_Policy_DDPG_Improve_T

struct dlarray_1_Policy_DDPG_Improve_T
{
  real32_T Data;
};

#endif                                // struct_dlarray_1_Policy_DDPG_Improve_T

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
#endif                            // RTW_HEADER_Policy_DDPG_Improved_2_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
