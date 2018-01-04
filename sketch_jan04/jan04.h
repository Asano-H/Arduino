#ifndef jan04_h
#define jan04_h

class pikapika{
	pablic:		/*外部からアクセス可*/
	pikapika(int pin,time);
	void tenmetsu(time);

	pravate:	/*外部からアクセス不可*/
	int myled_time,myled_pin;	/*メンバ変数*/

};

#endif