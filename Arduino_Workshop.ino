void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {

 while(Serial.available()){

 
  int a=Serial.parseInt();

   if (a==2)
  Serial.println("Yo");
  
    if(a==1)
  Serial.println("No");

  }
}
    
