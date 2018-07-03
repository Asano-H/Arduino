#define myLED_right	2
#define myLED_left	3
#define myLED_red	5
#define myLED_green	6
#define myLED_blue	7

#define myswitch 8

int color;
int LED_time=100000;
int LED_switch=0;

void LED_red(){
	digitalWrite(myLED_right, HIGH);
	digitalWrite(myLED_left, HIGH);
	digitalWrite(myLED_red,HIGH);

	while(LED_time){
		digitalWrite(myLED_left,LOW);
		digitalWrite(myLED_left, HIGH);
		digitalWrite(myLED_right,LOW);
		digitalWrite(myLED_right, HIGH);
		LED_time--;
	}

}

void LED_green(){
	digitalWrite(myLED_right, HIGH);
	digitalWrite(myLED_left, HIGH);
	digitalWrite(myLED_green,HIGH);

	while(LED_time){
		digitalWrite(myLED_left,LOW);
		digitalWrite(myLED_left, HIGH);
		digitalWrite(myLED_right,LOW);
		digitalWrite(myLED_right, HIGH);
		LED_time--;
	}

}

void LED_blue(){
	digitalWrite(myLED_right, HIGH);
	digitalWrite(myLED_left, HIGH);
	digitalWrite(myLED_blue,HIGH);

	while(LED_time){
		digitalWrite(myLED_left,LOW);
		digitalWrite(myLED_left, HIGH);
		digitalWrite(myLED_right,LOW);
		digitalWrite(myLED_right, HIGH);
		LED_time--;
	}

}


void setup() {
	pinMode(myLED_right, OUTPUT);
	pinMode(myLED_left, OUTPUT);
	pinMode(myLED_red, OUTPUT);
	pinMode(myLED_green, OUTPUT);
	pinMode(myLED_blue, OUTPUT);
	pinMode(myswitch, INPUT);


  
}

void loop() {

	LED_switch =digitalRead(myswitch);
	if(LED_switch==HIGH){
		color = random(2);
		if(color==0){
			LED_red();
		}else if(color==1){
			LED_green();
		}else if(color==2){
			LED_blue();
		}
	}else{
		digitalWrite(myLED_red, LOW);
		digitalWrite(myLED_green, LOW);
		digitalWrite(myLED_blue, LOW);
		digitalWrite(myLED_right, LOW);
		digitalWrite(myLED_left, LOW);
	}



}
