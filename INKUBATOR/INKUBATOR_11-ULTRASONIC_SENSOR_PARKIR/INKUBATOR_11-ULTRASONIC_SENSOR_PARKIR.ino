#include <LiquidCrystal.h>
#define ECHOPIN 9
#define TRIGPIN 8
#define BUZZER  10

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
unsigned int jarak, timer;

void setup() {
  lcd.begin(16, 2);
  lcd.print("  SENSOR PARKIR");
  lcd.setCursor(0, 1);
  lcd.print("  MOBIL");
  delay(500);
  lcd.clear();
  lcd.print("Jarak = ");
  pinMode(ECHOPIN, INPUT);
  pinMode(TRIGPIN, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, LOW);
}    

void loop() {
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW);
  timer=pulseIn(ECHOPIN, HIGH);
  jarak=timer/58;
  lcd.setCursor(6, 0);
  lcd.print(jarak);
  lcd.print("cm    ");
  if(jarak<=4){
    digitalWrite(BUZZER, HIGH);
    delay(70);
    digitalWrite(BUZZER, LOW);
    delay(10 );
  }
  else if(jarak<=8){
    digitalWrite(BUZZER, HIGH);
    delay(200);
    digitalWrite(BUZZER, LOW);
    delay(15);
  }
  else if(jarak<=12){
    digitalWrite(BUZZER, HIGH);
    delay(500);
    digitalWrite(BUZZER, LOW);
    delay(15);
  }
  else digitalWrite(BUZZER, LOW);
  //delay(250);
}
