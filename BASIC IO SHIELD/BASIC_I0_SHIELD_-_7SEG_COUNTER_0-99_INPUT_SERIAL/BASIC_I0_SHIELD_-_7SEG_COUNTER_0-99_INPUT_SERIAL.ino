#define a       6
#define b       7
#define c       8
#define d       9
#define e       10
#define f       11
#define g       12
#define h       13
#define satuan  A2
#define puluhan A3
int data[2];

void setup() {
  for(byte k=6; k<=13; k++)
    pinMode(k, OUTPUT);
  pinMode(satuan, OUTPUT);
  Serial.begin(9600);
  Serial.print("Masukkan nilai : ");
}

void loop() {
  while(Serial.available()>0){
  while(Serial.available()<2) {} // Wait 'till there are 2 Bytes waiting
    for(int n=0; n<2; n++)
      data[n] = Serial.read(); // Then: Get them.
    for(int n=0; n<2; n++)
      data[n] -= 48;
    Serial.print("Data : ");
    Serial.print(data[0]);
    Serial.print("  -  ");
    Serial.println(data[1]);
  }
  while(Serial.available()==0){
    for(byte i=0; i<=55; i++) {
    tampil7Seg(data[0], 1);
    delay(5);
    tampil7Seg(data[1], 0);
    delay(5);
    Serial.print("TAMPIL : ");
    Serial.print(data[0]);
    Serial.print("  -  ");
    Serial.println(data[1]);
    }
  }
}


void tampil7Seg(byte angka, byte posisi) {
 if(posisi==0) {                //SATUAN
  digitalWrite(puluhan, LOW);
  digitalWrite(satuan, HIGH);
 }
 if(posisi==1) {                // PULUHAN
  digitalWrite(puluhan, HIGH);
  digitalWrite(satuan, LOW);
 }
 if(angka==0) {
  digitalWrite(a, HIGH);        // ANGKA 0
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
}
