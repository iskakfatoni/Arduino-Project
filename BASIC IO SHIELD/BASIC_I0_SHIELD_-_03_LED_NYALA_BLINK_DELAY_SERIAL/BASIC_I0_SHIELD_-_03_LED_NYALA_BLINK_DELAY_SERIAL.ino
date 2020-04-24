void setup() {
  Serial.begin(9600);
  Serial.println("LED KELAP KELIP by Iskak");
  for(int x=6; x<=9; x++)
    pinMode(x, OUTPUT);
}

void loop() {
  for(int x=6; x<=9; x++)
      digitalWrite(x, HIGH);
  Serial.println("Led menyala...");
  delay(500);
  for(int x=6; x<=9; x++)
      digitalWrite(x, LOW);
  Serial.println("Led padam...");
  delay(500);
}
