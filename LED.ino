
int blue = 7;
int ontym=50;
int offtym=50;
int red=13;

void setup() {
  // put your setup code here, to run once:
pinMode(blue,OUTPUT);
pinMode(red,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(blue,HIGH);
delay(ontym);
digitalWrite(blue,LOW);
delay(offtym);
digitalWrite(red,HIGH);
delay(ontym);
digitalWrite(red,LOW);
delay(offtym);
}
