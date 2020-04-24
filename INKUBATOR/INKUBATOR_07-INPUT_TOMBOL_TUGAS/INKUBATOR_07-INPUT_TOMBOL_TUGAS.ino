void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
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
  if(digitalRead(10)==LOW) digitalWrite(2, HIGH);
  if(digitalRead(11)==LOW) digitalWrite(2, LOW);

  if(digitalRead(12)==LOW) digitalWrite(3, HIGH);
  if(digitalRead(13)==LOW) digitalWrite(3, LOW);

  if(digitalRead(A2)==LOW) digitalWrite(4, HIGH);
  if(digitalRead(A3)==LOW) digitalWrite(4, LOW);

  if(digitalRead(A4)==LOW) digitalWrite(5, HIGH);
  if(digitalRead(A5)==LOW) digitalWrite(5, LOW);
}
