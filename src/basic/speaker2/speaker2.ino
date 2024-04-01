#define mC 261.626
#define mD 293.665
#define mE 329.628
#define mF 349.228
#define mG 391.995
#define mA 440.000
#define mB 493.883
#define nn 0.0

const u_int sp = 9; // スピーカと接続されたピン番号を定義

float mm[] = {mE*4, mA*4, mB*4, mA*4, mE*2, mE*4, mB*4}; // メロディ

void setup(){
  pinMode(sp, OUTPUT);
  beep(mm, sizeof(mm)/sizeof(float), 150);
}

void loop(){}

/** メロディを鳴らす関数 */
void beep(float *mm, int m_size, int b_time){
  
  for(int i=0; i<m_size; i++){
    tone(sp, mm[i], b_time);
    delay(b_time);
  }
  noTone(sp);
}