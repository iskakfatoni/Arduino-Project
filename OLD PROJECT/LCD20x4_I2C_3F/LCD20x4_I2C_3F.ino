#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd( 20, 4);

void setup()   
{
  Serial.begin(9600);  
  lcd.autoAddress();
  lcd.begin();
  lcd.clear();
  for(int i = 0; i< 4; i++)
  {
    lcd.backlight();
    delay(200);
    lcd.noBacklight();
    delay(200);
  }
  lcd.backlight(); 
  lcd.setCursor(0,0); 
  lcd.print("Halloo...");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("Silahkan...");
  delay(4000);  

  lcd.clear();
  lcd.setCursor(0,0); 
  lcd.print("Lihat Serial Monitor");
  lcd.setCursor(0,1);
  lcd.print("Ketik disana");  
  lcd.setCursor(0,2);
  lcd.print(".................");  

}


void loop()  
{
  {
   if (Serial.available())
   {
      delay(100);
      lcd.clear();
      while (Serial.available() > 0)
      {
        lcd.write(Serial.read());
      }
   }
  }
}

