#include <Arduino.h>
#include <Stepper.h>

const int16_t stepsPerRevolution = 2038;
int16_t revolutions;

Stepper motor(stepsPerRevolution, 33, 25, 26, 27);


void setup() {
    motor.setSpeed(500);
}

void loop() {
    motor.step(stepsPerRevolution*revolutions)
}