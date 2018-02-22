#define pico_reset 4
#define pico_pc0 5
#define pico_pc1 6
#define pico_pc2 7
#define pico_pc3 8
#define pico_sleep  2



void picoms_00(){
	digitalWrite(pico_pc3, LOW);	/*0000*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, LOW);
}

void picoms_01(){
	digitalWrite(pico_pc3, LOW);	/*0001*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, HIGH);
}

void picoms_02(){
	digitalWrite(pico_pc3, LOW);	/*0010*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, LOW);
}

void picoms_03(){
	digitalWrite(pico_pc3, LOW);	/*0011*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, HIGH);
}

void picoms_04(){
	digitalWrite(pico_pc3, LOW);	/*0100*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, LOW);
}

void picoms_05(){
	digitalWrite(pico_pc3, LOW);	/*0101*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, HIGH);
}

void picoms_06(){
	digitalWrite(pico_pc3, LOW);	/*0110*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, LOW);
}

void picoms_07(){
	digitalWrite(pico_pc3, LOW);	/*0111*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, HIGH);
}

void picoms_08(){
	digitalWrite(pico_pc3, HIGH);	/*1000*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, LOW);
}

void picoms_09(){
	digitalWrite(pico_pc3, HIGH);	/*1001*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, HIGH);
}

void picoms_10(){
	digitalWrite(pico_pc3, HIGH);	/*1010*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, LOW);
}

void picoms_11(){
	digitalWrite(pico_pc3, HIGH);	/*1011*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, HIGH);
}

void picoms_12(){
	digitalWrite(pico_pc3, HIGH);	/*1100*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, LOW);
}

void picoms_13(){
	digitalWrite(pico_pc3, HIGH);	/*1101*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, HIGH);
}

void picoms_14(){
	digitalWrite(pico_pc3, HIGH);	/*1110:一緒にチョコレート食べませんか*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, LOW);
}

void picoms_15(){
	digitalWrite(pico_pc3, HIGH);	/*1111*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, HIGH);
}

void setup()
{
	pinMode(pico_reset, OUTPUT);
	pinMode(pico_pc3, OUTPUT);
	pinMode(pico_pc2, OUTPUT);
	pinMode(pico_pc1, OUTPUT);
	pinMode(pico_pc0, OUTPUT);

	digitalWrite(pico_sleep, LOW);
	delay(100);
	digitalWrite(pico_reset, LOW);
	delay(100);
	digitalWrite(pico_reset, HIGH);
	delay(100);

	picoms_14();
	// digitalWrite(pico_pc3, HIGH);
	// digitalWrite(pico_pc2, HIGH);
	// digitalWrite(pico_pc1, HIGH);
	// digitalWrite(pico_pc0, LOW);
	delay(5000);


	picoms_11();
	// digitalWrite(pico_pc3, HIGH);
	// digitalWrite(pico_pc2, LOW);
	// digitalWrite(pico_pc1, HIGH);
	// digitalWrite(pico_pc0, HIGH);

	digitalWrite(pico_sleep, HIGH);
	delay(100);
	digitalWrite(pico_sleep, LOW);
	delay(100);
	
	digitalWrite(pico_pc0, LOW);
	delay(8000);

	



}

void loop()
{

}

