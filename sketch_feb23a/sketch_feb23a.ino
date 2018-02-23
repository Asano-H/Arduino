#include <Servo.h>

Servo headservo;
Servo rightservo;
Servo leftservo;

#define pico_sleep	2
#define pico_reset	4
#define pico_pc0	5
#define pico_pc1	6
#define pico_pc2	7
#define pico_pc3	8


void setup(){

	headservo.attach(11);	/*頭　　11ピン*/
	rightservo.attach(12);	/*右腕　12ピン*/
	leftservo.attach(13);	/*左腕　13ピン*/

  

}

void loop() {
 

}
