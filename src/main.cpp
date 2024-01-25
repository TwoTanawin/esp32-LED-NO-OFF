#include <Arduino.h>
#include "SimpleLED.h"

// Define the pin where the LED is connected
const int ledPin = 13;

void setup() {
  // Initialize the LED
  initSimpleLED(ledPin);
}

void loop() {
  // Turn the LED on
  turnOn();
  delay(1000);  // Wait for 1 second

  // Turn the LED off
  turnOff();
  delay(1000);  // Wait for 1 second
}

