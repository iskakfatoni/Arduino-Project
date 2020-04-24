//#include <ESP8266WiFi.h>
//#include <Wire.h>  // needed if you use esp8266

#include <LiquidCrystal_I2C.h>  //i2C LCD Library

//Define your LCD 16x2 or 20x4
LiquidCrystal_I2C lcd( 20, 4);


void setup()
{
  //Aktifkan serial jika ingin melihat notifikasi di Serial monitor
  //Serial.begin (9600);  

  //auto set i2c lcd address
  lcd.autoAddress();
  //memulai lcd
  lcd.begin();
}

void loop()
{
  IdulFitri();
}


void IdulFitri() 
{ 
  lcd.clear();
  lcd.setCursor(4,0);
  lcd.print("ISKAK FATONI");
  //delay(100);
  lcd.setCursor(5,1);
  lcd.print("NUR AZIZAH");
  //delay (100); 
  lcd.setCursor(1,2);
  lcd.print("ANNISA DINY NUR F");
  //delay (100);
  lcd.setCursor(1,3);
  lcd.print("ANAS ZAAFARANI MS");
  //delay (100);  
  delay(2500);
  lcd.clear();
  lcd.setCursor(5,1);
  lcd.print("MENGUCAPKAN");
  delay(150);
  lcd.setCursor(0,2);
  for (int i=0; i<20; i++)
    {
      lcd.print("*");
      delay(100);
    }
  delay(1000);
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("TAQOBALLAHU MINNA");
  lcd.setCursor(6,1);
  lcd.print("WA MINKUM");
  lcd.setCursor(6,2);
  lcd.print("SHIYAMANA");
  lcd.setCursor(4,3);
  lcd.print("WA SHIYAMAKUM");
  delay(2000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("JA ALANALLAAHU");
  lcd.setCursor(4,1);
  lcd.print("MINAL AIDIN");
  lcd.setCursor(5,2);
  lcd.print("WAL FAIZIN");
  delay(2000);  
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("SELAMAT HARI RAYA");
  lcd.setCursor(5,1);
  lcd.print("IDUL FITRI");
  lcd.setCursor(7,2);
  lcd.print("1438H");
  lcd.setCursor(5,3);
  lcd.print("--*****--");
  for (int i=0; i<30; i++)
  {
    lcd.noBacklight();
    delay(50);
    lcd.backlight();
    delay(50);
  }
  delay(4000);
  lcd.clear();
  delay(2000);
}

