// untuk trainer Inkubatek/Tokotronik
#define a       2
#define b       3
#define c       4
#define d       5
#define e       6
#define f       7
#define g       8
#define h       9
#define satuan  13
#define puluhan 12
#define ratusan 11
#define ribuan  10
byte nilai=0, nilaiRibuan, sisaRibuan, nilaiRatusan, sisaRatusan, nilaiPuluhan, nilaiSatuan;

void setup() {
  for(byte k=2; k<=9; k++) //perhatikan posisi pin
    pinMode(k, OUTPUT);
  pinMode(satuan, OUTPUT);
  pinMode(puluhan, OUTPUT);
}

void loop() {
  nilaiRibuan=nilai/1000;
  sisaRibuan=nilai%1000;
  nilaiRatusan=sisaRibuan/100;
  sisaRatusan=sisaRibuan%100;
  nilaiPuluhan=sisaRatusan/10;
  nilaiSatuan=sisaRatusan%10;
  for(byte i=0; i<=25; i++) {
    tampil7Seg(nilaiRibuan, 3);
    delay(2);
    tampil7Seg(nilaiRatusan, 2);
    delay(2);    
    tampil7Seg(nilaiPuluhan, 1);
    delay(2);
    tampil7Seg(nilaiSatuan, 0);
    delay(2);
  }
  nilai++;
  if(nilai==10000)
    nilai=0;
}

void tampil7Seg(byte angka, byte posisi) {
 if(posisi==0) {                //SATUAN
  digitalWrite(ribuan, LOW);
  digitalWrite(ratusan, LOW);
  digitalWrite(puluhan, LOW);
  digitalWrite(satuan, HIGH);
 }
 if(posisi==1) {                // PULUHAN
  digitalWrite(ribuan, LOW);
  digitalWrite(ratusan, LOW);
  digitalWrite(puluhan, HIGH);
  digitalWrite(satuan, LOW);
 }
 if(posisi==2) {                // RATUSAN
  digitalWrite(ribuan, LOW);
  digitalWrite(ratusan, HIGH);
  digitalWrite(puluhan, LOW);
  digitalWrite(satuan, LOW);
 }
 if(posisi==3) {                // RIBUAN
  digitalWrite(ribuan, HIGH);
  digitalWrite(ratusan, LOW);
  digitalWrite(puluhan, LOW);
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
