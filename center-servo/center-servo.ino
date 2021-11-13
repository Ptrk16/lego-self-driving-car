#include <Servo.h> 

Servo myservo;

void setup() 
{ 
  myservo.attach(8);
  myservo.write(0);
  delay(1000);
  myservo.write(180);
  delay(1000);
  myservo.write(90);  // set servo to mid-point
} 

void loop() {
  
} 
