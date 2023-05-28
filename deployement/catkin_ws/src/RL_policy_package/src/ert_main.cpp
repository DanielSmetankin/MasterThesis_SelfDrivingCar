//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ert_main.cpp
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
#include <stdio.h>              // This exameazeple main program uses printf/fflush
#include "Policy_DDPG_Improved_2.h"    // Model header file
#include <ros/ros.h>
#include <std_msgs/String.h>
#include <sensor_msgs/LaserScan.h>
#include <signal.h>
#include "std_msgs/Float64.h"
#include <vesc_msgs/VescStateStamped.h>
static Policy_DDPG_Improved_2 Policy_DDPG_Improved_2_Obj;// Instance of model class 
static volatile bool g_shutdown = false;  // Flag to indicate if Ctrl+C was pressed
static float g_relativeDistance;
static float velocity;
//
// Associating rt_OneStep with a real-time clock or interrupt service routine
// is what makes the generated code "real-time".  The function rt_OneStep is
// always associated with the base rate of the model.  Subrates are managed
// by the base rate from inside the generated code.  Enabling/disabling
// interrupts and floating point context switches are target specific.  This
// example code indicates where these should take place relative to executing
// the generated code step function.  Overrun behavior should be tailored to
// your application needs.  This example simply sets an error status in the
// real-time model and returns from rt_OneStep.
//
void chatterCallback(const sensor_msgs::LaserScan::ConstPtr& scan_msg)
{
  g_relativeDistance = scan_msg->ranges[0];
}
void chatterCallback2(const vesc_msgs::VescStateStamped::ConstPtr& state)
{
  float w_wheel = -(state->state.speed/(2*6.87));
  velocity = (w_wheel/60) *(0.066*3.14);
  
  
}
// Signal handler for Ctrl+C (SIGINT)
void sigintHandler(int signum)
{
  // Set the shutdown flag to break the while loop
  g_shutdown = true;
}
void rt_OneStep(void);
void rt_OneStep(void)
{
  static boolean_T OverrunFlag{ false };

  // Disable interrupts here

  // Check for overrun
  if (OverrunFlag) {
    rtmSetErrorStatus(Policy_DDPG_Improved_2_Obj.getRTM(), "Overrun");
    return;
  }

  OverrunFlag = true;

  // Save FPU context here (if necessary)
  // Re-enable timer or interrupt here
  // Set model inputs here


  // Get model outputs here
   

  // Indicate task complete
  OverrunFlag = false;

  // Disable interrupts here
  // Restore FPU context here (if necessary)
  // Enable interrupts here
}

//
// The example main function illustrates what is required by your
// application code to initialize, execute, and terminate the generated code.
// Attaching rt_OneStep to a real-time clock is target specific. This example
// illustrates how you do this relative to initializing the model.
//
int_T main(int_T argc,  char **argv)
{ 
  //Ros Subcriber Node to listen to RPLidar values to determine the relative distance
  ros::init(argc, argv, "listener");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("/scan", 1000, chatterCallback);  
  
  // Ross publisher node to publish acceleration signal to /motor/speed
  ros::init(argc, argv, "talker");
  ros::NodeHandle n2;
  ros::Publisher chatter_pub = n2.advertise<std_msgs::Float64>("/commands/motor/speed", 100);
  
  // Ros Subcriber Node to listen to RPM of Motor
  ros::init(argc, argv, "listener");
  ros::NodeHandle n3;
  ros::Subscriber sub3 = n3.subscribe("/sensors/core", 1000, chatterCallback2);

  // Unused arguments
  (void)(argc);
  (void)(argv);

  // Initialize model
  Policy_DDPG_Improved_2_Obj.initialize();

  // Attach rt_OneStep to a timer or interrupt service routine with
  //  period 0.1 seconds (base rate of the model) here.
  //  The call syntax for rt_OneStep is
  //
  //   rt_OneStep();

  // Set the signal handler for Ctrl+C
  signal(SIGINT, sigintHandler);
  printf("Warning: The simulation will run forever. "
         "Generated ERT main won't simulate model step behavior. "
         "To change this behavior select the 'MAT-file logging' option.\n");
  fflush((nullptr));
  ros::Time startTime = ros::Time::now();
  while (rtmGetErrorStatus(Policy_DDPG_Improved_2_Obj.getRTM()) == (nullptr)&& !g_shutdown ) {

    ros::spinOnce();
    // Call the step function of the model
    ros::Time currentTime = ros::Time::now();
    ros::Duration elapsedTime = currentTime- startTime;
    Policy_DDPG_Improved_2_Obj.step(g_relativeDistance,chatter_pub,velocity,elapsedTime);
  }

  // Terminate model
  Policy_DDPG_Improved_2_Obj.terminate();
  ros::shutdown();
  return 0;
}

//
// File trailer for generated code.
//
// [EOF]
//
