#define switch 3

int dice

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
        	break;
     	case 2:
        	digitalWrite(LED_B, HIGH);
        	break;
      case 3:
          digitalWrite(LED_A, HIGH);
          digitalWrite(LED_B, HIGH);
      case 4:
          digitalWrite(LED_B, HIGH);
          digitalWrite(LED_C, HIGH);
      	default:
        	// do something
  	}
}

void loop() {
  

}
