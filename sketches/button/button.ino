const int LED_PIN = 9;
const int BTN_PIN = 2;

float angle = .0f;
float angle_spd = .01f;
float angle_max = 2.0f * PI;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT_PULLUP);
}

void loop() {
  bool pressed = digitalRead(BTN_PIN) == LOW;
  if (pressed) {
    analogWrite(LED_PIN, round((sin(angle) + 1.0f) * 127.5f));
    angle += angle_spd;
    if (angle >= angle_max) angle -= angle_max;
    
  } else {
    analogWrite(LED_PIN, 0);
    angle = .0f;
  }

  delay(2);
}
