#define switch 3

int n=0;
int i;
void setup() {
  pinMode(switch, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
	if(digitalRead(switch)==LOW){
		n++;
	}
	while(digitalRead(switch)==LOW){
		if(digitalRead(switch)==HIGH){
			break;
		}
	}
	if(n==1){
		digitalWrite(10, HIGH);
	}else if(n==2){
		digitalWrite(11, HIGH);
	}else if(n==3){
		digitalWrite(12, HIGH);
	}else if(n==4){
		digitalWrite(13, HIGH);
	}else{
		n=0;
		for(i=10;i<=13;i++){
			digitalWrite(i, LOW);
		}
	}
	delay(1000);
}
