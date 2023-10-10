int pinnumber=13; 

#include <Servo.h>

Servo myServo; 

void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN,OUTPUT);
  myServo.attach(11);
  myServo.write(90);
}

void blinkOnce(int time){
  digitalWrite(LED_BUILTIN, HIGH);
  myServo.write(140);
  delay(time);
  digitalWrite(LED_BUILTIN, LOW);
  myServo.write(60);
  delay(time);
}

void BlinkSOS() {
  blinkOnce(1000);
  blinkOnce(1000);
  blinkOnce(1000);
  blinkOnce(900);
  blinkOnce(900);
  blinkOnce(900);
  blinkOnce(1000);
  blinkOnce(1000);
  blinkOnce(1000);
}
void loop(){
  BlinkSOS();
}