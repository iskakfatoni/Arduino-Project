#define ledHijau 6

void setup() {
  pinMode(ledHijau, OUTPUT);
}

void loop() {
  digitalWrite(ledHijau, HIGH);
  delay(1000);              
  digitalWrite(ledHijau, LOW);    
  delay(1000);              
}
