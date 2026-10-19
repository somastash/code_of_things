/***

回路:
  5V --- 光センサー -+- R10k --- GND
                     +- A0

光センサー（フォトレジスタ）の仕組み:
  明るさによって抵抗値が変化する。（明るいほど抵抗値が下がる）
  Arduino の Analog In に接続することで電圧の変化を検知する。

分圧回路:
  電源の電圧を複数の抵抗の比率に応じて分ける回路。
  フォトレジスタの抵抗（可変）と10kΩ 抵抗（固定）の比率によって
  A0 にかかる電圧が変化する。

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
