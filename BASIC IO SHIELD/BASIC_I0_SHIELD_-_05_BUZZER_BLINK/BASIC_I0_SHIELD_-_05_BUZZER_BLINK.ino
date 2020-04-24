#define BUZZER 3
void setup() {
  pinMode(BUZZER, OUTPUT);  //pin 3 sebagai Output (Buzzer)
}

void loop() {
  digitalWrite(BUZZER, HIGH);   //bunyikan buzzer
  delay(1000);             //jeda bunyi 1 detik
  digitalWrite(BUZZER, LOW);    //non-aktifkan buzzer
  delay(500);             //jeda diam 1 detik
}
