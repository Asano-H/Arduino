#define myLED_right	2
#define myLED_left	3
#define myLED_red	5
#define myLED_green	6
#define myLED_blue	7

#define myswitch 8

int color_left;
int color_right;

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

//ボタンが押されたとき，色を変える
	if(digitalRead(myswitch)==HIGH){
		color_right = random(3);
		color_left = random(3);
	}

//右目の色を変える
	switch(color_right){
		case 0:	LED_red(myLED_right);
				break;
		case 1:	LED_green(myLED_right);
				break;
		case 2:	LED_blue(myLED_right);
				break;
	}
	digitalWrite(myLED_right, HIGH);

//左目の色を変える
		switch(color_left){
		case 0:	LED_red(myLED_left);
				break;
		case 1:	LED_green(myLED_left);
				break;
		case 2:	LED_blue(myLED_left);
				break;
	}
	digitalWrite(myLED_left, HIGH);


}
