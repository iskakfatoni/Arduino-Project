char karakter;
void setup() {
  for(int x=6; x<=9; x++)
    pinMode(x, OUTPUT);
  Serial.begin(9600);
  Serial.println("Masukkan karakter a atau b : ");
}

void loop() {
  while(Serial.available() > 0) {
      karakter=char(Serial.read());
      if(karakter=='a') {
        for(int x=6; x<=9; x++)
          digitalWrite(x, HIGH);
        Serial.println("Karakter a diterima, LED menyala");
      }
      else if(karakter=='b') {
        for(int x=6; x<=9; x++)
          digitalWrite(x, LOW);
        Serial.println("Karakter b diterima, LED padam");
      }
  }
}
