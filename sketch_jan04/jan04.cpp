#include "Arduino.h"
#include "jan04.h"

/*コンストラクタ*/
pikapika::pikapika(int time,int pin){
	myled_time = time;
	myled_pin = pin;
	pinMode(myled_pin, OUTPUT);
}

void pikapika::tenmetsu(int time){
	digitalWrite(myled_pin, HIGH);
	delay(time);
	digitalWrite(myled_pin, LOW);
	delay(time);

}