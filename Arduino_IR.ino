#define ir 9
void setup() {
  // put your setup code here, to run once:
 pinMode(ir,INPUT);
 Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(ir));
  delay(850);
  // put your main code here, to run repeatedly:

}
