#define a       6
#define b       7
#define c       8
#define d       9
#define e       10
#define f       11
#define g       12
#define h       13
#define satuan  A2
#define tombol  2
byte nilai=0;

void setup() {
  for(byte k=6; k<=13; k++)
    pinMode(k, OUTPUT);
  pinMode(satuan, OUTPUT);
  pinMode(tombol, INPUT);
}

void loop() {
  tampil7Seg(nilai);
  boolean statusTombol=digitalRead(tombol);
  if(statusTombol==1){
    delay(200);
    nilai++;
  }
}

void tampil7Seg(byte angka) {
 if(angka==0) {
  digitalWrite(a, HIGH);  // ANGKA 0
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(h, LOW);
 }
 else if(angka==1) {
  digitalWrite(a, LOW);  // ANGKA 1
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(h, LOW); 
 }
 if(angka==2) {
  digitalWrite(a, HIGH);  // ANGKA 2
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW); 
 }
 if(angka==3) {
  digitalWrite(a, HIGH);  // ANGKA 3
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW); 
 }
 if(angka==4) {
  digitalWrite(a, LOW);  // ANGKA 4
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW); 
 }
 if(angka==5) {
  digitalWrite(a, HIGH);  // ANGKA 5
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW); 
 }
 if(angka==6) { 
  digitalWrite(a, HIGH);  // ANGKA 6
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW); 
 }
 if(angka==7) { 
  digitalWrite(a, HIGH);  // ANGKA 7
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(h, LOW); 
 }
 if(angka==8) { 
  digitalWrite(a, HIGH);  // ANGKA 8
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW); 
 }
 if(angka==9) { 
  digitalWrite(a, HIGH);  // ANGKA 9
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW);
 }  
  digitalWrite(satuan, HIGH);
}
