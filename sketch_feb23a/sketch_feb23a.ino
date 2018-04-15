#include <Servo.h>

//servo
Servo rightservo;	//D9
Servo leftservo;	//D10
Servo headservo;	//D11

//LED(RGB)
const int LED_color[] = {0,1,2};	//R:D1 G:D1 B:D2
const int LED_cathode[] ={12,13};	//右:12 左:13

//AquesTalkpico
#define pico_sleep	3	//D3
#define pico_reset	4	//D4
#define pico_pc0	5	//D5
#define pico_pc1	6	//D6
#define pico_pc2	7	//D7
#define pico_pc3	8	//D8

int nowangle_right=90;
int nowangle_left=90;
int nowangle_head=90;

void slow_right(int ang){
	int i;
	if(nowangle_right < ang){
		for(i=nowangle_right; i<ang; i++){
			rightservo.write(i);
			delay(100);
		}
	}else{
		for(i=nowangle_right; i>ang; i--){
			rightservo.write(i);
			delay(100);
		}
	}
	nowangle_right = ang;
}

void slow_left(int ang){
	int i;
	if(nowangle_left < ang){
		for(i=nowangle_left; i<ang; i++){
			leftservo.write(i);
			delay(100);
		}
	}else{
		for(i=nowangle_left; i>ang; i--){
			leftservo.write(i);
			delay(100);
		}
	}
	nowangle_left = ang;
}

void slow_head(int ang){
	int i;
	if(nowangle_head < ang){
		for(i=nowangle_head; i<ang; i++){
			headservo.write(i);
			delay(50);
		}
	}else{
		for(i=nowangle_head; i>ang; i--){
			headservo.write(i);
			delay(50);
		}
	}
	nowangle_head = ang;
}

void pico_ms00(){
	digitalWrite(pico_pc3, LOW);	//0000:しゃべらない
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms01(){
	digitalWrite(pico_pc3, LOW);	//0001:あれあれ、どうしました
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, HIGH);
}

void pico_ms02(){
	digitalWrite(pico_pc3, LOW);	//0010:私に何でも聞いてくださいね
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms03(){
	digitalWrite(pico_pc3, LOW);	//0011:私とお話ししませんか
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, HIGH);
}

void pico_ms04(){
	digitalWrite(pico_pc3, LOW);	//0100:ダンボーとよんでください
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms05(){
	digitalWrite(pico_pc3, LOW);	//0101:明日はいいことありますよ
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, HIGH);
}

void pico_ms06(){
	digitalWrite(pico_pc3, LOW);	//0110:そう気を落とさないでください
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms07(){
	digitalWrite(pico_pc3, LOW);	//0111:おやつの時間です
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, HIGH);
}

void pico_ms08(){
	digitalWrite(pico_pc3, HIGH);	//1000:月がきれいですね
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms09(){
	digitalWrite(pico_pc3, HIGH);	//1001:おやすみなさい、よい夢を
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, HIGH);
}

void pico_ms10(){
	digitalWrite(pico_pc3, HIGH);	//1010:いたいのいたいの、とんでいけ
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms11(){
	digitalWrite(pico_pc3, HIGH);	//1011:優しく触ってください
	digitalWrite(pico_pc2, LOW);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, HIGH);
}

void pico_ms12(){
	digitalWrite(pico_pc3, HIGH);	//1100:心配いりませんよ、任せてください
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms13(){
	digitalWrite(pico_pc3, HIGH);	//1101:あなたの名前はなんですか
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, LOW);
	digitalWrite(pico_pc0, HIGH);
}

void pico_ms14(){
	digitalWrite(pico_pc3, HIGH);	//1110:一緒にチョコレート食べませんか
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, LOW);
}

void pico_ms15(){
	digitalWrite(pico_pc3, HIGH);	//1111:発声無し
	digitalWrite(pico_pc2, HIGH);
	digitalWrite(pico_pc1, HIGH);
	digitalWrite(pico_pc0, HIGH);
}

void setup(){

	rightservo.attach(9);	//右腕	D9
	leftservo.attach(10);	//左腕	D10
	headservo.attach(11);	//頭		D11

	pinMode(pico_reset, OUTPUT);
	pinMode(pico_pc3, OUTPUT);
	pinMode(pico_pc2, OUTPUT);
	pinMode(pico_pc1, OUTPUT);
	pinMode(pico_pc0, OUTPUT);	//pico_pcとresetは出力とする(プルアップ)

	for(int i=0; i<3; i++){
		pinMode(LED_color, OUTPUT);	//LED_colorは出力
	}
	for(int i=0; i<2; i++){
		pinMode(LED_cathode, OUTPUT);	//LED_cathodeは出力
	}



digitalWrite(pico_sleep, LOW);	//スリープ状態
	delay(100);
	digitalWrite(pico_reset, LOW);
	delay(80);
	digitalWrite(pico_reset, HIGH);		//リセット
	delay(80);


	//気を付け
	slow_head(90);
	slow_right(90);
	slow_left(90);
	delay(10000);

	
	//挨拶
	pico_ms04();
	delay(3000);
	pico_ms13();
	slow_head(180);	//顔左
	slow_right(0);	//右手前に
	delay(30000);

	//気を付け
	slow_head(90);
	slow_right(90);
	slow_left(90);
	delay(30000);

	//お話お誘い
	pico_ms03();
	slow_head(180);
	slow_right(180);		//ばんざい
	slow_left(0);
	delay(30000);



	//気を付けして止まる
	slow_head(90);
	delay(30000);
	rightservo.detach();
	leftservo.detach();
	headservo.detach();

	//ダイナミック点灯


}



void loop() {


}
