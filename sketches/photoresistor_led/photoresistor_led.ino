/***

回路:
  5V --- 光センサー -+- R10k --- GND
                     +- A0

  D9 --- R220 --- LED --- GND

***/

const int sensor_pin = A0; // A0 ピンを光センサーとして使用
const int led_pin = 9; // LED ピン

void setup() {
	// LED ピンを出力モードに
	pinMode(led_pin, OUTPUT);

	// シリアル通信初期化
	Serial.begin(9600);
}

void loop() {
	// 光センサーの明るさ取得（0 から 1023）
	int light = analogRead(sensor_pin);

	// LED 点灯
	// 強度をセンサーの明るさに応じて変える
	analogWrite(led_pin, map(light, 0, 1023, 255, 0));

	// 明るさの数値をシリアルモニタに出力
	Serial.println(light);
	
	// 一瞬停止
	delay(50);

	// 次の loop へ...
}
