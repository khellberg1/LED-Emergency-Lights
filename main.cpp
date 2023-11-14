#include <Arduino.h>
#include <FastLED.h>

#define NUM_LEDS 30
#define LED_PIN 5
#define sw_pin 3
#define Brightness 50

CRGB leds[NUM_LEDS];
int pattern = 0;

void buttonPress() {
  pattern++;
  if (pattern >= 5)
  {
    pattern = 0;
  }
  
}

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  pinMode(sw_pin,INPUT_PULLUP);  
  attachInterrupt(digitalPinToInterrupt(sw_pin), buttonPress, FALLING);
  Serial.begin(9600);
     // limit my draw to 1A at 5v of power draw
  FastLED.setMaxPowerInVoltsAndMilliamps(5,1000);
    // Set Brightness
  FastLED.setBrightness(Brightness); 
  
  
  
  
}

void pattern0() {
  for (int i = 0; i < 2; i++)
  {
    Serial.println("Right");

    fill_solid(leds, 5, CRGB::Orange);
    fill_solid(leds+5,5, CRGB::White);
    fill_solid(leds+10,5, CRGB::White);
    fill_solid(leds+15,5, CRGB::White);
    fill_solid(leds+20,5, CRGB::White);
    fill_solid(leds+25,5, CRGB::White);

    FastLED.show(); 
    delay(100);

    fill_solid(leds, 5, CRGB::White);
    fill_solid(leds+5,5, CRGB::Orange);
    fill_solid(leds+10,5, CRGB::White);
    fill_solid(leds+15,5, CRGB::White);
    fill_solid(leds+20,5, CRGB::White);
    fill_solid(leds+25,5, CRGB::White);

    FastLED.show(); 
    delay(100);

    fill_solid(leds, 5, CRGB::White);
    fill_solid(leds+5,5, CRGB::White);
    fill_solid(leds+10,5, CRGB::Orange);
    fill_solid(leds+15,5, CRGB::White);
    fill_solid(leds+20,5, CRGB::White);
    fill_solid(leds+25,5, CRGB::White);

    FastLED.show();
    delay(100);

    fill_solid(leds, 5, CRGB::White);
    fill_solid(leds+5,5, CRGB::White);
    fill_solid(leds+10,5, CRGB::White);
    fill_solid(leds+15,5, CRGB::Orange);
    fill_solid(leds+20,5, CRGB::White);
    fill_solid(leds+25,5, CRGB::White);

    FastLED.show();
    delay(100);

    fill_solid(leds, 5, CRGB::White);
    fill_solid(leds+5,5, CRGB::White);
    fill_solid(leds+10,5, CRGB::White);
    fill_solid(leds+15,5, CRGB::White);
    fill_solid(leds+20,5, CRGB::Orange);
    fill_solid(leds+25,5, CRGB::White);

    FastLED.show();
    delay(100);

    fill_solid(leds, 5, CRGB::White);
    fill_solid(leds+5,5, CRGB::White);
    fill_solid(leds+10,5, CRGB::White);
    fill_solid(leds+15,5, CRGB::White);
    fill_solid(leds+20,5, CRGB::White);
    fill_solid(leds+25,5, CRGB::Orange);

    FastLED.show();
    delay(100);

  } 
}

