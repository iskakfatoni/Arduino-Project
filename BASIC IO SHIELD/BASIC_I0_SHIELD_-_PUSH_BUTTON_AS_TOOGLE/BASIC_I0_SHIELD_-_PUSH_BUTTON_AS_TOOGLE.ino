bool status=false;
void setup() {
  for(int x=6; x<=9; x++)
    pinMode(x, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  if (digitalRead(2) == true) {
    status = !status;
    for(int x=6; x<=9; x++)
      digitalWrite(x, status);
  }while(digitalRead(2) == true);
  delay(50);
}
