#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd( 20, 4);

void setup()   
{
  Serial.begin(9600);  
  lcd.autoAddress();
  lcd.begin2();
  lcd.clear();
}


void loop()  
{
  for(int i = 0; i< 4; i++)
  {
    lcd.backlight();
    delay(200);
    lcd.noBacklight();
    delay(200);
  }
}

