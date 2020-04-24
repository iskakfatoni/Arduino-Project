#define tombol  2
boolean statusTombol=0;
void setup() {
  for(int q=6; q<=9; q++)
    pinMode(q, OUTPUT);  
  pinMode(tombol, INPUT);
}

void loop() {
  if(digitalRead(tombol)){
    delay(100); 
    statusTombol=!statusTombol;
  }
  if(statusTombol)
    for(int q=6; q<=9; q++)
      digitalWrite(q, HIGH);
    else
    for(int q=6; q<=9; q++)
      digitalWrite(q, LOW);
}
