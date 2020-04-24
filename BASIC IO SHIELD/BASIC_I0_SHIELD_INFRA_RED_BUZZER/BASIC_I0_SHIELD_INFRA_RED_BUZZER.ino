#define buzzer      3
#define transmitter 5
#define infraRed    A1
#define led         6
boolean nilaiIR;
void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(transmitter, OUTPUT);
  pinMode(infraRed, INPUT);
  digitalWrite(transmitter, HIGH);
}

void loop() {
  nilaiIR=digitalRead(infraRed);
  if(nilaiIR==1) {
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }
}
