// setupは最初に一回だけ実行される
void setup() {
  // LEDを準備
  pinMode(LED_BUILTIN, OUTPUT);

  // シリアル通信を準備
  Serial.begin(9600); // bps: 9600
}

// loopは高速で繰り返し実行され続ける
void loop() {
  // LEDの電圧をHIGHにする = 点灯
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1); // 一瞬待つ
  
  // LEDの電圧をLOWにする = 消灯
  digitalWrite(LED_BUILTIN, LOW); 
  delay(1000); // 1s待つ     

  // シリアルモニターに文字を出力
  Serial.println("Loop");
}

