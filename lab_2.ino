void setup() {
  // put your setup code here, to run once:
  // declare inouts and outputs
  pinMode(13, OUTPUT);// declares pin 13 as outout pin 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
