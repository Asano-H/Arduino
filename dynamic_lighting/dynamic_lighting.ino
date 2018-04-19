#define myLED_right	2
#define myLED_left	3
#define myLED_red	5
#define myLED_blue	6
#define myLED_green	7

void setup() {
	pinMode(myLED_right, OUTPUT);
	pinMode(myLED_left, OUTPUT);
	pinMode(myLED_red, OUTPUT);
	pinMode(myLED_blue, OUTPUT);
	pinMode(myLED_green, OUTPUT);

	digitalWrite(myLED_right, HIGH);
	digitalWrite(myLED_left, HIGH);
	digitalWrite(myLED_red,HIGH);
	delay(10);
  
}

void loop() {
	digitalWrite(myLED_left,LOW);
	digitalWrite(myLED_left, HIGH);
	digitalWrite(myLED_right,LOW);
	digitalWrite(myLED_right, HIGH);


}
