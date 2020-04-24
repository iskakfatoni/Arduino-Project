#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
byte nilai;

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Arduino Counter");
  pinMode(10, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(10)==LOW) {
    nilai++;
    delay(250);
  }
  lcd.setCursor(0, 1);
  lcd.print("Nilai : ");
  lcd.print(nilai);
  lcd.print("  ");
}
