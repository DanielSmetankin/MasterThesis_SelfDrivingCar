//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: RL_AGENT_SAFE_POLICY.h
//
// Code generated for Simulink model 'RL_AGENT_SAFE_POLICY'.
//
// Model version                  : 1.1
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Sun May 28 19:37:10 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_RL_AGENT_SAFE_POLICY_h_
#define RTW_HEADER_RL_AGENT_SAFE_POLICY_h_
#include "rtwtypes.h"
#include "RL_AGENT_SAFE_POLICY_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Class declaration for model RL_AGENT_SAFE_POLICY
class RL_AGENT_SAFE_POLICY final
{
  // public data and function members
 public:
  // Block states (default storage) for system '<Root>'
  struct DW_RL_AGENT_SAFE_POLICY_T {
    c_rl_codegen_policy_rlDetermi_T policy;// '<S1>/PolicyWrapper'
    rl_codegen_model_DLNetworkMod_T gobj_2;// '<S1>/PolicyWrapper'
    c_coder_internal_ctarget_dlne_T gobj_1;// '<S1>/PolicyWrapper'
    boolean_T policy_not_empty;        // '<S1>/PolicyWrapper'
  };

  // External inputs (root inport signals with default storage)
  struct ExtU_RL_AGENT_SAFE_POLICY_T {
    real_T relativevelocity;           // '<Root>/relative velocity'
    real_T relative_distance;          // '<Root>/relative_distance'
    real_T safe_distance;              // '<Root>/safe_distance'
    real_T rc_car_velocity;            // '<Root>/rc_car_velocity'
  };

  // External outputs (root outports fed by signals with default storage)
  struct ExtY_RL_AGENT_SAFE_POLICY_T {
    real_T acceleration;               // '<Root>/acceleration'
  };

  // Real-time Model Data Structure
  struct RT_MODEL_RL_AGENT_SAFE_POLICY_T {
    const char_T * volatile errorStatus;
  };

  // Copy Constructor
  RL_AGENT_SAFE_POLICY(RL_AGENT_SAFE_POLICY const&) = delete;

  // Assignment Operator
  RL_AGENT_SAFE_POLICY& operator= (RL_AGENT_SAFE_POLICY const&) & = delete;

  // Move Constructor
  RL_AGENT_SAFE_POLICY(RL_AGENT_SAFE_POLICY &&) = delete;

  // Move Assignment Operator
  RL_AGENT_SAFE_POLICY& operator= (RL_AGENT_SAFE_POLICY &&) = delete;

  // Real-Time Model get method
  RL_AGENT_SAFE_POLICY::RT_MODEL_RL_AGENT_SAFE_POLICY_T * getRTM();

  // Root inports set method
  void setExternalInputs(const ExtU_RL_AGENT_SAFE_POLICY_T
    *pExtU_RL_AGENT_SAFE_POLICY_T)
  {
    RL_AGENT_SAFE_POLICY_U = *pExtU_RL_AGENT_SAFE_POLICY_T;
  }

  // Root outports get method
  const ExtY_RL_AGENT_SAFE_POLICY_T &getExternalOutputs() const
  {
    return RL_AGENT_SAFE_POLICY_Y;
  }

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  RL_AGENT_SAFE_POLICY();

  // Destructor
  ~RL_AGENT_SAFE_POLICY();

  // private data and function members
 private:
  // External inputs
  ExtU_RL_AGENT_SAFE_POLICY_T RL_AGENT_SAFE_POLICY_U;

  // External outputs
  ExtY_RL_AGENT_SAFE_POLICY_T RL_AGENT_SAFE_POLICY_Y;

  // Block states
  DW_RL_AGENT_SAFE_POLICY_T RL_AGENT_SAFE_POLICY_DW;

  // private member function(s) for subsystem '<Root>'
  void RL_AGENT_SAFE_P_microKernel_npj(int32_T K, const real32_T *A, int32_T LDA,
    const real32_T *B, real32_T *C);
  void RL_AGENT_SAFE_PO_microKernel_np(int32_T K, const real32_T *A, int32_T LDA,
    const real32_T *B, real32_T *C);
  void RL_AGENT_SAFE_POL_microKernel_n(int32_T K, const real32_T *A, int32_T LDA,
    const real32_T *B, int32_T LDB, real32_T *C, int32_T LDC);
  void RL_AGENT_SAFE_POLIC_microKernel(int32_T K, const real32_T *A, int32_T LDA,
    const real32_T *B, int32_T LDB, real32_T *C, int32_T LDC);
  void RL_AGENT_SAFE_POLIC_macroKernel(int32_T M, int32_T K, int32_T N, const
    real32_T *A, int32_T LDA, const real32_T *B, int32_T LDB, real32_T *C,
    int32_T LDC);
  void RL_AGENT_SAFE_PO_matrixMultiply(int32_T M, int32_T K, int32_T N, int32_T
    blockSizeM, int32_T blockSizeK, int32_T blockSizeN, const real32_T *A, const
    real32_T *B, real32_T *C);
  dlarray_1_RL_AGENT_SAFE_POLIC_T RL_AGENT_SAFE_dlnetwork_predict
    (c_coder_internal_ctarget_dlne_T *obj, const real32_T varargin_1_Data[4]);

  // Real-Time Model
  RT_MODEL_RL_AGENT_SAFE_POLICY_T RL_AGENT_SAFE_POLICY_M;
};

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'RL_AGENT_SAFE_POLICY'
//  '<S1>'   : 'RL_AGENT_SAFE_POLICY/Policy'
//  '<S2>'   : 'RL_AGENT_SAFE_POLICY/Policy/PolicyWrapper'

#endif                                 // RTW_HEADER_RL_AGENT_SAFE_POLICY_h_

//
// File trailer for generated code.
//
// [EOF]
//
