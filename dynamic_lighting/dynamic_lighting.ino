#define myLED_right	2
#define myLED_left	3
#define myLED_red	5
#define myLED_green	6
#define myLED_blue	7

#define my_swith 8

int color;
int n=0;

void LED_red(){
	digitalWrite(myLED_right, HIGH);
	digitalWrite(myLED_left, HIGH);
	digitalWrite(myLED_red,HIGH);

	for(int i=0;n==LOW;i++){
		digitalWrite(myLED_left,LOW);
		digitalWrite(myLED_left, HIGH);
		digitalWrite(myLED_right,LOW);
		digitalWrite(myLED_right, HIGH);
	}

}

void LED_green(){
	digitalWrite(myLED_right, HIGH);
	digitalWrite(myLED_left, HIGH);
	digitalWrite(myLED_green,HIGH);

	for(int i=0;n==LOW;i++){
		digitalWrite(myLED_left,LOW);
		digitalWrite(myLED_left, HIGH);
		digitalWrite(myLED_right,LOW);
		digitalWrite(myLED_right, HIGH);
	}

}

void LED_green(){
	digitalWrite(myLED_right, HIGH);
	digitalWrite(myLED_left, HIGH);
	digitalWrite(myLED_blue,HIGH);

	for(int i=0;n==LOW;i++){
		digitalWrite(myLED_left,LOW);
		digitalWrite(myLED_left, HIGH);
		digitalWrite(myLED_right,LOW);
		digitalWrite(myLED_right, HIGH);
	}

}


void setup() {
	pinMode(myLED_right, OUTPUT);
	pinMode(myLED_left, OUTPUT);
	pinMode(myLED_red, OUTPUT);
	pinMode(myLED_green, OUTPUT);
	pinMode(myLED_blue, OUTPUT);

	n=digitalRead(my_switch);
	if(n==HIGH){
		color = random(2);
		switch(color){
			case 0: LED_red(); break;
			case 1: LED_green(); break;
			case 2: LED_blue(); break;
		}


	}



	LED_red();

  
}

void loop() {



}
