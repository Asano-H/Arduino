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
        	digitalWrite(, HIGH);
        	break;
     	case :
        	// do something
        	break;
      	default:
        	// do something
  	}
}

void loop() {
  

}
