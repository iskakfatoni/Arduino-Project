byte tombol;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(10, INPUT);
  digitalWrite(10, HIGH);
}

void loop() {
  tombol=digitalRead(10);
  if(tombol==LOW) digitalWrite(2, LOW);
  else digitalWrite(2, HIGH);
}
