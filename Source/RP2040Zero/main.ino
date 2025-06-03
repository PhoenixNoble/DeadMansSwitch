#include <Adafruit_NeoPixel.h>

#define PIN       16
#define NUMPIXELS 1

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 1000

int state = 0;

String receivedMessage = "";  // Variable to store the complete message
void setup() {
  // Start the Serial Monitor at a baud rate of 115200
  Serial.begin(115200);
}

void loop() 
{
  // Check if data is available in the Serial buffer
  while (Serial.available()) 
  {
    char incomingChar = Serial.read();  // Read each character from the buffer
    
    if (incomingChar == '\n') {  // Check if the user pressed Enter (new line character)
      
      receivedMessage += incomingChar;
      if(state == 0)
      {
        if((char)receivedMessage[0] == 'D' && (char)receivedMessage[1] == 'M' && (char)receivedMessage[2] == 'S')
          state = 1;
      }
      // Print the message
      Serial.print(receivedMessage);
      // Clear the message buffer for the next input
      receivedMessage = "";
    }
    else
    {
      // Append the character to the message string
      receivedMessage += incomingChar;
    }
  }
}

int count = 0;
uint32_t NotArmed[2] = {pixels.Color(51, 0, 0),pixels.Color(0, 0, 51)}; 
uint32_t Armed[2] = {pixels.Color(0, 51, 0),pixels.Color(0, 0, 51)};
void setup1()
{
  pixels.begin();
}

void loop1()
{
  pixels.clear();

  for(int i=0; i<NUMPIXELS; i++) 
  {
    if(state == 0)
      pixels.setPixelColor(i, NotArmed[count]);
    else
      pixels.setPixelColor(i, Armed[count]);

    count++;
    if(count == 2)
      count = 0;

    pixels.show();
    delay(DELAYVAL);
  }
}