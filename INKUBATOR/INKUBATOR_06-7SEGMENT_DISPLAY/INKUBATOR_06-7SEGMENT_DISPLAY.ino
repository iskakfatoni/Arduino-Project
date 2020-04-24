void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);  //A
  digitalWrite(3, HIGH);  //B
  digitalWrite(4, HIGH);  //C
  digitalWrite(5, LOW);  //D
  digitalWrite(6, LOW);  //E
  digitalWrite(7, LOW);  //F
  digitalWrite(8, LOW);  //G
  digitalWrite(9, LOW);  //H
  digitalWrite(10, LOW); //1
  digitalWrite(11, LOW); //2
  digitalWrite(12, LOW); //3
  digitalWrite(13, HIGH); //4
}
