// Aim- Controlling LED using loops. 

int blue = 7;
int ontym1=100;
int ontym2=100;
int offtym1=100;
int offtym2=100;
int red=13;
int i;
int o;
void setup() {
  // put your setup code here, to run once:
pinMode(blue,OUTPUT);
pinMode(red,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (i=1;i<=8;++i){
  digitalWrite(blue,HIGH);
  delay(ontym1);
  digitalWrite(blue,LOW);
  delay(offtym1);
}
for(o=1;o<=2;++o){
  digitalWrite(red,HIGH);
  delay(ontym2);
  digitalWrite(red,LOW);
  delay(offtym2);
}
}
/* by- Dilpreet Singh Banga
   Date- 03/06/19  
*/   
