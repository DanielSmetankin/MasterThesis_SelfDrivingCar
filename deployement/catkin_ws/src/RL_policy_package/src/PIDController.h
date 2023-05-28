#ifndef PID_CONTROLLER_H
#define PID_CONTROLLER_H

class PIDController {
private:
    double Kp;  // Proportional gain
    double Ki;  // Integral gain
    double Kd;  // Derivative gain

    double setpoint;  // Desired setpoint

    double integralTerm;  // Integral term accumulation
    double previousError; // Previous error for derivative term

    double inputMin;  // Minimum input value
    double inputMax;  // Maximum input value

    double outputMin; // Minimum output value
    double outputMax; // Maximum output value

public:
    PIDController(double kp, double ki, double kd, double inMin, double inMax, double outMin, double outMax);

    void setSetpoint(double sp);

    double computeControlEffort(double inputValue);

private:
    double mapRange(double value, double inMin, double inMax, double outMin, double outMax);
};

#endif  // PID_CONTROLLER_H
