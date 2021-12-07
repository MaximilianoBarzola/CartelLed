#include <Arduino.h>

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  digitalWrite(1, 1);
  delay(1000);
  digitalWrite(1, 0);
}