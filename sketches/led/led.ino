/****

回路:
D12 --- R220 --- LED(+) --- LED(-) --- GND

  D12  = DIGITALピン12番
  R220 = 抵抗220Ω

****/

// 定数を定義
const int LED_PIN = 12; // 使用するピン = 12番

// setup は最初に一回だけ実行される
void setup() {
  // LEDを準備
  pinMode(LED_PIN, OUTPUT);

  // シリアル通信を準備
  Serial.begin(9600); // bps: 9600
}

// loop は高速で繰り返し実行され続ける
void loop() {
  // LEDの電圧をHIGHにする = 点灯
  digitalWrite(LED_PIN, HIGH);
  delay(50); // 一瞬待つ
  
  // LEDの電圧をLOWにする = 消灯
  digitalWrite(LED_PIN, LOW); 
  delay(1000); // 1s待つ

  // シリアルモニターに文字を出力
  Serial.println("Loop");
}

