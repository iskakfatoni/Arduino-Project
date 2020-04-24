void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);  //HIJAU     H1, M2, M3, M4
  digitalWrite(3, LOW);  //KUNING
  digitalWrite(4, LOW);  //MERAH
  digitalWrite(5, LOW);  //HIJAU
  digitalWrite(6, LOW);  //KUNING
  digitalWrite(7, HIGH);  //MERAH
  digitalWrite(8, LOW);  //HIJAU
  digitalWrite(9, LOW);  //KUNING
  digitalWrite(10, HIGH); //MERAH
  digitalWrite(11, LOW); //HIJAU
  digitalWrite(12, LOW); //KUNING
  digitalWrite(13, HIGH); //MERAH
  delay(3000);
  digitalWrite(2, LOW);  //HIJAU     K1, M2, M3, M4
  digitalWrite(3, HIGH);  //KUNING
  digitalWrite(4, LOW);  //MERAH
  digitalWrite(5, LOW);  //HIJAU
  digitalWrite(6, LOW);  //KUNING
  digitalWrite(7, HIGH);  //MERAH
  digitalWrite(8, LOW);  //HIJAU
  digitalWrite(9, LOW);  //KUNING
  digitalWrite(10, HIGH); //MERAH
  digitalWrite(11, LOW); //HIJAU
  digitalWrite(12, LOW); //KUNING
  digitalWrite(13, HIGH); //MERAH
  delay(1000);
  digitalWrite(2, LOW);  //HIJAU     M1, H2, M3, M4
  digitalWrite(3, LOW);  //KUNING
  digitalWrite(4, HIGH);  //MERAH
  digitalWrite(5, HIGH);  //HIJAU
  digitalWrite(6, LOW);  //KUNING
  digitalWrite(7, LOW);  //MERAH
  digitalWrite(8, LOW);  //HIJAU
  digitalWrite(9, LOW);  //KUNING
  digitalWrite(10, HIGH); //MERAH
  digitalWrite(11, LOW); //HIJAU
  digitalWrite(12, LOW); //KUNING
  digitalWrite(13, HIGH); //MERAH
  delay(3000);
  digitalWrite(2, LOW);  //HIJAU     M1, K2, M3, M4
  digitalWrite(3, LOW);  //KUNING
  digitalWrite(4, HIGH);  //MERAH
  digitalWrite(5, LOW);  //HIJAU
  digitalWrite(6, HIGH);  //KUNING
  digitalWrite(7, LOW);  //MERAH
  digitalWrite(8, LOW);  //HIJAU
  digitalWrite(9, LOW);  //KUNING
  digitalWrite(10, HIGH); //MERAH
  digitalWrite(11, LOW); //HIJAU
  digitalWrite(12, LOW); //KUNING
  digitalWrite(13, HIGH); //MERAH
  delay(1000);
  digitalWrite(2, LOW);  //HIJAU     M1, M2, H3, M4
  digitalWrite(3, LOW);  //KUNING
  digitalWrite(4, HIGH);  //MERAH
  digitalWrite(5, LOW);  //HIJAU
  digitalWrite(6, LOW);  //KUNING
  digitalWrite(7, HIGH);  //MERAH
  digitalWrite(8, HIGH);  //HIJAU
  digitalWrite(9, LOW);  //KUNING
  digitalWrite(10, LOW); //MERAH
  digitalWrite(11, LOW); //HIJAU
  digitalWrite(12, LOW); //KUNING
  digitalWrite(13, HIGH); //MERAH
  delay(3000);
  digitalWrite(2, LOW);  //HIJAU     M1, M2, K3, M4
  digitalWrite(3, LOW);  //KUNING
  digitalWrite(4, HIGH);  //MERAH
  digitalWrite(5, LOW);  //HIJAU
  digitalWrite(6, LOW);  //KUNING
  digitalWrite(7, HIGH);  //MERAH
  digitalWrite(8, LOW);  //HIJAU
  digitalWrite(9, HIGH);  //KUNING
  digitalWrite(10, LOW); //MERAH
  digitalWrite(11, LOW); //HIJAU
  digitalWrite(12, LOW); //KUNING
  digitalWrite(13, HIGH); //MERAH
  delay(1000);
  digitalWrite(2, LOW);  //HIJAU     M1, M2, M3, H4
  digitalWrite(3, LOW);  //KUNING
  digitalWrite(4, HIGH);  //MERAH
  digitalWrite(5, LOW);  //HIJAU
  digitalWrite(6, LOW);  //KUNING
  digitalWrite(7, HIGH);  //MERAH
  digitalWrite(8, LOW);  //HIJAU
  digitalWrite(9, LOW);  //KUNING
  digitalWrite(10, HIGH); //MERAH
  digitalWrite(11, HIGH); //HIJAU
  digitalWrite(12, LOW); //KUNING
  digitalWrite(13, LOW); //MERAH
  delay(3000);
  digitalWrite(2, LOW);  //HIJAU     M1, M2, M3, K4
  digitalWrite(3, LOW);  //KUNING
  digitalWrite(4, HIGH);  //MERAH
  digitalWrite(5, LOW);  //HIJAU
  digitalWrite(6, LOW);  //KUNING
  digitalWrite(7, HIGH);  //MERAH
  digitalWrite(8, LOW);  //HIJAU
  digitalWrite(9, LOW);  //KUNING
  digitalWrite(10, HIGH); //MERAH
  digitalWrite(11, LOW); //HIJAU
  digitalWrite(12, HIGH); //KUNING
  digitalWrite(13, LOW); //MERAH
  delay(1000);
}
