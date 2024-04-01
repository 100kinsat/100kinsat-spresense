const u_int sp = 9; // スピーカと接続されたピン番号を定義

void setup(){
  pinMode(sp, OUTPUT);

  // ド
  tone(
    sp,      // 出力するピン
    261.626, // 周波数[Hz]
    150      // 出力する時間[ms]
  );
  delay(150);

  // レ
  tone(sp, 293.665, 150);
  delay(150);

  // ミ
  tone(sp, 329.628, 150);
  delay(150);

  // ファ
  tone(sp, 349.228, 150);
  delay(150);

  // ソ
  tone(sp, 391.995, 150);
  delay(150);

  // ラ
  tone(sp, 440.000, 150);
  delay(150);

  // シ
  tone(sp, 493.883, 150);
  delay(150);

  // ド
  tone(sp, 261.626 * 2, 150);
  delay(150);

  noTone(sp);
}

void loop(){}
