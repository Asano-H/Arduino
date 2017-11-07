#define myLED_1 13
#define myLED_2 12
#define myLED_3 10
#define myLED_4 8
#define switch 3

int n=0;
int num;
void setup() {
  pinMode(myLED_1, OUTPUT);
  pinMode(myLED_2, OUTPUT);
  pinMode(myLED_3, OUTPUT);
  pinMode(myLED_4, OUTPUT);

}

void loop() {
	n=digitalRead(switch);
	if(n==HIGH){
		for(num=100;num==HIGH;num=num+100){
  			digitalWrite(myLED_1, HIGH);
  			delay(num);
  			digitalWrite(myLED_1, LOW);
  			digitalWrite(myLED_2, HIGH);;
  			delay(num);
  			digitalWrite(myLED_2, LOW);
  			digitalWrite(myLED_3, HIGH);
  			delay(num);
  			digitalWrite(myLED_3, LOW);
  			digitalWrite(myLED_4, HIGH);
  			delay(num);
  			digitalWrite(myLED_4, LOW);
  			n=digitalRead(switch);
  			if(n==LOW){
  				break;
  			}
  		}
  	}
}
