// setup は最初に一回だけ実行される
void setup() {
  // シリアル通信の準備
  Serial.begin(9600); // bps: 9600
}

// loop は高速で繰り返し実行され続ける
void loop() {
  // 処理を一定時間止める
  delay(1000); // 1000ms = 1s

  // シリアルモニターに文字を出力
  Serial.println("Hello World");
}

