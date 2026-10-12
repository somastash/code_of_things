/***

回路:
  5V --- 光センサー -+- A0
                     +- R10k --- GND

***/

const int sensor_pin = A0; // A0 ピンを光センサーとして使用

void setup() {
	// シリアル通信初期化
	Serial.begin(9600);
}

void loop() {
	// 光センサーから明るさ取得（0 から 1023）
	int light = analogRead(sensor_pin);

	// 明るさの数値をシリアルモニタに出力
	Serial.println(light);
	
	// 一瞬停止
	delay(200);

	// 次の loop へ...
}
