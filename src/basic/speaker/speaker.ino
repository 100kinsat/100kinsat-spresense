const u_int sp = 9; // スピーカと接続されたピン番号を定義

void setup(){
  pinMode(sp, OUTPUT);

  // ド
  tone(
    sp, // 出力するピン
    261 // 周波数[Hz]
  );
  delay(150); // 出力する時間[ms]

  // レ
  tone(sp, 293);
  delay(150);

  // ミ
  tone(sp, 329);
  delay(150);

  // ファ
  tone(sp, 349);
  delay(150);

  // ソ
  tone(sp, 391);
  delay(150);

  // ラ
  tone(sp, 440);
  delay(150);

  // シ
  tone(sp, 493);
  delay(150);

  // ド
  tone(sp, 261 * 2);
  delay(150);

  noTone(sp);
}

void loop(){}
