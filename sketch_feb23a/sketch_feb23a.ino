#include <Servo.h>
#include <VarSpeedServo.h>

VarSpeedServo headservo;
Servo rightservo;
Servo leftservo;

#define pico_sleep	2	/*D2*/
#define pico_reset	4	/*D4*/
#define pico_pc0	5	/*D5*/
#define pico_pc1	6	/*D6*/
#define pico_pc2	7	/*D7*/
#define pico_pc3	8	/*D8*/

void pico_ms00(){
	digitalWrite(pico_pc3, LOW);	/*0000:しゃべってくれない？*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms01(){
	digitalWrite(pico_pc3, LOW);	/*0001:あれあれ、どうしました*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, HIGH);
}

void pico_ms02(){
	digitalWrite(pico_pc3, LOW);	/*0010:私に何でも聞いてくださいね*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms03(){
	digitalWrite(pico_pc3, LOW);	/*0011:私とお話ししませんか*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, HIGH);
}

void pico_ms04(){
	digitalWrite(pico_pc3, LOW);	/*0100:ダンボーと呼んでください*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms05(){
	digitalWrite(pico_pc3, LOW);	/*0101:明日はいいことありますよ*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, HIGH);
}

void pico_ms06(){
	digitalWrite(pico_pc3, LOW);	/*0110:そう気を落とさないでください*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms07(){
	digitalWrite(pico_pc3, LOW);	/*0111:おやつの時間です*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, HIGH);
}

void pico_ms08(){
	digitalWrite(pico_pc3, HIGH);	/*1000:月がきれいですね*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms09(){
	digitalWrite(pico_pc3, HIGH);	/*1001:おやすみなさい、よい夢を*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, HIGH);
}

void pico_ms10(){
	digitalWrite(pico_pc3, HIGH);	/*1010:いたいのいたいの、とんでいけ*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms11(){
	digitalWrite(pico_pc3, HIGH);	/*1011:優しく触ってください*/
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, HIGH);
}

void pico_ms12(){
	digitalWrite(pico_pc3, HIGH);	/*1100:心配いりませんよ、任せてください*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms13(){
	digitalWrite(pico_pc3, HIGH);	/*1101:あなたの名前はなんですか*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, HIGH);
}

void pico_ms14(){
	digitalWrite(pico_pc3, HIGH);	/*1110:一緒にチョコレート食べませんか*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms15(){
	digitalWrite(pico_pc3, HIGH);	/*1111:発声無し*/
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, HIGH);
}

void setup(){

	rightservo.attach(9);	/*右腕　D9*/
	leftservo.attach(10);	/*左腕　D10*/
	headservo.attach(11);	/*頭　　D11*/

	pinMode(pico_reset, OUTPUT);
	pinMode(pico_pc3, OUTPUT);
	pinMode(pico_pc2, OUTPUT);
	pinMode(pico_pc1, OUTPUT);
	pinMode(pico_pc0, OUTPUT);	/*pico_pcとresetは出力とする(プルアップ)*/


}

void loop() {

	digitalWrite(pico_sleep, LOW);	/*スリープ状態*/
	delay(100);
	digitalWrite(pico_reset, LOW);
	delay(80);
	digitalWrite(pico_reset, HIGH);		/*リセット*/
	delay(80);


	/*気を付け*/
	headservo.write(90,30,true);
	rightservo.write(90);
	leftservo.write(90);
	delay(300);

	
	/*挨拶*/
	pico_ms04();
	delay(3000);
	pico_ms13();
	headservo.write(180,1,true);	/*顔左*/
	rightservo.write(180);	/*右手前に*/
	delay(5000);

	/*気を付け*/
	headservo.write(90,225,true);
	rightservo.write(90);
	leftservo.write(90);
	delay(300);

	/*お話お誘い*/
	pico_ms03();
	rightservo.write(180);
	leftservo.write(0);		/*ばんざい*/


	headservo.write(0,1,true);
	delay(1000);
	headservo.write(90,255,true);
	delay(1000);

}
