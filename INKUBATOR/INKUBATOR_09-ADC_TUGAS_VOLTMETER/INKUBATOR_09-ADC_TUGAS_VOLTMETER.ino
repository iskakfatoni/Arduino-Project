#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
int adc, volt;

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(1, 0);
  lcd.print("VOLTMETER-UNO");
}    

void loop() {
  adc=analogRead(0);
  lcd.setCursor(0, 1);
  lcd.print("ADC:");
  lcd.print(adc);
  lcd.print("  ");
  volt=adc*5;
  lcd.setCursor(8, 1);
  lcd.print("Volt:");
  lcd.print(volt);
  delay(100);
}
