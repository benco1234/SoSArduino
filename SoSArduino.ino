int pinnumber=13; 

void setup() {
  // put your setup code here, to run once:
pinMode(pinnumber,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pinnumber, 1);
delay(500);
digitalWrite(pinnumber, 0);
delay(500);
}