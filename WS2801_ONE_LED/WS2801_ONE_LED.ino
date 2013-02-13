#include <Adafruit_WS2801.h>
#include <Wire.h>
#include "SPI.h"

int dataPin  = 2;    // Yellow wire on Adafruit Pixels
int clockPin = 3;    // Green wire on Adafruit Pixels

Adafruit_WS2801 strip = Adafruit_WS2801(1, dataPin, clockPin);

void setup() {
  strip.begin();

  // Update LED contents, to start they are all 'off'
  strip.show();
}

void loop() {
  //Show Red
  strip.setPixelColor(0,Color(255,0,0));  
  strip.show();
  delay(1000);
  //Show Green
  strip.setPixelColor(0,Color(0,255,0));  
  strip.show();
  delay(1000);
  //Show Blue
  strip.setPixelColor(0,Color(0,0,255));  
  strip.show();
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
