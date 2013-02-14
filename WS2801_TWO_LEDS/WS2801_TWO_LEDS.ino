#include <Adafruit_WS2801.h>
#include <Wire.h>
#include "SPI.h"

int dataPin  = 2;    // Yellow wire on Adafruit Pixels
int clockPin = 3;    // Green wire on Adafruit Pixels

//Note the first parameter defines the number of LEDs that are connected in series
Adafruit_WS2801 strip = Adafruit_WS2801(2, dataPin, clockPin);

void setup() {
  strip.begin();

  // Update LED contents, to start they are all 'off'
  strip.show();
}

void loop() {
  
  strip.setPixelColor(0,Color(255,0,0)); //Set color for LED 1 to Red 
  strip.setPixelColor(1,Color(0,255,0)); //Set color for LED 2 to Green
  strip.show(); //Update LEDs to show the color
  delay(1000);
  
  strip.setPixelColor(0,Color(0,255,0)); //Set color for LED 1 to Green
  strip.setPixelColor(1,Color(0,0,255)); //Set color for LED 2 to Blue
  strip.show(); //Update LEDs to show the color
  delay(1000);

  strip.setPixelColor(0,Color(0,0,255)); //Set color for LED 1 to Blue
  strip.setPixelColor(1,Color(255,0,0)); //Set color for LED 2 to Red
  strip.show(); //Update LEDs to show the color
  delay(1000);
}

// Create a 24 bit color value from R,G,B
uint32_t Color(byte r, byte g, byte b)
{
  uint32_t c;
  c = r;
  c <<= 8;
  c |= g;
  c <<= 8;
  c |= b;
  return c;
}
