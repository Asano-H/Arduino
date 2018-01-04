#include "Arduino.h"
#include "jan04.h"

pikapika::pikapika(int times,int pin){
	myled_time = times;
	myled_pin = pin;
	pinMode(myled_pin, OUTPUT);
}

void pikapika::tenmetsu(int times){
	digitalWrite(myled_pin, HIGH);
	delay(times);
	digitalWrite(myled_pin, LOW);
	delay(times);

}