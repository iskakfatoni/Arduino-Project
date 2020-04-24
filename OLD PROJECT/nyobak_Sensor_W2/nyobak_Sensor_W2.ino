#define pompa 11
#define buzzer 12
#define flame 13
int sensor_api;
int berulang;

void setup()
{
  pinMode(pompa,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(flame,INPUT);
  digitalWrite(buzzer,HIGH);
  delay(500);
  digitalWrite(buzzer,LOW);
  Serial.begin(9600);
}

void loop()
{
  sensor_api=digitalRead(flame);
  Serial.print(" Nilai sensor api =  ");
  Serial.println(sensor_api);
  delay(500);

  if(sensor_api=0)
  {
    for(int i=0;i<=50;i++)   //buzzer nyala 3 detik
    {
      digitalWrite(buzzer,HIGH);
      delay(500);
      digitalWrite(buzzer,LOW);
      delay(100);
    }
    digitalWrite(pompa,HIGH);
    digitalWrite(buzzer,HIGH);
    delay(500);
    digitalWrite(buzzer,LOW);
    delay(100);
  }
  else
  {
    digitalWrite(buzzer,LOW);
    digitalWrite(pompa,LOW);
  }
}
