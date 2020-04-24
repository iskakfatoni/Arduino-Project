#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
int adc;

void setup() {
  lcd.begin(16, 2);
  lcd.print("ADC Channel 0");
  lcd.setCursor(0, 1);
  lcd.print("ADC0 = ");
}    

void loop() {
  adc=analogRead(0);
  lcd.setCursor(7, 1);
  lcd.print(adc);
  lcd.print("  ");
  delay(100);
}
