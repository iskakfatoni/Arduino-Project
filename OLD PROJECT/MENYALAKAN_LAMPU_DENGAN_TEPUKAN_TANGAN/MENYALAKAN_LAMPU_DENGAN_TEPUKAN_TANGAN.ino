//#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#define pinSensorSuara  3
#define relay1         10
#define relay2         11
#define relay3         12
#define relay4         13

LiquidCrystal_I2C lcd(16,2);
bool led;
static unsigned long waktuLama=0;

void setup() {
  lcd.autoAddress();
  lcd.begin();
  lcd.backlight();
  lcd.clear();
  Serial.begin(9600);
  pinMode(pinSensorSuara, INPUT);
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  pinMode(relay4,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(pinSensorSuara), prosesLED, RISING);
}


void loop(){
  led=LOW;
  digitalWrite(10,led);
  digitalWrite(relay1,!led);
  digitalWrite(relay2,!led);
  digitalWrite(relay3,!led);
  digitalWrite(relay4,!led);
  lcd.setCursor(0,0);
  lcd.print("LAMPU PADAM");
  Serial.println("LAMPU PADAM");
}


void prosesLED(){
unsigned long waktuBaru=millis();
if(waktuBaru-waktuLama >= 100)
  {
    led=HIGH;
    digitalWrite(10,led);
    digitalWrite(relay1,!led);
    digitalWrite(relay2,!led);
    digitalWrite(relay3,!led);
    digitalWrite(relay4,!led);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("LAMPU MENYALA");
    Serial.println("LAMPU MENYALA");
    waktuLama=waktuBaru;
  }
}

