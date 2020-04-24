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
  tampil7Seg();
}

void tampil7Seg() {
  digitalWrite(satuan, HIGH);
  digitalWrite(a, HIGH);  // ANGKA 0
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(h, LOW);
  delay(250);
  digitalWrite(a, LOW);  // ANGKA 1
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(h, LOW); 
  delay(250);
  digitalWrite(a, HIGH);  // ANGKA 2
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW); 
  delay(250);
  digitalWrite(a, HIGH);  // ANGKA 3
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW); 
  delay(250);
  digitalWrite(a, LOW);  // ANGKA 4
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW); 
  delay(250);
  digitalWrite(a, HIGH);  // ANGKA 5
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW); 
  delay(250);
  digitalWrite(a, HIGH);  // ANGKA 6
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW); 
  delay(250);
  digitalWrite(a, HIGH);  // ANGKA 7
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(h, LOW); 
  delay(250);
  digitalWrite(a, HIGH);  // ANGKA 8
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW); 
  delay(250);
  digitalWrite(a, HIGH);  // ANGKA 9
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW);
  delay(250);  
}
