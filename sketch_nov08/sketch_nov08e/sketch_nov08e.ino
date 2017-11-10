/*かえるの歌*/

int melody[]={262,294,330,349,392,440,494,523};
int s=1000;
int i,j,k;
void setup() {
}

void loop() {
  tone(2,melody[0],s);
  delay(s);
  tone(2,melody[1],s);
  delay(s);
  tone(2,melody[2],s);
  delay(s);
  tone(2,melody[3],s);
  delay(s);
  tone(2,melody[2],s);
  delay(s);
  tone(2,melody[1],s);
  delay(s);
  tone(2,melody[0],s);
  delay(s*2);
  tone(2,melody[2],s);
  delay(s);
  tone(2,melody[3],s);
  delay(s);
  tone(2,melody[4],s);
  delay(s);
  tone(2,melody[5],s);
  delay(s);
  tone(2,melody[4],s);
  delay(s);
  tone(2,melody[3],s);
  delay(s);
  tone(2,melody[2],s);
  delay(s*2);
  for(i=0;i<4;i++){
    tone(2,melody[0],s);
    delay(s*2);
  }
  for(j=0;j<4;j++){
  tone(2,melody[j],s/2);
  delay(s/2);
  tone(2,melody[j],s/2);
  delay(s/2);
 }
 for(k=2;k>=0;k--){
  tone(2,melody[k],s);
  delay(s);
 }
  
  
  
  
}
