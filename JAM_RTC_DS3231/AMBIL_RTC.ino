#include <DS3231.h>
 
DS3231  rtc(A4, A5);
Time waktu;
 
void setup()
{
  Serial.begin(9600);  
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
  Serial.print(':');
  Serial.print(dataMenit);
  Serial.print(':');
  Serial.println(dataDetik);
  delay(1000);
}
