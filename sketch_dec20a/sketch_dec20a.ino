#include <Servo.h>

Servo myservo1;


void setup()
{
	myservo1.attach(11);
}

void loop()
{
	myservo1.write(0);
	delay(1000);
	myservo1.write(90);
	delay(1000);
}

