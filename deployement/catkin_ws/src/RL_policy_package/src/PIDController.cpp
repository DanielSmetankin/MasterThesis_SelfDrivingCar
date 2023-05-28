#include "PIDController.h"

PIDController::PIDController(double kp, double ki, double kd, double inMin, double inMax, double outMin, double outMax)
    : Kp(kp), Ki(ki), Kd(kd), integralTerm(0.0), previousError(0.0), inputMin(inMin), inputMax(inMax),
      outputMin(outMin), outputMax(outMax) {}

void PIDController::setSetpoint(double sp) {
    setpoint = mapRange(sp, inputMin, inputMax, 0.0, 1.0);
}

double PIDController::computeControlEffort(double inputValue) {
    double normalizedInput = mapRange(inputValue, inputMin, inputMax, 0.0, 1.0);

    double error = setpoint - normalizedInput;

    double proportionalTerm = Kp * error;

    integralTerm += Ki * error;

    double derivativeTerm = Kd * (error - previousError);
    previousError = error;

    double controlEffort = proportionalTerm + integralTerm + derivativeTerm;

    return mapRange(controlEffort, 0.0, 1.0, outputMin, outputMax);
}

double PIDController::mapRange(double value, double inMin, double inMax, double outMin, double outMax) {
    return (value - inMin) * (outMax - outMin) / (inMax - inMin) + outMin;
}
