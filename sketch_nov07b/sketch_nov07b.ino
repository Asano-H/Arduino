#define myLED_1 13
void setup() {
  pinMode(myLED_1, OUTPUT);

}

void loop() {
  digitalWrite(myLED_1, HIGH);
  delay(1000);
  digitalWrite(myLED_1, LOW);
  delay(1000);
}
