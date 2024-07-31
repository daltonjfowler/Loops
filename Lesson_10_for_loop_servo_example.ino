#include <Servo.h> //includes the servo library

Servo arm; //create a servo named arm; we can name it whatever we want!

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //starts our serial monitor with a refresh rate of 9600
arm.attach(5); //attaches our servo to D5; this ensures it gets PWM signals. Look for a ~ on the board to see if a port is capable of PWM or not.
}

void loop() {
// put your main code here, to run repeatedly:
//step to the rigbt
for (int i = 0; i <180; i = i+2) //a for loop; this will step to 180 degrees from 0 by 2 degrees each time
{
  arm.write(i); //write our servo to the angle i, which increases by 2 each time
  Serial.print(i); //print the angle we are at to the serial monitor
  delay(10); //short delay to prevent overworking our servo
}
//step to the left
for (int i = 180; i >0; i = i-2) //a for loop; this will step to 0 degrees from 180 by 2 degrees each time
{
  arm.write(i); //write our servo to the angle i, which decreases by 2 each time
  Serial.print(i); //print the angle we are at to the serial monitor
  delay(10); //short delay to prevent overworking our servo
}

}