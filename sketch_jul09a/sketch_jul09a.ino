#define myLED_right 2
#define myLED_left 3
#define myLED_red	5
#define myLED_green	6
#define myLED_blue	7

void setup() {
	pinMode(myLED_right, OUTPUT);
	pinMode(myLED_left, OUTPUT);
	pinMode(myLED_red, OUTPUT);
	pinMode(myLED_green, OUTPUT);
	pinMode(myLED_blue, OUTPUT);

//消灯
	digitalWrite(myLED_left, HIGH);
	digitalWrite(myLED_right, HIGH);

}

void loop() {


//右：白をつける
	digitalWrite(myLED_red, HIGH);
	digitalWrite(myLED_green, HIGH);
	digitalWrite(myLED_blue, HIGH);

	digitalWrite(myLED_right, LOW);
	delay(1);

//消灯
	digitalWrite(myLED_right, HIGH);

//左：赤をつける
	digitalWrite(myLED_red, HIGH);
	digitalWrite(myLED_green, LOW);
	digitalWrite(myLED_blue, LOW);

	digitalWrite(myLED_left, LOW);
	delay(1);

//消灯
	digitalWrite(myLED_left, HIGH);

	}
