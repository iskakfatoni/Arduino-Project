#include <DS3231.h>
 
DS3231  rtc(SDA, SCL);
 
void setup()
{
  Serial.begin(9600);  
  rtc.begin();
  // Seting waktu saat pertama kali RTC digunakan
  //rtc.setDOW(SELASA);           // Set Hari
  rtc.setTime(9, 52, 00);      // Set waktu JJ:MM:DD (24hr format)
  rtc.setDate(12, 5, 2017);     // Set tanggal 20 September 2016
 
  //Selanjutnya, informasi berikut dapat diambil sesuai kebutuhan kita
  Serial.println(rtc.getDOWStr(FORMAT_SHORT));    //tampilkan hari dalam format singkat
  Serial.println(rtc.getDOWStr(FORMAT_LONG));     //tampilkan hari dalam format panjang
  Serial.println(rtc.getMonthStr(FORMAT_SHORT));  //tampilkan bulan dalam format singkat
  Serial.println(rtc.getMonthStr(FORMAT_LONG));   //tampilkan bulan dalam format panjang
  Serial.println(rtc.getDateStr());               //tampilkan tanggal
  Serial.println(rtc.getTimeStr());               //tampilkan waktu
  Serial.println(rtc.getUnixTime(rtc.getTime())); //konvert ke Unix time  
}
 
void loop()
{
   //tidak melakukan apa-apa
}
