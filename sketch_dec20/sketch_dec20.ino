#define pico_reset 4
#define pico_pc0 5
#define pico_pc1 6
#define pico_pc2 7
#define pico_pc3 8
#define pico_sleep  2



void setup()
{
	pinMode(pico_reset, OUTPUT);
	pinMode(pico_pc0, OUTPUT);
	pinMode(pico_pc1, OUTPUT);
	pinMode(pico_pc2, OUTPUT);
	pinMode(pico_pc3, OUTPUT);

	digitalWrite(pico_sleep, LOW);
	delay(100);
	digitalWrite(pico_reset, LOW);
	delay(100);
	digitalWrite(pico_reset, HIGH);
	delay(100);

	digitalWrite(pico_pc3, HIGH);
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, LOW);
	delay(8000);


	digitalWrite(pico_pc3, HIGH);
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, HIGH);

	digitalWrite(pico_sleep, HIGH);
	delay(100);
	digitalWrite(pico_sleep, LOW);
	delay(100);
	
	digitalWrite(pico_pc0, LOW);

}

void loop()
{

}

