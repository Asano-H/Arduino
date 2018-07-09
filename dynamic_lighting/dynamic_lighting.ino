#define myLED_right	12
#define myLED_left	13
#define myLED_red	0
#define myLED_green	1
#define myLED_blue	2

#define myswitch 8

#define COLOR_NUM 3

int color_left;
int color_right;
int flag=0;

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
	flag = (!(flag));
	if(flag){
		color_right = random(COLOR_NUM);
		color_left = random(COLOR_NUM);
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
