String receivedMessage = "";  // Variable to store the complete message

void setup() 
{
  // Start the Serial Monitor at a baud rate of 115200
  Serial.begin(115200);
}

void loop() 
{
  // Check if data is available in the Serial buffer
  while (Serial.available()) 
  {
    char incomingChar = Serial.read();  // Read each character from the buffer
    
    if (incomingChar == '\n')   // Check if the user pressed Enter (new line character)
    {
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
