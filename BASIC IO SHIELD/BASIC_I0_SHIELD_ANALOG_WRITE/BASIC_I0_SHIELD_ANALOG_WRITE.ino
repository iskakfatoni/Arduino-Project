#define led 6
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  for(int x=0; x<=255; x++){
    analogWrite(led, x);
    delay(4);
  }
  for(int x=255; x>=0; x--){
    analogWrite(led, x);
    delay(4);
  }
}
