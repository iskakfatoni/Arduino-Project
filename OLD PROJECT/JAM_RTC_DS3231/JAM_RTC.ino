#include <DS3231.h>
#include <LiquidCrystal_I2C.h>  //i2C LCD Library
//Define your LCD 16x2 or 20x4
LiquidCrystal_I2C lcd( 20, 4);
//Define RTC 
DS3231  rtc(A4, A5);
Time waktu;
 
void setup()
{
  Serial.begin(9600);
   //auto set i2c lcd address
  lcd.autoAddress();
  //memulai lcd
  lcd.begin();  
  rtc.begin();
}
 
void loop()
{
  //tampilkan hari
  Serial.println(rtc.getDOWStr(FORMAT_LONG));
 
  //ambil waktu
  waktu = rtc.getTime();
  int dataJam = waktu.hour;     
  int dataMenit = waktu.min;
  int dataDetik = waktu.sec;
  Serial.print(dataJam);
  lcd.setCursor(0,0);
  lcd.print(dataJam);
  Serial.print(':');
  lcd.print(':');
  Serial.print(dataMenit);
  lcd.print(dataMenit);
  Serial.print(':');
  lcd.print(':');
  Serial.println(dataDetik);
  lcd.print(dataDetik);
  delay(1000);
}
