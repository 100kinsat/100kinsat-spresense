#define mC 261
#define mD 293
#define mE 329
#define mF 349
#define mG 391
#define mA 440
#define mB 493
#define nn 0

const u_int sp = 9; // スピーカと接続されたピン番号を定義

float mm[] = {mC, mD, mE, mF, mG, mA, mB, mC * 2}; // メロディ

void setup(){
  pinMode(sp, OUTPUT);
  beep(mm, sizeof(mm)/sizeof(float), 150);
}

void loop(){}

/** メロディを鳴らす関数 */
void beep(float *mm, int m_size, int b_time){
  
  for(int i=0; i<m_size; i++){
    tone(sp, mm[i]);
    delay(b_time);
  }
  noTone(sp);
}