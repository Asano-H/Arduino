#define myLED_1 11
int n;
void setup() {
  pinMode(myLED_1, OUTPUT);

}

void loop() {
  n=analogRead(0);
  analogWrite(myLED_1,n/4);
}
