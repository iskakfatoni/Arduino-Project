//#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#define sensorPir 12
#define outputLED 8
#define vccPIR 11
bool dataPIR;

LiquidCrystal_I2C lcd(16,2);

void setup() {
  Serial.begin(9600);
  lcd.autoAddress();
  lcd.begin();
  lcd.backlight();
  pinMode(sensorPir, INPUT);
  pinMode(outputLED, OUTPUT);
  pinMode(vccPIR, OUTPUT);
  digitalWrite(vccPIR, HIGH);//NYALAKAN PIR
  lcd.setCursor(1,0);
  lcd.print("LAMPU AKUARIUM");
  lcd.setCursor(0,1);
  lcd.print("OTOMATIS");
  delay(1000);
}
void loop() {
  dataPIR=digitalRead(sensorPir);
  Serial.println(dataPIR);
 
  if(dataPIR==HIGH)
  {
    lcd.clear();
    digitalWrite (outputLED, HIGH);
    lcd.setCursor(0,0);
    lcd.print("Terdeteksi");
    lcd.setCursor(0,1);
    lcd.print("     Object");
  }
  else if(dataPIR==LOW)
  {
    lcd.clear ();
    digitalWrite(outputLED ,LOW);
    lcd.setCursor(0,0);
    lcd.print("Tidak terdeteksi");
    lcd.setCursor(0,1);
    lcd.print("     Object");
  }
}
  
