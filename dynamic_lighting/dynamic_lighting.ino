#define myLED_right	2
#define myLED_left	3
#define myLED_red	5
#define myLED_green	6
#define myLED_blue	7

#define myswitch 8

int color;
int LED_switch=0;

void LED_red(int sign){
	digitalWrite(myLED_red, HIGH);
	digitalWrite(myLED_green, LOW);
	digitalWrite(myLED_blue, LOW);

	digitalWrite(sign,LOW);
	delay(1);
	}

void LED_green(int sign){
	digitalWrite(myLED_red, LOW);
	digitalWrite(myLED_green, HIGH);
	digitalWrite(myLED_blue, LOW);

	digitalWrite(sign,LOW);
	delay(1);
	
}

void LED_blue(int sign){
	digitalWrite(myLED_red, LOW);
	digitalWrite(myLED_green, LOW);
	digitalWrite(myLED_blue, HIGH);

	digitalWrite(sign,LOW);
	delay(1);
}

void setup() {
	pinMode(myLED_right, OUTPUT);
	pinMode(myLED_left, OUTPUT);
	pinMode(myLED_red, OUTPUT);
	pinMode(myLED_green, OUTPUT);
	pinMode(myLED_blue, OUTPUT);
	pinMode(myswitch, INPUT);

//消灯
	digitalWrite(myLED_left, HIGH);
	digitalWrite(myLED_right, HIGH);

}

void loop() {

	LED_red(myLED_right);
	digitalWrite(myLED_right, HIGH);

	LED_blue(myLED_left);
	digitalWrite(myLED_left, HIGH);



}
