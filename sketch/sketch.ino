// drawings = 60*fps/rpm
// e.g. 10 drawings on disc require 180rpm when shooting video at 30fps

#include <Stepper.h>
int rpm; // rpm
const int stepsPerRevolution = 200;  
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
void setup() {
  rpm = 180; // higher rpm requires 12V DC
  myStepper.setSpeed(rpm);
}

void loop() {
  myStepper.step(-1); // +: CW, =:CCW
}


