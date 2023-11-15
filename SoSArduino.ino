#include <Servo.h>

Servo myServo; 

Servo leftLeg;
Servo leftFoot;
Servo rightLeg;
Servo rightFoot;
int llCenter = 90;
int lfCenter = 90;
int rlCenter = 90;
int rfCenter = 90;
 // the setup function runs once when you press reset or power the board
void setup() {
leftLeg.attach(3,1000,2000);
leftFoot.attach(5,1000,2000);
rightLeg.attach(2,1000,2000);
rightFoot.attach(4,1000,2000);

rightFoot.write(rfCenter);
leftLeg.write(llCenter);
leftFoot.write(lfCenter);
rightLeg.write(rlCenter);

 //initialize digital pin LED_BUILTIN as an output
pinMode(LED_BUILTIN, OUTPUT);
myServo.attach(11,1000,2000);
myServo.write(90);
}
void takeStep(){
  leftLeg.write(llCenter);
  leftFoot.write(lfCenter);
  rightLeg.write(rlCenter);
  rightFoot.write(rfCenter);

}

void loop(){
  takeStep();
}