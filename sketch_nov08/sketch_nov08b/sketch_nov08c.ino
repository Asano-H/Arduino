#define myLED_1 11
#define switch 3
int n;
int sw=0;
void setup() {
  pinMode(myLED_1, OUTPUT);
  pinMode(switch,INPUT);
}

void loop() {
  sw = digitalRead(switch);
  if(sw==HIGH){
    for(n=256;n>0;n--){
      analogWrite(myLED_1,n);
      delay(10);
    }
    digitalWrite(myLED_1, LOW);
    sw = digitalRead(switch);
  }else{
    digitalWrite(myLED_1,LOW);
    }
}
