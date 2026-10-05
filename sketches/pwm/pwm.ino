/****

Arduino リファレンス:
https://www.musashinodenpa.com/arduino/ref/

回路:
D9 --- R220 --- LED(+) --- LED(-) --- GND

****/

// 定数を定義
const int LED_PIN = 9; // 使用するピン = 9番

// setup は最初に一回だけ実行される
void setup() {
  // 9番ピンを出力モードに
  pinMode(LED_PIN, OUTPUT);
}

// loop は高速で繰り返し実行され続ける
void loop() {
  analogWrite(LED_PIN, 0); // 明るさ = 0
  delay(1000); // 1s 待つ

  analogWrite(LED_PIN, 64); // 明るさ = 64
  delay(1000);

  analogWrite(LED_PIN, 128); // 明るさ = 128
  delay(1000);

  analogWrite(LED_PIN, 192); // 明るさ = 194
  delay(1000);

  analogWrite(LED_PIN, 255); // 明るさ = 255（最大）
  delay(1000);

  // フェードイン
  for (int i = 0; i <= 255; i++) {
    analogWrite(LED_PIN, i); // 明るさ = i
    delay(5);
  }

  // フェードアウト
  for (int i = 255; i >= 0; i--) {
    analogWrite(LED_PIN, i); // 明るさ = i
    delay(5);
  }

  // 次の loop へ...
}
