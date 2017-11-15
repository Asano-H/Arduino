#define switch 3

int dice
ms = 100
int ransu(void){
	int ra;
	srand((unsigned)time(NULL));
	ra = rand()%6;
	return ra;

}
void setup() {
 	pinMode(switch, INPUT);
 	pinMode(LED_A, OUTPUT);
 	pinMode(LED_B, OUTPUT);
 	pinMode(LED_C, OUTPUT);
 	pinMode(LED_D, OUTPUT);

 	switch (dice) {
    	case 1:
        	digitalWrite(LED_A, HIGH);
          delay(ms);
        	break;
     	case 2:
        	digitalWrite(LED_B, HIGH);
          delay(ms);
        	break;
      case 3:
          digitalWrite(LED_A, HIGH);
          digitalWrite(LED_B, HIGH);
          delay(ms);
          break;
      case 4:
          digitalWrite(LED_B, HIGH);
          digitalWrite(LED_C, HIGH);
          break;
      case 5:
          digitalWrite(LED_A, HIGH);
          digitalWrite(LED_B, HIGH);
          digitalWrite(LED_C, HIGH);
          break;
      case 6;
          digitalWrite(LED_B, HIGH);
          digitalWrite(LED_C, HIGH);
          digitalWrite(LED_D, HIGH);
          break;
  	}
}

void loop() {
  

}
