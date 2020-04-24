void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}
void loop() {
  for(int i = 0; i <= 3; i++)
  {
    digitalWrite(i, LOW);
    if(i == 0)
      digitalWrite(3, HIGH);
    else
      digitalWrite(i - 1, HIGH);
    delay(1000);
  }
}
