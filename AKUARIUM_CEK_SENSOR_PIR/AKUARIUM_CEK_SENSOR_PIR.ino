#define sensorPir 12

void setup() {
  pinMode(sensorPir, INPUT);
  Serial.begin(9600);
}
void loop() {
  bool dataPir= digitalRead(sensorPir);
  Serial.println(dataPir);
  delay(50);
}
  
