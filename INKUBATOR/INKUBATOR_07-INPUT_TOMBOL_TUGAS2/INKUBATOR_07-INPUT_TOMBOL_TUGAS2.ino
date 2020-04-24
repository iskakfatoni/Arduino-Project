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
  if(digitalRead(10)==LOW) {
    delay(250);
    digitalWrite(2, !digitalRead(2));
  }
  if(digitalRead(11)==LOW) {
    delay(250);
    digitalWrite(3, !digitalRead(3));
  }
  if(digitalRead(12)==LOW) {
    delay(250);
    digitalWrite(4, !digitalRead(4));
  }
  if(digitalRead(13)==LOW) {
    delay(250);
    digitalWrite(5, !digitalRead(5));
  }
  if(digitalRead(A2)==LOW) {
    delay(250);
    digitalWrite(6, !digitalRead(6));
  }
  if(digitalRead(A3)==LOW) {
    delay(250);
    digitalWrite(7, !digitalRead(7));
  }
  if(digitalRead(A4)==LOW) {
    delay(250);
    digitalWrite(8, !digitalRead(8));
  }
  if(digitalRead(A5)==LOW) {
    delay(250);
    digitalWrite(9, !digitalRead(9));
  }
}
