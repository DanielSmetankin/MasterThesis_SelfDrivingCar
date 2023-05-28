//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: RL_Agent_Policy.h
//
// Code generated for Simulink model 'RL_Agent_Policy'.
//
// Model version                  : 1.4
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Wed May 24 17:37:37 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_RL_Agent_Policy_h_
#define RTW_HEADER_RL_Agent_Policy_h_
#include "rtwtypes.h"
#include "RL_Agent_Policy_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Class declaration for model RL_Agent_Policy
class RL_Agent_Policy final
{
  // public data and function members
 public:
  // Block signals (default storage)
  struct B_RL_Agent_Policy_T {
    cell_wrap_22_RL_Agent_Policy_T outT_f3;
    real32_T layerOutput[48];
    real32_T fv[4];
    dlarray_1_RL_Agent_Policy_T dlArrayOutputs_idx_0;
    dlarray_1_RL_Agent_Policy_T varargout;
    real32_T outT_f8;
    int32_T i;
    int32_T i_m;
    int32_T k;
    int32_T i0_ub;
    int32_T k0_ub;
    int32_T j1;
    int32_T N2;
    int32_T k0;
    int32_T K2;
    int32_T i0;
    int32_T i_c;
    int32_T i_k;
    int32_T j;
  };

  // Block states (default storage) for system '<Root>'
  struct DW_RL_Agent_Policy_T {
    c_rl_codegen_policy_rlDetermi_T policy;// '<S1>/PolicyWrapper'
    rl_codegen_model_DLNetworkMod_T gobj_2;// '<S1>/PolicyWrapper'
    c_coder_internal_ctarget_dlne_T gobj_1;// '<S1>/PolicyWrapper'
    boolean_T policy_not_empty;        // '<S1>/PolicyWrapper'
  };

  // External inputs (root inport signals with default storage)
  struct ExtU_RL_Agent_Policy_T {
    real_T relativevelocity;           // '<Root>/relative velocity'
    real_T relative_distance;          // '<Root>/relative_distance'
    real_T safe_distance;              // '<Root>/safe_distance'
    real_T rc_car_velocity;            // '<Root>/rc_car_velocity'
  };

  // External outputs (root outports fed by signals with default storage)
  struct ExtY_RL_Agent_Policy_T {
    real_T acceleration;               // '<Root>/acceleration'
  };

  // Real-time Model Data Structure
  struct RT_MODEL_RL_Agent_Policy_T {
    const char_T * volatile errorStatus;
  };

  // Copy Constructor
  RL_Agent_Policy(RL_Agent_Policy const&) = delete;

  // Assignment Operator
  RL_Agent_Policy& operator= (RL_Agent_Policy const&) & = delete;

  // Move Constructor
  RL_Agent_Policy(RL_Agent_Policy &&) = delete;

  // Move Assignment Operator
  RL_Agent_Policy& operator= (RL_Agent_Policy &&) = delete;

  // Real-Time Model get method
  RL_Agent_Policy::RT_MODEL_RL_Agent_Policy_T * getRTM();

  // Root inports set method
  void setExternalInputs(const ExtU_RL_Agent_Policy_T *pExtU_RL_Agent_Policy_T)
  {
    RL_Agent_Policy_U = *pExtU_RL_Agent_Policy_T;
  }

  // Root outports get method
  const ExtY_RL_Agent_Policy_T &getExternalOutputs() const
  {
    return RL_Agent_Policy_Y;
  }

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  RL_Agent_Policy();

  // Destructor
  ~RL_Agent_Policy();

  // private data and function members
 private:
  // External inputs
  ExtU_RL_Agent_Policy_T RL_Agent_Policy_U;

  // External outputs
  ExtY_RL_Agent_Policy_T RL_Agent_Policy_Y;

  // Block signals
  B_RL_Agent_Policy_T RL_Agent_Policy_B;

  // Block states
  DW_RL_Agent_Policy_T RL_Agent_Policy_DW;

  // private member function(s) for subsystem '<Root>'
  void RL_Agent_Policy_microKernel_mnd(int32_T K, const real32_T *A, int32_T LDA,
    const real32_T *B, real32_T *C);
  void RL_Agent_Policy_microKernel_mn(int32_T K, const real32_T *A, int32_T LDA,
    const real32_T *B, real32_T *C);
  void RL_Agent_Policy_microKernel_m(int32_T K, const real32_T *A, int32_T LDA,
    const real32_T *B, int32_T LDB, real32_T *C, int32_T LDC);
  void RL_Agent_Policy_microKernel(int32_T K, const real32_T *A, int32_T LDA,
    const real32_T *B, int32_T LDB, real32_T *C, int32_T LDC);
  void RL_Agent_Policy_macroKernel(int32_T M, int32_T K, int32_T N, const
    real32_T *A, int32_T LDA, const real32_T *B, int32_T LDB, real32_T *C,
    int32_T LDC);
  void RL_Agent_Policy_matrixMultiply(int32_T M, int32_T K, int32_T N, int32_T
    blockSizeM, int32_T blockSizeK, int32_T blockSizeN, const real32_T *A, const
    real32_T *B, real32_T *C);
  dlarray_1_RL_Agent_Policy_T RL_Agent_Poli_dlnetwork_predict
    (c_coder_internal_ctarget_dlne_T *obj, const real32_T varargin_1_Data[4]);

  // Real-Time Model
  RT_MODEL_RL_Agent_Policy_T RL_Agent_Policy_M;
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
//  '<Root>' : 'RL_Agent_Policy'
//  '<S1>'   : 'RL_Agent_Policy/policy'
//  '<S2>'   : 'RL_Agent_Policy/policy/PolicyWrapper'

#endif                                 // RTW_HEADER_RL_Agent_Policy_h_

//
// File trailer for generated code.
//
// [EOF]
//
