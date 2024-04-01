const uint8_t cds = A0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println(analogRead(cds));
  delay(1000);
}
