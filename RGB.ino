// AIM - RGB attempt using red, green and blue led.

int r=7;
int b=4;
int g=2;
int tymOn1= 100;
int tymOn2=100;
int j;
void setup() {
  // put your setup code here, to run once:
pinMode(r,OUTPUT);
pinMode(b,OUTPUT);
pinMode(g,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(r,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(b,LOW);
  delay(tymOn1);

  digitalWrite(r,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(b,LOW);
  delay(tymOn1);

  digitalWrite(r,LOW);
  digitalWrite(g,LOW);
  digitalWrite(b,HIGH);
  delay(tymOn1);
    
  digitalWrite(r,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(b,LOW);
  delay(tymOn2);

  digitalWrite(r,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(b,LOW);
  delay(tymOn2);

  digitalWrite(r,LOW);
  digitalWrite(g,LOW);
  digitalWrite(b,HIGH);
  delay(tymOn2);
    }
    /*digitalWrite(7,HIGH);
    digitalWrite(4,HIGH);
digitalWrite(2,HIGH);
}*/
/*
 * by- Dilpreet Singh Banga
 */
