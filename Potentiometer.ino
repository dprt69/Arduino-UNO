// Aim - Display of potentiometer variable voltage.

int ptm= A1;  // declaring the analog pin
int rty= 250; // time to read
int volt;      
float conv;    // for real voltage in decimal 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);         // speed of communicaton
pinMode(ptm,INPUT);           // input pin

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(conv);           //  display on serial monitor
volt = analogRead(ptm);         // pin of reading value
 conv= ((5.0/1023.0)*volt);     // conversion of 0-1023 bytes int avtual voltage 
}

//  Applicaton - can be used for manual dimming of leds 
/* 
 *  by- Dilpreet Singh Banga 
 */
