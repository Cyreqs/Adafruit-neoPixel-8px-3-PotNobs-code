#include <Adafruit_NeoPixel.h>
#define LEDPIN 6
#define NUMBER_PIEXELS 8
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMBER_PIEXELS, LEDPIN, NEO_GRB + NEO_KHZ800);

int rNob = A1;
int gNob = A2;
int bNob = A3;
int rVal2 = 0;
int gVal2 = 0;
int bVal2 = 0;

void setup() {
  pinMode(rNob, INPUT);
  pinMode(gNob, INPUT);
  pinMode(bNob, INPUT);
  strip.begin();
  strip.setBrightness(100);
  strip.show();
}

void loop() {
  int rVal = analogRead(rNob);
  int gVal = analogRead(gNob);
  int bVal = analogRead(bNob);
  int rVal2 = rVal / 4;
  int gVal2 = gVal / 4;
  int bVal2 = bVal / 4;
  
strip.setPixelColor(0, rVal2,gVal2,bVal2);
strip.setPixelColor(1, rVal2,gVal2,bVal2);
strip.setPixelColor(2, rVal2,gVal2,bVal2);
strip.setPixelColor(3, rVal2,gVal2,bVal2);
strip.setPixelColor(4, rVal2,gVal2,bVal2);
strip.setPixelColor(5, rVal2,gVal2,bVal2);
strip.setPixelColor(6, rVal2,gVal2,bVal2);
strip.setPixelColor(7, rVal2,gVal2,bVal2);

Serial.println(rVal2);
Serial.print(gVal2);
Serial.print(bVal2);
strip.show();
}
