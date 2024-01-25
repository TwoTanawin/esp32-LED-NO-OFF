#include "SimpleLED.h"

int ledPin;

void initSimpleLED(int pin) {
  ledPin = pin;
  pinMode(ledPin, OUTPUT);
}

void turnOn() {
  digitalWrite(ledPin, HIGH);
}

void turnOff() {
  digitalWrite(ledPin, LOW);
}
