#include <FastLED.h>
#define LED_PIN 2
#define NUM_LEDS 12
CRGB leds[NUM_LEDS];
void setup() {
FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
FastLED.setMaxPowerInVoltsAndMilliamps(5, 500);
FastLED.clear();
FastLED.show();

}

void loop() {
  // RED Green Blue
for (int i=0; i<NUM_LEDS; i++ )
leds[i] = CRGB(255, 0, 0 );
FastLED.show();
  }