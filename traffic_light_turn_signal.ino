#include <Servo.h>
Servo Servo1; 


void setup() {
  // put your setup code here, to run once:
   pinMode(12, OUTPUT);
   pinMode(11, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(5, OUTPUT);
 
 Servo1.attach(3); 
 Servo1.write(0);

}

void loop() {

digitalWrite(10, HIGH); // red 1 on
digitalWrite(7, HIGH); // green 2 on
  delay(5000); // wait 5 seconds
digitalWrite(6, HIGH); // yellow 2 on
digitalWrite(7, LOW); // green 2 off
  delay(1000); // wait 1 second

digitalWrite(6, LOW); // yellow 2 off
digitalWrite(5, HIGH); // red 2 on

if (digitalRead (8) == LOW) // if reads 8 as "low" ~ [then turn signal on]
{digitalWrite (4, HIGH); // signal light on

Servo1.write (90); 
 delay(1000);
Servo1.write (0);

  delay(1000); // wait 3 seconds
digitalWrite (4, LOW); // signal light off
digitalWrite (3, HIGH);


}

digitalWrite(10, LOW); // red 1 off
digitalWrite(12, HIGH); // green 1 on

  delay(5000); // wait 5 seconds
digitalWrite(12, LOW); // green 1 off
digitalWrite(11, HIGH); // yellow 1 on
  delay(1000); // wait 1 second
digitalWrite(11, LOW); // yellow 1 off 
digitalWrite(5, LOW); // red 2 off




}
