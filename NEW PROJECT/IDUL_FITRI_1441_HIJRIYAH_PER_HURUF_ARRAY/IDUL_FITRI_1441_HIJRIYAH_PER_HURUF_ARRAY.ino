String text[12]={"MUCHAMAD ISKAK FATONI",
                 "NUR AZIZAH",
                 "ANNISA DINY NUR FAIZAH",
                 "ANAS ZAAFARANI MAULA SHIDDIQ",
                 "MENGUCAPKAN",
                 "TAQOBALLAHU MINNA WA MINKUM",
                 "SHIYAMANA WA SHIYAMAKUM",
                 "JA ALANALLAAHU",
                 "MINAL AIDIN WAL FAIZIN",
                 "MOHON MAAF LAHIR DAN BATIN",
                 "SELAMAT HARI RAYA",
                 "IDUL FITRI 1441H"
                };
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
  delay(4000);
  Serial.println();
  Serial.println();
  for (int i=0; i<40; i++)
  {
    Serial.print("*");
    delay(30);
  }
  Serial.println();
  for(int x=0; x<=4; x++){
    for(int i=0; i<=text[x].length(); i++)
    {
      Serial.print(text[x].charAt(i));
      delay(100);
    }
    Serial.println();
  }
  for (int i=0; i<40; i++)
  {
    Serial.print("*");
    delay(30);
  }
  Serial.println();
  for(int x=5; x<=11; x++){
    for(int i=0; i<=text[x].length(); i++)
    {
      Serial.print(text[x].charAt(i));
      delay(100);
    }
    Serial.println();
  }
  for (int i=0; i<40; i++)
  {
    Serial.print("*");
    delay(30);
  }
}
