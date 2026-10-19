/***

回路:
   D9 --- R220 --- LED_R
  D10 --- R220 --- LED_G
  D11 --- R220 --- LED_B
  LEDカソード --- GND

***/

const int r_pin = 9;
const int g_pin = 10;
const int b_pin = 11;

void setup() {
	pinMode(r_pin, OUTPUT);
	pinMode(g_pin, OUTPUT);
	pinMode(b_pin, OUTPUT);
}

void loop() {
	analogWrite(r_pin, 255);
	analogWrite(g_pin, 127);
	analogWrite(b_pin, 0);
}
