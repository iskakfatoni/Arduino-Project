#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
byte nilai;

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Arduino Counter");
  nilai=200;
}

void loop() {
  lcd.setCursor(6, 1);
  lcd.print(nilai);
  lcd.print("  ");
  nilai++;
  delay(300);
}