void pattern1() {
  for (int i = 0; i < 2; i++)
  {
    
    Serial.println("left");
    fill_solid(leds, 5, CRGB::White);
    fill_solid(leds+5,5, CRGB::White);
    fill_solid(leds+10,5, CRGB::White);
    fill_solid(leds+15,5, CRGB::White);
    fill_solid(leds+20,5, CRGB::White);
    fill_solid(leds+25,5, CRGB::Orange);
    

    FastLED.show(); 
    delay(100);

    fill_solid(leds, 5, CRGB::White);
    fill_solid(leds+5,5, CRGB::White);
    fill_solid(leds+10,5, CRGB::White);
    fill_solid(leds+15,5, CRGB::White);
    fill_solid(leds+20,5, CRGB::Orange);
    fill_solid(leds+25,5, CRGB::White);

    FastLED.show(); 
    delay(100);

    fill_solid(leds, 5, CRGB::White);
    fill_solid(leds+5,5, CRGB::White);
    fill_solid(leds+10,5, CRGB::White);
    fill_solid(leds+15,5, CRGB::Orange);
    fill_solid(leds+20,5, CRGB::White);
    fill_solid(leds+25,5, CRGB::White);

    FastLED.show();
    delay(100);

    fill_solid(leds, 5, CRGB::White);
    fill_solid(leds+5,5, CRGB::White);
    fill_solid(leds+10,5, CRGB::Orange);
    fill_solid(leds+15,5, CRGB::White);
    fill_solid(leds+20,5, CRGB::White);
    fill_solid(leds+25,5, CRGB::White);

    FastLED.show();
    delay(100);

    fill_solid(leds, 5, CRGB::White);
    fill_solid(leds+5,5, CRGB::Orange);
    fill_solid(leds+10,5, CRGB::White);
    fill_solid(leds+15,5, CRGB::White);
    fill_solid(leds+20,5, CRGB::White);
    fill_solid(leds+25,5, CRGB::White);

    FastLED.show();
    delay(100);

    fill_solid(leds, 5, CRGB::Orange);
    fill_solid(leds+5,5, CRGB::White);
    fill_solid(leds+10,5, CRGB::White);
    fill_solid(leds+15,5, CRGB::White);
    fill_solid(leds+20,5, CRGB::White);
    fill_solid(leds+25,5, CRGB::White);

    FastLED.show();
    delay(100);

  }
}
void pattern2() {
  for (int i = 0; i < 2; i++)
  {

    Serial.println("Pattern 3");

    fill_solid(leds, 10, CRGB::Orange);
    fill_solid(leds+10,10, CRGB::White);
    fill_solid(leds+20,10, CRGB::Orange);

    FastLED.show(); 
    delay(75);

    fill_solid(leds, 10, CRGB::White);
    fill_solid(leds+10,10, CRGB::Orange);
    fill_solid(leds+20,10, CRGB::White);

    FastLED.show(); 
    delay(75);
  }
  
  for (int i = 0; i < 2; i++)
  {
    fill_solid(leds, 10, CRGB::Orange);
    fill_solid(leds+10,10, CRGB::Orange);
    fill_solid(leds+20,10, CRGB::Orange);

    FastLED.show(); 
    delay(75);

    fill_solid(leds, 10, CRGB::White);
    fill_solid(leds+10,10, CRGB::White);
    fill_solid(leds+20,10, CRGB::White);

    FastLED.show(); 
    delay(75);
  }
}
void pattern3() {
  for (int i = 0; i < 15; i++)
  {

    Serial.println("Wig Wag");

    fill_solid(leds,15, CRGB::Red);
    fill_solid(leds+15,15, CRGB::Black);

    FastLED.show(); 
    delay(100);

    fill_solid(leds,30, CRGB::Black);

    FastLED.show();
    delay(100);

    fill_solid(leds,15, CRGB::Red);

    FastLED.show();
    delay(100);

    fill_solid(leds,30, CRGB::Black);
    FastLED.show();
    delay(100);

    fill_solid(leds+15,15, CRGB::Red);

    FastLED.show();
    delay(100);

    fill_solid(leds,30, CRGB::Black);

    FastLED.show();
    delay(100);

    fill_solid(leds+15,15, CRGB::Red);

    FastLED.show();
    delay(100);

    fill_solid(leds,30, CRGB::Black);

    FastLED.show();
    delay(100);


   
  }
  
  for (int i = 0; i < 4; i++)
  {
    fill_solid(leds, 10, CRGB::White);
    fill_solid(leds+10,10, CRGB::White);
    fill_solid(leds+20,10, CRGB::White);

    FastLED.show(); 
    delay(200);

    fill_solid(leds, 10, CRGB::Purple);
    fill_solid(leds+10,10, CRGB::Purple);
    fill_solid(leds+20,10, CRGB::Purple);

    FastLED.show(); 
    delay(200);
  }
}

void pattern4() {
  for (int i = 0; i < 2; i++)
  {

    Serial.println("Pattern 4");

    fill_solid(leds, 10, CRGB::Orange);
    fill_solid(leds+10,10, CRGB::White);
    fill_solid(leds+20,10, CRGB::Orange);

    FastLED.show(); 
    delay(75);

    fill_solid(leds,30, CRGB::Black);

    FastLED.show();
    delay(100);

    fill_solid(leds,10, CRGB::Orange);
    fill_solid(leds+10,10, CRGB::White);
    fill_solid(leds+20,10, CRGB::Orange);

    FastLED.show();
    delay(100);
    
    fill_solid(leds,30, CRGB::Black);

    FastLED.show();
    delay(100);

    fill_solid(leds,10, CRGB::White);
    fill_solid(leds+10,10, CRGB::Orange);
    fill_solid(leds+20,20, CRGB::White);

    FastLED.show();
    delay(100);

    fill_solid(leds,30, CRGB::Black);

    FastLED.show();
    delay(100);

    fill_solid(leds, 10, CRGB::White);
    fill_solid(leds+10,10, CRGB::Orange);
    fill_solid(leds+20,10, CRGB::White);

    FastLED.show(); 
    delay(100);

    fill_solid(leds,30, CRGB::Black);

    FastLED.show();
    delay(100);
  }
}

void loop () {
 switch (pattern)
 {
 case 0:
  pattern0();
  break;

case 1:
  pattern1();
  break;

case 2:
  pattern2();
  break;

case 3:
  pattern3();
  break;

case 4:
  pattern4();
  break;

 default:
  break;
 

 }

  
}
