/*
  SerialTest by Everything2067.
  A demo which counts a number through Serial.
  You can set the baud rate as you want, or use the default baud rate.
*/

// Uncomment this if you want to set your own baud rate.
// #define BAUD_RATE

#ifndef BAUD_RATE
  #ifdef ARDUINO
    #define BAUD_RATE 9600
  #endif

  #ifdef ESP_BOARD
    #define BAUD_RATE 115200
  #endif
#endif

// Defining the delay. You can set this as you want.
#define DELAY 1000

// Including the required library.
#include <Arduino.h>

// Variable for counting.
int count;

void setup() {
  Serial.begin(BAUD_RATE);
}

void loop() {
  Serial.print("Hello! ");
  Serial.print("Count: ");
  Serial.println(word(count));
  count++;
  delay(DELAY);
}