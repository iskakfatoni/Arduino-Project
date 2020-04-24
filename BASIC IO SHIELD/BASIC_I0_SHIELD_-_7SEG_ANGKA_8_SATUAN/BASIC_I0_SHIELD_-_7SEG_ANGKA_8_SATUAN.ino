#define a       6
#define b       7
#define c       8
#define d       9
#define e       10
#define f       11
#define g       12
#define h       13
#define satuan  A2

void setup() {
  for(byte k=6; k<=13; k++)
    pinMode(k, OUTPUT);
  pinMode(satuan, OUTPUT);
}

void loop() {
  for(byte k=6; k<=13; k++)
    digitalWrite(k, HIGH);
  digitalWrite(satuan, HIGH);
}
