#include <ArduinoJson.h>        //Using Arduino JSON library by Benoit Blanchon
#include <NTPtimeESP.h>
#include <LiquidCrystal_I2C.h>  //i2C LCD Library


unsigned long lastConnectionTime = 10 * 60 * 1000;     // last time you connected to the server, in milliseconds
const unsigned long postingInterval = 120000;  // posting interval of 10 minutes  (10L * 1000L; 10 seconds delay for testing)

//Persiapan akses WiFi
const char* ssid     = "annisa@RUMAH";           // SSID WiFi
const char* password = "";                       // password WiFi
WiFiClient client;

//Persiapan data NTP
NTPtime NTPch("id.pool.ntp.org");   // Pool NTP server Indonesia
strDateTime dateTime;
String bulan[12]={"JAN","FEB","MAR","APR","MEI","JUN","JUL","AUG","SEP","OKT","NOP","DES"};

//Persiapan OpenWeatherMap
const char* server = "api.openweathermap.org";  // server's address
const char* resource = "/data/2.5/weather?q=Mojokerto&units=metric&APPID=???"; // insert your API key
// complete urls : api.openweathermap.org/data/2.5/weather?q=Mojokerto&units=metric&APPID=92041686a48c087fef99b94a3efd9c11
char response[600]; // this fixed sized buffers works well for this project using the NodeMCU.

//Persiapan LCD 20x4 I2C
LiquidCrystal_I2C lcd( 20, 4);

void setup(){
  initWifi();
}

void loop(){
  displayNTPTime();
  if (millis() - lastConnectionTime > postingInterval) 
  {
    lastConnectionTime = millis();
    processOpenWeatherMap();
  }
}

void initWifi(){
  Serial.begin(115200);
  //Serial.println("initWifi");   //DEBUG
  WiFi.mode(WIFI_STA);
  WiFi.begin (ssid, password);
    //auto set i2c lcd address
  lcd.autoAddress();
  //memulai lcd
  lcd.begin();
  // ============================================= // 
  lcd.clear();
  lcd.print("   JAM DAN CUACA");
  lcd.setCursor(0,1);
  lcd.print("====================");
  lcd.setCursor(0,2);
  lcd.print(" Open Weather Map");
  lcd.setCursor(0,3);
  lcd.print("dan id.pool.ntp.org");
  delay(500);
  for (int i=0; i<20; i++)
  {
    lcd.noBacklight();
    delay(50);
    lcd.backlight();
    delay(50);
  }
  delay(500);
  lcd.clear();
  lcd.print("  Koneksi ke WiFi");
  lcd.setCursor(0,1);
  lcd.print("--------------------");
  lcd.setCursor(0,2);
  lcd.print("Mengkoneksikan");
  lcd.setCursor(0,3);
  while (WiFi.status() != WL_CONNECTED) {
    lcd.print(".");
    delay(500);
  }
  lcd.setCursor(0,2);
  lcd.print("Terkoneksi ke : ");
  lcd.setCursor(0,3);
  lcd.print(ssid);
  delay(1000);
  lcd.clear();
}


void displayNTPTime()
{
  //lcd.clear();
  //lcd.home();
  //first parameter: Time zone in floating point (for India); second parameter: 1 for European summer time; 2 for US daylight saving time (contributed by viewwer, not tested by me)
  //Serial.println("displayNTPTime"); //DEBUG
  dateTime = NTPch.getNTPtime(6, 2);
  
  // check dateTime.valid before using the returned time
  // Use "setSendInterval" or "setRecvTimeout" if required
  if(dateTime.valid)
  {
    //NTPch.printDateTime(dateTime);
    byte actualHour = dateTime.hour;
    byte actualMinute = dateTime.minute;
    byte actualSecond = dateTime.second;
    int actualYear = dateTime.year;
    byte actualMonth = dateTime.month;
    byte actualDay =dateTime.day;
    byte actualdayofWeek = dateTime.dayofWeek;
    lcd.setCursor(0,0);
    if(actualHour<10)
      lcd.print("0");
    lcd.print(actualHour);
    lcd.print(":");
    if(actualMinute<10)
      lcd.print("0");
    lcd.print(actualMinute);
    lcd.print(":");
    if(actualSecond<10)
      lcd.print("0");
    lcd.print(actualSecond);
    lcd.print(" ");
    if(actualDay<10)
      lcd.print("0");
    lcd.print(actualDay);
    lcd.print(":");
    actualMonth--;
    lcd.print(bulan[actualMonth]);
    lcd.print(":");
    lcd.print(actualYear);
  }
}

