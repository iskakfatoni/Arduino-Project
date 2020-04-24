
#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
int adc, temp;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Dig Thermometer");
  delay(2000);
}    

void loop() {
  adc=analogRead(1);  //A1 Sensor LM35
  temp=(adc*5)/10;
  lcd.setCursor(0, 0);
  lcd.print("Temperatur= ");
  lcd.setCursor(12, 0);
  lcd.print(temp);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("Kondisi= ");
  lcd.setCursor(9, 1);
  if(temp<=29) lcd.print("DINGIN");
  else if(temp<=31) lcd.print("HANGAT");
  else lcd.print("PANAS ");
  delay(500);
}
