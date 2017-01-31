#include <SD.h>                      // need to include the SD library
//#define SD_ChipSelectPin 53  //example uses hardware SS pin 53 on Mega2560
#define SD_ChipSelectPin 10  //using digital pin 4 on arduino nano 328
#include <TMRpcm.h>           //  also need to include this library...
#include <SPI.h>

TMRpcm tmrpcm;   // create an object for use in this sketch


const int buttonPin = 5;     // the number of the pushbutton pin
int buttonState = 0;         // variable for reading the pushbutton status

int selection =0 ;

void setup()
{

  tmrpcm.speakerPin = 9; //11 on Mega, 9 on Uno, Nano, etc

  Serial.begin(9600);
  if (!SD.begin(SD_ChipSelectPin)) {  // see if the card is present and can be initialized:
    Serial.println("SD fail");  
    return;   // don't do anything more if not
  }
  pinMode(buttonPin, INPUT);
  tmrpcm.play("13.wav"); //the sound file "music" will play each time the arduino powers up, or is reset
}

void loop()
{
  buttonState = digitalRead(buttonPin);

    if(buttonState == HIGH)
    {
     selection = random(1, 14);
     
          if(selection == 1)
          {
            tmrpcm.play("1.wav");
            Serial.println(selection);
          }
          else if(selection == 2)
          {
            tmrpcm.play("2.wav");
            Serial.println(selection);
          }
          else if(selection == 3)
          {
            tmrpcm.play("3.wav");
            Serial.println(selection);
          }
          else if(selection == 4)
          {
            tmrpcm.play("4.wav");
            Serial.println(selection);
          }
          else if(selection == 5)
          {
            tmrpcm.play("5.wav");
            Serial.println(selection);
          }
          else if(selection == 6)
          {
            tmrpcm.play("6.wav");
            Serial.println(selection);
          }
          else if(selection == 7)
          {
            tmrpcm.play("7.wav");
            Serial.println(selection);
          }
          else if(selection == 8)
          {
            tmrpcm.play("8.wav");
            Serial.println(selection);
          }
          else if(selection == 9)
          {
            tmrpcm.play("9.wav");
            Serial.println(selection);
          }
          else if(selection == 10)
          {
            tmrpcm.play("10.wav");
            Serial.println(selection);
          }
          else if(selection == 11)
          {
            tmrpcm.play("11.wav");
            Serial.println(selection);
          }
          else if(selection == 12)
          {
            tmrpcm.play("12.wav");
            Serial.println(selection);
          }
          else if(selection == 13)
          {
            tmrpcm.play("13.wav");
            Serial.println(selection);
          } 
    }
    
  }
