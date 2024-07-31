#include <Servo.h> //includes the servo library

Servo arm; //create a servo named arm; we can name it whatever we want!

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //starts our serial monitor with a refresh rate of 9600
arm.attach(5); //attaches our servo to D5; this ensures it gets PWM signals. Look for a ~ on the board to see if a port is capable of PWM or not.
}

void loop() {
// put your main code here, to run repeatedly:
int x = 0; //create a local variable named x to hold a value

while (x<90) //repeat the following while x is less than 90
{
  arm.write(x); //write our servo to an angle of X
  x = x+5; //add 5 to our holder variable, if this line is missing we will have an infitinite loop that will NEVER END!
  delay(10); //short delay to prevent our servo from being overworked
}
//this code will write our servo from 0 to 90 stepping by 5 each time, before abruptly jumping back to 0 once we hit 90

}