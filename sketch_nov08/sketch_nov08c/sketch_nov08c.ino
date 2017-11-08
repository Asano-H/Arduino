#define myLED_1 11
int n;
void setup() {
  pinMode(myLED_1, OUTPUT);  
}

void loop() {
  for(n=256;n>0;n--){
    analogWrite(myLED_1,n);
    delay(10);
  }
  digitalWrite(myLED_1, LOW);
}
