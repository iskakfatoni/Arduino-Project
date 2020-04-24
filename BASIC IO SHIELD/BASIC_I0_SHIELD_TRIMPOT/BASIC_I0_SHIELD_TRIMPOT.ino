#define   led     6
#define   trimpot A0
void setup() {
  pinMode(led, OUTPUT);
  pinMode(trimpot, INPUT);
  Serial.begin(9600);
}

void loop() {
  int nilaiTrimpot=analogRead(trimpot);
  int nilaiMap=map(nilaiTrimpot, 0, 1023, 0, 255);
  Serial.print("Nilai Trimpot : ");
  Serial.print(nilaiTrimpot);
  Serial.print("  -  Nilai Map : ");
  Serial.println(nilaiMap);
  analogWrite(led, nilaiMap);
}
