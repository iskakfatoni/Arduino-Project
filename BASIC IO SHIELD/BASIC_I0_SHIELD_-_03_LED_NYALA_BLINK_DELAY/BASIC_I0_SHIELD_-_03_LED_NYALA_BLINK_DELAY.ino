void setup() {
  for(int x=6; x<=9; x++)
    pinMode(x, OUTPUT);
}

void loop() {
  for(int x=6; x<=9; x++){
    digitalWrite(x, HIGH);
  }
  delay(500);
  for(int x=6; x<=9; x++){
    digitalWrite(x, LOW);
  }
  delay(500);
}
