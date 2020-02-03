int ledPin[] = {
  9,8,7,6,5};   //number of pins used to light led
int maxCount = 256; //used to loop through number
int delayInterval = 250; //time difference between each light change
  
void setup() {
  // put your setup code here, to run once:
for(int i = 0; i < 6; i++) //to make each pin as an output pin
{
  pinMode(ledPin[i],OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
for(int counter = 0; counter< maxCount; counter++)
{
  displayBinary(counter);
  delay(delayInterval);
  }
}
void displayBinary(byte numToShow)
{
  for (int i = 0; i < 5; i++)
  {
    //bitread used to cycle bit through each number
    //1 hai to led on and 0 hai to led off 
    if (bitRead(numToShow, i)==1)
    {
      digitalWrite(ledPin[i],HIGH);
    }
    else
    {
      digitalWrite(ledPin[i],LOW);
    }
  }
}
