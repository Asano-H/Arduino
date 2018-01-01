#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;


void setup()
{
	myservo1.attach(11);	/*右腕*/
	myservo2.attach(12);	/*左腕*/

}

void loop()
{
	myservo1.write(0);
	delay(1000);
	myservo1.write(180);
	delay(1000);
	myservo
}

