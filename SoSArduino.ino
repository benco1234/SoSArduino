#include <Servo.h>

Servo myServo; 

Servo leftLeg;
Servo leftFoot;
Servo rightLeg;
Servo rightFoot;
int llCenter = 90+9;
int lfCenter = 90+9;
int rlCenter = 90+2;
int rfCenter = 90+2;
 // the setup function runs once when you press reset or power the board
void setup() {
leftLeg.attach(3,1000,2000);
leftFoot.attach(5,1000,2000);
rightLeg.attach(2,1000,2000);
rightFoot.attach(4,1000,2000);

rightFoot.write(rfCenter+2);
leftLeg.write(llCenter+9);
leftFoot.write(lfCenter+9);
rightLeg.write(rlCenter+2);

 //initialize digital pin LED_BUILTIN as an output
pinMode(LED_BUILTIN, OUTPUT);
myServo.attach(11,1000,2000);
myServo.write(90);
}
void takeStep(){
  leftLeg.write(llCenter+9);
  leftFoot.write(lfCenter+9);
  rightLeg.write(rlCenter+2);
  rightFoot.write(rfCenter+2);
}

void loop(){
  takeStep();
}