#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(2, 0);
  lcd.print("Arduino UNO");
  lcd.setCursor(1, 1);
  lcd.print("Coba LCD 16x2");
}

void loop() {
  
}
