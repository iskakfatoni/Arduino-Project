boolean tombol;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  
  pinMode(10, INPUT);
  digitalWrite(10, HIGH);
  pinMode(11, INPUT);
  digitalWrite(11, HIGH);
  pinMode(12, INPUT);
  digitalWrite(12, HIGH);
  pinMode(13, INPUT);
  digitalWrite(13, HIGH);
  pinMode(A2, INPUT);
  digitalWrite(A2, HIGH);
  pinMode(A3, INPUT);
  digitalWrite(A3, HIGH);
  pinMode(A4, INPUT);
  digitalWrite(A4, HIGH);
  pinMode(A5, INPUT);
  digitalWrite(A5, HIGH);
}

void loop() {
  tombol=digitalRead(10);
  if(tombol==LOW) digitalWrite(2, HIGH);
  else digitalWrite(2, LOW);
  
  tombol=digitalRead(11);
  if(tombol==LOW) digitalWrite(3, HIGH);
  else digitalWrite(3, LOW);
  
  tombol=digitalRead(12);
  if(tombol==LOW) digitalWrite(4, HIGH);
  else digitalWrite(4, LOW);
  
  tombol=digitalRead(13);
  if(tombol==LOW) digitalWrite(5, HIGH);
  else digitalWrite(5, LOW);
  
  tombol=digitalRead(A2);
  if(tombol==LOW) digitalWrite(6, HIGH);
  else digitalWrite(6, LOW);
  
  tombol=digitalRead(A3);
  if(tombol==LOW) digitalWrite(7, HIGH);
  else digitalWrite(7, LOW);
  
  tombol=digitalRead(A4);
  if(tombol==LOW) digitalWrite(8, HIGH);
  else digitalWrite(8, LOW);

  tombol=digitalRead(A5);
  if(tombol==LOW) digitalWrite(9, HIGH);
  else digitalWrite(9, LOW);
}
