/***

回路:
  5V --- 光センサー -+- A0
                     +- R10k --- GND

光センサー（フォトレジスタ）の仕組み:
  明るさによって抵抗値が変化する。
  Arduino の Analog In に接続することで電圧の変化を検知する。

***/

const int sensor_pin = A0; // A0 ピンを光センサーとして使用
const int led_pin = 9;

void setup() {
	// シリアル通信初期化
	Serial.begin(9600);
	pinMode(led_pin, OUTPUT);
}

void loop() {
	// 光センサーの明るさ取得（0 から 1023）
	int light = analogRead(sensor_pin);

	// 明るさの数値をシリアルモニタに出力
	Serial.println(light);

	analogWrite(led_pin, map(light, , 1023, 255, 0));
	
	// 一瞬停止
	delay(100);

	// 次の loop へ...
}
