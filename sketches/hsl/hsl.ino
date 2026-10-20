/***

回路:
   D9 --- R220 --- LED_R
  D10 --- R220 --- LED_G
  D11 --- R220 --- LED_B
  LEDカソード --- GND

   5V --- Pot_L 
   A0 --- Pot_M 
  GND --- Pot_R

***/

#include "RGB.hpp"

const int h_pin = A0;

const int r_pin = 9;
const int g_pin = 10;
const int b_pin = 11;

void setup() {
	pinMode(r_pin, OUTPUT);
	pinMode(g_pin, OUTPUT);
	pinMode(b_pin, OUTPUT);
}

void loop() {
	int value = analogRead(h_pin);
	int hue = map(value, 0, 1023, 0, 359);

	// 彩度100%、明度50%で色相だけを変える
	RGB color = hsl_to_rgb(hue, 100.0, 50.0);

	analogWrite(r_pin, color.r);
	analogWrite(g_pin, color.g);
	analogWrite(b_pin, color.b);
}
