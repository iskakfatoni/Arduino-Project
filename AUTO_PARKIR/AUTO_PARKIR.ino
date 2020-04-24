#include  <Servo.h>
#include  <LiquidCrystal_I2C.h>

#define   pinServoMasuk     5
#define   pinServoKeluar    6
#define   pinTriggerMasuk   7
#define   pinEchoMasuk      8
#define   pinTriggerKeluar  9
#define   pinEchoKeluar     10

Servo servoMasuk;
Servo servoKeluar;
LiquidCrystal_I2C lcd (16, 2);

bool nilaiUltraIN=0;
bool nilaiUltraOUT=0;

void setup() {
  pinMode(pinTriggerMasuk, OUTPUT);
  pinMode(pinEchoMasuk, INPUT);
  pinMode(pinTriggerKeluar, OUTPUT);
  pinMode(pinEchoKeluar, INPUT);

  servoMasuk.attach(pinServoMasuk);
  servoKeluar.attach(pinServoKeluar);

  Serial.begin(9600);
  lcd.autoAddress();
  lcd.begin();
  lcd.clear();
  servoKeluar.write(0);
  servoMasuk.write(0);
}

void loop() 
{
  lcd.setCursor(0,0);
  lcd.print("  AUTO PARKIR");
  cekMobilMasuk();
  cekMobilKeluar();
}

void cekMobilMasuk(){
  digitalWrite(pinTriggerMasuk, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTriggerMasuk, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTriggerMasuk, LOW);
  delayMicroseconds(10);
  long durasiMasuk=pulseIn(pinEchoMasuk,HIGH);
  long jarakMasuk=durasiMasuk*0.034/2+1;
  if(jarakMasuk<=10){
    servoMasuk.write(90);
    lcd.setCursor(0,1);
    lcd.print(" Selamat Datang");
    delay(4000);
  }
  else {
    servoMasuk.write(0);
    lcd.setCursor(0,1);
    lcd.print("                ");
  }
  Serial.print("Jarak Masuk : ");
  Serial.println(jarakMasuk);
}

void cekMobilKeluar(){
  digitalWrite(pinTriggerKeluar, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTriggerKeluar, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTriggerKeluar, LOW);
  delayMicroseconds(10);
  long durasiKeluar=pulseIn(pinEchoKeluar,HIGH);
  long jarakKeluar=durasiKeluar*0.034/2+1;
  if(jarakKeluar<=10){
    servoKeluar.write(90);
    lcd.setCursor(0,1);
    lcd.print(" Selamat Jalan");
    delay(4000);
  }
  else {
    servoKeluar.write(0);
    lcd.setCursor(0,1);
    lcd.print("                ");
  }
  Serial.print("Jarak Keluar : ");
  Serial.println(jarakKeluar);
}


