/*
 * Created by: Seb Blair
 * Purpose: For purpose of UoG Open Days assignment, convert the 
 *          transmitted signal from the Tx over the oscilliscope from 
 *          waveform -> binary -> decimal -> ASCII 
 *          Then also calculate the transmission speed bits*timesDivision
 * 
 * Notes: Selects and sends a random char over serial on power cycle.
*/

void setup() {
  int baudRate[] = {4800,9600,19200};
  randomSeed (analogRead(2));
  Serial.begin(baudRate[random(0,3)]);
}

void loop() 
{
  // prints value as string in binary (base 2) also prints ending line break:
  randomSeed (analogRead(5));
  int startingPos = 33;
  int selectedPos = random(0,94);
  //Serial.println(grouping);
  char symbol = (char)(startingPos + selectedPos);

  while(true)
  {
    Serial.print(symbol);
    delay(2000);
  }
  
}