void processOpenWeatherMap(){
  // connect to server  
  //Serial.println("processOpenWeatherMap");
  boolean ok = client.connect(server, 80);
  boolean beginFound = false;
  while(!ok)
  {
    Serial.print(".");
    delay(500);        
  }
  //delay(500);
  //Send request to resource
  client.print("GET ");
  client.print(resource);
  client.println(" HTTP/1.1");
  client.print("Host: ");
  client.println(server);
  client.println("Connection: close");
  client.println();
    
  //delay(100);
    
   //Reading stream and remove headers
   //client.setTimeout(10000);
   boolean ok_header = ok_header = client.find("\r\n\r\n");
   
  //while(!ok_header){
  // 
  // }
         
  client.readBytes(response, 800);
        
  // uncomment line below to see data received for debugging purposes or just fun    
  //Serial.println(response);     //DEBUG
        
  // process JSON gunakan template : https://bblanchon.github.io/ArduinoJson/assistant/
  const size_t bufferSize = JSON_ARRAY_SIZE(1) + JSON_OBJECT_SIZE(1) + 2*JSON_OBJECT_SIZE(2) + JSON_OBJECT_SIZE(4) + JSON_OBJECT_SIZE(5) + JSON_OBJECT_SIZE(6) + JSON_OBJECT_SIZE(12) + 390;
  DynamicJsonBuffer jsonBuffer(bufferSize);

  // Kadang stream header tidak valid
  // Kadang OWM mengikutkan data invalid setelah header
  // Yang akan mengakibatkan parsing gagal
  if(int(response[0]) != 123)
  {
    Serial.println("Wrong start char detected");
    int i = 0;
    while(!beginFound)
    {
      if(int(response[i]) == 123)
      { // check for the "{" 
        beginFound = true;
        Serial.print("{ found at ");
        Serial.println(i);
      }
      i++;
    }
    int eol = sizeof(response);
    Serial.print("Length = ");
    Serial.println(eol);
  
    //restructure by shifting the correct data
    //Serial.println("restructure");
    for(int c=0; c<(eol-i); c++){
      response[c] = response[((c+i)-1)];
      Serial.print(response[c]);
    }
    Serial.println("Done...");
  }

  JsonObject& root = jsonBuffer.parseObject(response);
  if (!root.success()) 
  {
    Serial.println("JSON parsing failed!");
  } 
  else
  {
        //Serial.println("JSON parsing worked!");
  }

  float coord_lon = root["coord"]["lon"]; // 112.43
  float coord_lat = root["coord"]["lat"]; // -7.47

  JsonObject& weather0 = root["weather"][0];
  int weather0_id = weather0["id"]; // 802
  const char* weather0_main = weather0["main"]; // "Clouds"
  const char* weather0_description = weather0["description"]; // "scattered clouds"
  const char* weather0_icon = weather0["icon"]; // "03n"

  const char* base = root["base"]; // "stations"

  JsonObject& main = root["main"];
  int main_temp = main["temp"]; // 28
  int main_pressure = main["pressure"]; // 1010
  int main_humidity = main["humidity"]; // 83
  int main_temp_min = main["temp_min"]; // 28
  int main_temp_max = main["temp_max"]; // 28

  int visibility = root["visibility"]; // 8000

  float wind_speed = root["wind"]["speed"]; // 4.1
  int wind_deg = root["wind"]["deg"]; // 20

  int clouds_all = root["clouds"]["all"]; // 40

  long dt = root["dt"]; // 1494153000

  JsonObject& sys = root["sys"];
  int sys_type = sys["type"]; // 1
  int sys_id = sys["id"]; // 8024
  float sys_message = sys["message"]; // 0.0072
  const char* sys_country = sys["country"]; // "ID"
  long sys_sunrise = sys["sunrise"]; // 1494109947
  long sys_sunset = sys["sunset"]; // 1494152465

  long id = root["id"]; // 1635111
  const char* namecity = root["name"]; // "Mojokerto"
  int cod = root["cod"]; // 200

  //terjemahkan kondisi cuaca
  if(weather0_main="Clouds")
    weather0_main="Berawan";
  lcd.setCursor(0,1);
  lcd.print("Kota  : ");
  lcd.print(namecity);
  lcd.setCursor(0,2);
  lcd.print("Suhu  : ");
  lcd.print(main_temp);
  lcd.print(" C");
  lcd.setCursor(0,3);
  lcd.print("Cuaca : ");
  lcd.print(weather0_main);
  
  client.stop(); // disconnect from server
/*  for(int x=0; x<10; x++)
  { // wait for new connection with progress indicator
    Serial.print(".");
    delay(99999); // the OWM free plan API does NOT allow more then 60 calls per minute
  }
  Serial.println("");*/
}
