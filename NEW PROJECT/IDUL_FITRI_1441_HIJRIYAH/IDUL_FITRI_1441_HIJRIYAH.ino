void setup()
{
  Serial.begin (9600);
  IdulFitri();
}

void loop()
{
    
}


void IdulFitri() 
{ 
  for(int i=8; i>=0; i--)
  {
    Serial.println(i);
    delay(500);
  }
  Serial.println("ISKAK FATONI");
  delay(500);
  Serial.println("NUR AZIZAH");
  delay(500);
  Serial.println("ANNISA DINY NUR FAIZAH");
  delay(500);
  Serial.println("ANAS ZAAFARANI MAULA SHIDDIQ");
  delay(500);
  Serial.println("MENGUCAPKAN");
  delay(500);
  for (int i=0; i<50; i++)
  {
    Serial.print("*");
    delay(100);
  }
  Serial.println("*");
  Serial.println("TAQOBALLAHU MINNA WA MINKUM");
  delay(500);
  Serial.println("SHIYAMANA WA SHIYAMAKUM");
  delay(500);
  Serial.println("JA ALANALLAAHU");
  delay(500);
  Serial.println("MINAL AIDIN WAL FAIZIN");
  delay(500);
  Serial.println("MOHON MAAF LAHIR DAN BATIN");
  delay(500);
  Serial.println("SELAMAT HARI RAYA");
  delay(500);
  Serial.println("IDUL FITRI 1441H");
  delay(500);
  for (int i=0; i<50; i++)
  {
    Serial.print("*");
    delay(100);
  }
}
