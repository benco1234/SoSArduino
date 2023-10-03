int pinnumber=13; 

void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN,OUTPUT);
}

void blinkOnce(int time){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(time);
  digitalWrite(LED_BUILTIN, LOW);
  delay(time);
}

void loop() {
  blinkOnce(1000);
}