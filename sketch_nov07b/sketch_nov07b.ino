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
  digitalWrite(myLED_1, HIGH);
  delay(1000);
  digitalWrite(myLED_1, LOW);
  delay(1000);
}
