/*
Arduino-Drum 
Project's decription can be found here: http://arduinodrumkit.blogspot.com/
*/

#include <MIDI.h> 
MIDI_CREATE_DEFAULT_INSTANCE();

//input analog
const int Pad1 = A1;
const int Pad2 = A2;
const int Pad3 = A3;
const int Pad4 = A4;

//ambang batas volumeThreshold,
const int volumeThreshold = 380;

//variabel untuk menyimpan nilai pad
int Drum1_val = 0;
int Drum2_val = 0;
int Drum3_val = 0;
int Drum4_val = 0;

//variabel untuk menjadikan nilai digital
int signalTest1 = 0;
int signalTest2 = 0;
int signalTest3 = 0;
int signalTest4 = 0;

//midi mapping - addictive drums mapping
byte snareDrum = 38;
byte kick = 36; 
byte hihatClosed = 52;
byte crash = 77;
byte hihatOpened = 56;

void setup()
{
  MIDI.begin(4);
  //serial monitor
  Serial.begin(115200); 
}

void loop()
{ 
  /*1st pad*/
  //membaca Pad1
  if(analogRead(Pad1) >= volumeThreshold) 
  {
  signalTest1 = 1; 
  }
  
  if(signalTest1 == 1 && analogRead(Pad1) <= (volumeThreshold-100))
  {
    //sets the velocity
    Drum1_val= analogRead(Pad1);
    int velocity = Drum1_val/3 + 56;
    if(velocity >= 120)
      velocity = 125;
    else if(velocity < 0)
      velocity = 0;
    Serial.println (Pad1);
    
    //sends midi signal over USB serial port
    MIDI.sendNoteOn(hihatOpened, velocity, 1);
    MIDI.sendNoteOff(hihatOpened, 0, 1);
    //sets signalTest again to 0
    signalTest1 = 0;   
  }

  /*2nd pad*/
  if(analogRead(Pad2) >= volumeThreshold) 
  {
    signalTest2 = 1;
  } 
    Drum2_val = analogRead(Pad2);
  if(signalTest2 == 1 && analogRead(Pad2) <= (volumeThreshold-95))
  {
    Drum2_val= analogRead(Pad2);
    int velocity = Drum2_val/3 + 38;
    if(velocity >= 120)
      velocity = 125;
    else if(velocity < 0)
      velocity = 0;  
      
    MIDI.sendNoteOn(snareDrum, velocity, 1);
    MIDI.sendNoteOff(snareDrum, 0, 1);
    signalTest2 = 0;
  }

  /*3rd pad*/
  if(analogRead(Pad3) >= volumeThreshold) 
  {
    signalTest3 = 1; 
  }
    Drum3_val = analogRead(Pad3);
  if(signalTest3 == 1 && analogRead(Pad3) <= (volumeThreshold-95))
  {
    Drum3_val= analogRead(Pad3);
    int velocity = Drum3_val/2 + 53;
    if(velocity >= 120)
      velocity = 125;
    else if(velocity < 0)
      velocity = 0;
      
    MIDI.sendNoteOn(hihatClosed, velocity, 1);
    MIDI.sendNoteOff(hihatClosed, 0, 1);
    signalTest3 = 0;
  }

  /*4th pad*/
  if(analogRead(Pad4) >= volumeThreshold) 
  {
    signalTest4 = 1; 
  }
  if(signalTest4 == 1 && analogRead(Pad4) <= (volumeThreshold-95))
  {
    Drum4_val= analogRead(Pad4);
    int velocity = Drum4_val/3 + 77;
    if(velocity > 120)
      velocity = 125;
    else if(velocity < 0)
      velocity = 0;  
      
    MIDI.sendNoteOn(crash, velocity, 1);
    MIDI.sendNoteOff(crash, 0, 1);
    signalTest4 = 0;
  }

 }

