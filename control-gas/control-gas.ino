void setup() {
  // put your setup code here, to run once:
  // pinMode(8, OUTPUT); // servo
  pinMode(4, OUTPUT); // backwards
  pinMode(5, OUTPUT); // forwards
}

void loop() {
  // put your main code here, to run repeatedly:
  // forwards:
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  delay(2500);
  // pause:
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  delay(250);
  // backwards:
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  delay(2500);
  // pause:
  digitalWrite(5, LOW);
  digitalWrite(4, LOW); 
  delay(250);
}
