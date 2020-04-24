
#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
int adc, temp;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Dig Thermometer");
  lcd.setCursor(0, 1);
  lcd.print("Temp= ");
}    

void loop() {
  adc=analogRead(1);  //A1 Sensor LM35
  temp=(adc*5)/10;
  lcd.setCursor(6, 1);
  lcd.print(temp);
  lcd.print("Celcius");
  delay(1000);
}
