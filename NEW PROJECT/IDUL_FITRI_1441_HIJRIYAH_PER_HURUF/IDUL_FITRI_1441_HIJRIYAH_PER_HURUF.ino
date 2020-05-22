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
    //Serial.println(i);
    delay(500);
  }
  String text="MUCHAMAD ISKAK FATONI";
  for(int i=0; i<=text.length(); i++)
  {
    Serial.print(text.charAt(i));
    delay(100);
  }
  Serial.println();
  text="NUR AZIZAH";
  for(int i=0; i<=text.length(); i++)
  {
    Serial.print(text.charAt(i));
    delay(100);
  }
  Serial.println();
  text="ANNISA DINY NUR FAIZAH";
  for(int i=0; i<=text.length(); i++)
  {
    Serial.print(text.charAt(i));
    delay(100);
  }
  Serial.println();
  text="ANAS ZAAFARANI MAULA SHIDDIQ";
  for(int i=0; i<=text.length(); i++)
  {
    Serial.print(text.charAt(i));
    delay(100);
  }
  Serial.println();
  text="MENGUCAPKAN";
  for(int i=0; i<=text.length(); i++)
  {
    Serial.print(text.charAt(i));
    delay(100);
  }
  Serial.println();
  for (int i=0; i<50; i++)
  {
    Serial.print("*");
    delay(50);
  }
  Serial.println();
  text="TAQOBALLAHU MINNA WA MINKUM";
  for(int i=0; i<=text.length(); i++)
  {
    Serial.print(text.charAt(i));
    delay(100);
  }
  Serial.println();
  text="SHIYAMANA WA SHIYAMAKUM";
  for(int i=0; i<=text.length(); i++)
  {
    Serial.print(text.charAt(i));
    delay(100);
  }
  Serial.println();
  text="JA ALANALLAAHU";
  for(int i=0; i<=text.length(); i++)
  {
    Serial.print(text.charAt(i));
    delay(100);
  }
  Serial.println();
  text="MINAL AIDIN WAL FAIZIN";
  for(int i=0; i<=text.length(); i++)
  {
    Serial.print(text.charAt(i));
    delay(100);
  }
  Serial.println();
  text="MOHON MAAF LAHIR DAN BATIN";
  for(int i=0; i<=text.length(); i++)
  {
    Serial.print(text.charAt(i));
    delay(100);
  }
  Serial.println();
  text="SELAMAT HARI RAYA";
  for(int i=0; i<=text.length(); i++)
  {
    Serial.print(text.charAt(i));
    delay(100);
  }
  Serial.println();
  text="IDUL FITRI 1441H";
  for(int i=0; i<=text.length(); i++)
  {
    Serial.print(text.charAt(i));
    delay(100);
  }
  Serial.println();
  for (int i=0; i<50; i++)
  {
    Serial.print("*");
    delay(50);
  }
}
