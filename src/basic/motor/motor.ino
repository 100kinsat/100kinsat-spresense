const uint8_t m1[3] = {8, 4, 5}; // モータAの制御ピン番号を定義
const uint8_t m2[3] = {7, 2, 3}; // モータBの制御ピン番号を定義

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(m1[i], OUTPUT);
    pinMode(m2[i], OUTPUT);
  }
}

void loop() {
  // 回転
  digitalWrite(m1[0], HIGH);
  digitalWrite(m1[1], LOW);
  analogWrite(m1[2], 100);
  digitalWrite(m2[0], HIGH);
  digitalWrite(m2[1], LOW);
  analogWrite(m2[2], 100);
  delay(5000);

  // 停止
  digitalWrite(m1[0], LOW);
  digitalWrite(m1[1], LOW);
  digitalWrite(m1[2], LOW);
  digitalWrite(m2[0], LOW);
  digitalWrite(m2[1], LOW);
  digitalWrite(m2[2], LOW);
  delay(1000);

  // 回転（反対方向）
  digitalWrite(m1[0], LOW);
  digitalWrite(m1[1], HIGH);
  analogWrite(m1[2], 100);
  digitalWrite(m2[0], LOW);
  digitalWrite(m2[1], HIGH);
  analogWrite(m2[2], 100);
  delay(5000);

  // 停止
  digitalWrite(m1[0], LOW);
  digitalWrite(m1[1], LOW);
  digitalWrite(m1[2], LOW);
  digitalWrite(m2[0], LOW);
  digitalWrite(m2[1], LOW);
  digitalWrite(m2[2], LOW);
  delay(1000);
}
