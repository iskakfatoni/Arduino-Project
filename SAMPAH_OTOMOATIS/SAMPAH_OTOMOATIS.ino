#include <LiquidCrystal_I2C.h>
#include <Servo.h>

Servo servoSaya;
LiquidCrystal_I2C lcdSaya(20, 4);

int nilaiDurasi, nilaiJarak, pos;

void setup() {
  lcdSaya.autoAddress();
  lcdSaya.begin();
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
  pinMode(13, OUTPUT);
  servoSaya.attach(9);
  Serial.begin(9600);
}

void loop() {
  triggerUS();
  cekUS();
}

void triggerUS()
{
  digitalWrite(7,LOW);
  delayMicroseconds(2);
  digitalWrite(7,HIGH);
  delayMicroseconds(10);
  digitalWrite(7,LOW);
  nilaiDurasi=pulseIn(8,HIGH);
  nilaiJarak=(nilaiDurasi/2)/29.1;
  Serial.println(jarak);
}

  
void cekUS()
{  
  if(nilaiJarak<=50)
  {
    digitalWrite(13, HIGH);
    lcdSaya.println("Silahkan");
    for (pos = 0; pos <= 180; pos ++)
    { 
      servoSaya.write(pos);
      delay(15);
    }
  }
  else
  {
    digitalWrite(13, LOW);
    lcdSaya.println("Terima Kasih");
    for (pos = 180; pos >= 0; pos --)
    { 
      servoSaya.write(pos);
      delay(15);
    }
  }
}
