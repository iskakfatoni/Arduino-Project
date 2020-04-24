void setup() {
  for(int x=6; x<=9; x++)
    pinMode(x, OUTPUT);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
}

void loop() {
  digitalWrite(6, !digitalRead(6));
  digitalWrite(7, !digitalRead(7));
  digitalWrite(8, !digitalRead(8));
  digitalWrite(9, !digitalRead(9));
  delay(500);
}
