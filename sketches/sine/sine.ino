/****

Arduino リファレンス:
https://www.musashinodenpa.com/arduino/ref/

回路:
D9 -> R220 -> LED(+) -> LED(-) -> GND

****/

// 定数を定義
const int LED_PIN = 9; // 使用するピン = 9番

// 変数を定義
float angle = .0f;            // 現在の角度
float angle_spd = .01f;       // 角度の変化速度
float angle_max = 2.0f * PI;  // 角度の最大値

void setup() {
  // 9番ピンを出力モードに
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // 角度から明るさを計算
  float br = sin(angle); // -1.0 から +1.0 
  br += 1.0f;            // 0.0 から 2.0
  br *= 127.5f;          // 0.0 から 255.0
  int bri = round(br);   // 小数点以下を四捨五入
  
  // LEDに出力
  analogWrite(LED_PIN, bri);

  // 角度を変化させる（1フレーム分）
  angle += angle_spd;
  
  // もし最大角度を超えたら
  if (angle >= angle_max) {
    angle -= angle_max; // 角度 - 最大角度
  }

  // 一瞬待つ
  delay(5);

  // 次のフレームへ...
}
