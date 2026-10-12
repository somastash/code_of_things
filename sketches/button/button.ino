/***

回路:
  D9 --- R220 --- LED --- GND
  D2 --- BTN --- GND

プルアップ抵抗:
  ボタンを押していない時:
    5V --- 内部プルアップ抵抗 --- D2 -x- BTN
    BTN は導通しておらず、D2 は 5V に引っ張られるため HIGH に

  ボタンを押している時:
    5V --- 内部プルアップ抵抗 --- D2 --- BTN --- GND
    BTN が導通し、D2 は GND に繋がるため LOW に

***/

const int led_pin = 9;
const int btn_pin = 2;

void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(btn_pin, INPUT_PULLUP);
}

void loop() {
  // ボタンが押されているか否か (true = 押されている, false = 押されていない)
  bool pressed = digitalRead(btn_pin) == LOW;
  if (pressed) { // 押されている場合
    analogWrite(led_pin, 255);
  } else { // 押されていない場合
    analogWrite(led_pin, 0);
  }
  delay(2);
}
