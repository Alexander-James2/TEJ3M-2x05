// Created by: Alexander James
// Created on: Oct 2023
// Rotates a small servo motor 

#include <Servo.h>

Servo servoNumber1;

void setup() {
  servoNumber1.attach(4);
  servoNumber1.write(0);
  delay(2000);
  
}

void loop() {
  servoNumber1.write(90);
  delay(1000);
  servoNumber1.write(0);
  delay(1000);
}