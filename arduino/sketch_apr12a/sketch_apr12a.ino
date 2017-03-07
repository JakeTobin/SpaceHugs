/*
SpaceHug
*/
#include <Servo.h>
Servo servoMain; // Define our Servo
int deg=0;

void setup()
{
   servoMain.attach(10); // servo on digital pin 10
}

void loop()
{
  for (int i=0; i < 90; i++)
  {
   deg++;  
   deg=deg%90;
   servoMain.write(deg);  
   delay(20); 
  }
  
      
}
