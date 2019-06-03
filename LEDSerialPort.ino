// Aim- Controlling LED using loops and serial port.

int blue = 7;
int ontym1=100;
int ontym2=100;
int offtym1=100;
int offtym2=100;
int red=13;
int i;
int o;
int numredbl=4;
int numblue=7;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);                // setting the communication speed
pinMode(blue,OUTPUT);
pinMode(red,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("This is the blue led");  // print statements(" . ")

for (i=1;i<=numblue;++i){
  Serial.println(i);     // for initialisation of i loop
  digitalWrite(blue,HIGH);
  delay(ontym1);
  digitalWrite(blue,LOW);
  delay(offtym1);
  
}  Serial.println("============"); // for seperation of loop.

Serial.println("This is for the red led ");
for(o=1;o<=numredbl;++o){
  Serial.println(o);   // for o loop initialisation in serial print 
  digitalWrite(red,HIGH);
  delay(ontym2);
  digitalWrite(red,LOW);
  delay(offtym2);
}Serial.println("++++++++++++");
}
/* by- Dilpreet Singh Banga
   Date- 03/06/19  
*/   
