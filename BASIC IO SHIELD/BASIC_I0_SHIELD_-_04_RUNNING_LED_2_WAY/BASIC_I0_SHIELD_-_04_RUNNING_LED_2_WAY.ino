void setup() {
  for(int x=6; x<=9; x++)
    pinMode(x, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  for(int x=6; x<=9; x++){
    digitalWrite(x, HIGH);
    if(x==6)
      digitalWrite(9, LOW);
    else
      digitalWrite(x-1, LOW);
    delay(500);
  }
  for(int x=8; x>=7; x--){
    digitalWrite(x, HIGH);
    if(x==9)
      digitalWrite(6, LOW);
    else
      digitalWrite(x+1, LOW);
    delay(500);
  }
}
