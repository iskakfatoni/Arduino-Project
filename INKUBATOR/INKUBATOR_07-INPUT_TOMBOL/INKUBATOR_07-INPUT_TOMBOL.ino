byte tombol, tombol2;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(10, INPUT);
  digitalWrite(10, HIGH);
  pinMode(11, INPUT);
  digitalWrite(11, HIGH);
}

void loop() {
  tombol=digitalRead(10);
  tombol2=digitalRead(11);
  if(tombol==LOW) digitalWrite(2, HIGH);
  
  if(tombol2==LOW) digitalWrite(2, LOW);
}
