//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Policy_DDPG_Improved_2.h
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
#ifndef RTW_HEADER_Policy_DDPG_Improved_2_h_
#define RTW_HEADER_Policy_DDPG_Improved_2_h_
#include "rtwtypes.h"
#include "Policy_DDPG_Improved_2_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Class declaration for model Policy_DDPG_Improved_2
class Policy_DDPG_Improved_2 final
{
  // public data and function members
 public:
  // Block states (default storage) for system '<Root>'
  struct DW_Policy_DDPG_Improved_2_T {
    c_rl_codegen_policy_rlDetermi_T policy;// '<S1>/PolicyWrapper'
    rl_codegen_model_DLNetworkMod_T gobj_2;// '<S1>/PolicyWrapper'
    c_coder_internal_ctarget_dlne_T gobj_1;// '<S1>/PolicyWrapper'
    boolean_T policy_not_empty;        // '<S1>/PolicyWrapper'
  };

  // External inputs (root inport signals with default storage)
  struct ExtU_Policy_DDPG_Improved_2_T {
    real_T relative_velocity;          // '<Root>/relative_velocity'
    real_T RelativeDistance;           // '<Root>/relative_distance'
    real_T SafeDistance;               // '<Root>/safe_distance'
    real_T RCcarVelocity;              // '<Root>/RC_car_velocity'
  };

  // External outputs (root outports fed by signals with default storage)
  struct ExtY_Policy_DDPG_Improved_2_T {
    real_T action;                     // '<Root>/action'
  };

  // Real-time Model Data Structure
  struct RT_MODEL_Policy_DDPG_Improved_T {
    const char_T * volatile errorStatus;
  };

  // Copy Constructor
  Policy_DDPG_Improved_2(Policy_DDPG_Improved_2 const&) = delete;

  // Assignment Operator
  Policy_DDPG_Improved_2& operator= (Policy_DDPG_Improved_2 const&) & = delete;

  // Move Constructor
  Policy_DDPG_Improved_2(Policy_DDPG_Improved_2 &&) = delete;

  // Move Assignment Operator
  Policy_DDPG_Improved_2& operator= (Policy_DDPG_Improved_2 &&) = delete;

  // Real-Time Model get method
  Policy_DDPG_Improved_2::RT_MODEL_Policy_DDPG_Improved_T * getRTM();

  // Root inports set method
  void setExternalInputs(const ExtU_Policy_DDPG_Improved_2_T
    *pExtU_Policy_DDPG_Improved_2_T)
  {
    Policy_DDPG_Improved_2_U = *pExtU_Policy_DDPG_Improved_2_T;
  }

  // Root outports get method
  const ExtY_Policy_DDPG_Improved_2_T &getExternalOutputs() const
  {
    return Policy_DDPG_Improved_2_Y;
  }

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  Policy_DDPG_Improved_2();

  // Destructor
  ~Policy_DDPG_Improved_2();

  // private data and function members
 private:
  // External inputs
  ExtU_Policy_DDPG_Improved_2_T Policy_DDPG_Improved_2_U;

  // External outputs
  ExtY_Policy_DDPG_Improved_2_T Policy_DDPG_Improved_2_Y;

  // Block states
  DW_Policy_DDPG_Improved_2_T Policy_DDPG_Improved_2_DW;

  // private member function(s) for subsystem '<Root>'
  void Policy_DDPG_Imp_microKernel_cjh(int32_T K, const real32_T *A, int32_T LDA,
    const real32_T *B, real32_T *C);
  void Policy_DDPG_Impr_microKernel_cj(int32_T K, const real32_T *A, int32_T LDA,
    const real32_T *B, real32_T *C);
  void Policy_DDPG_Impro_microKernel_c(int32_T K, const real32_T *A, int32_T LDA,
    const real32_T *B, int32_T LDB, real32_T *C, int32_T LDC);
  void Policy_DDPG_Improve_microKernel(int32_T K, const real32_T *A, int32_T LDA,
    const real32_T *B, int32_T LDB, real32_T *C, int32_T LDC);
  void Policy_DDPG_Improve_macroKernel(int32_T M, int32_T K, int32_T N, const
    real32_T *A, int32_T LDA, const real32_T *B, int32_T LDB, real32_T *C,
    int32_T LDC);
  void Policy_DDPG_Impr_matrixMultiply(int32_T M, int32_T K, int32_T N, int32_T
    blockSizeM, int32_T blockSizeK, int32_T blockSizeN, const real32_T *A, const
    real32_T *B, real32_T *C);
  dlarray_1_Policy_DDPG_Improve_T Policy_DDPG_I_dlnetwork_predict
    (c_coder_internal_ctarget_dlne_T *obj, const real32_T varargin_1_Data[4]);

  // Real-Time Model
  RT_MODEL_Policy_DDPG_Improved_T Policy_DDPG_Improved_2_M;
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
//  '<Root>' : 'Policy_DDPG_Improved_2'
//  '<S1>'   : 'Policy_DDPG_Improved_2/Policy'
//  '<S2>'   : 'Policy_DDPG_Improved_2/Policy/PolicyWrapper'

#endif                                 // RTW_HEADER_Policy_DDPG_Improved_2_h_

//
// File trailer for generated code.
//
// [EOF]
//
