#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

// see https://github.com/wuxx/nanoESP32-C6
// datasheet https://github.com/wuxx/nanoESP32-C6/blob/master/hardware/nanoESP32C6.pdf

#define DATA_PIN 8
#define NUMPIXELS 1
#define BRIGHTNESS 255

Adafruit_NeoPixel pixels(NUMPIXELS, DATA_PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  Serial.begin(115200);
  while (!Serial)
    ;

  pixels.begin();
  pixels.show();
  pixels.setBrightness(BRIGHTNESS);
}

void loop()
{
  pixels.clear();

  // pixels.setPixelColor(0, pixels.Color(255, 0, 0));
  // pixels.show(); // Send the updated pixel colors to the hardware.
}