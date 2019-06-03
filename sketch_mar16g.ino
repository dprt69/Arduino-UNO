#include <RobotIRremoteInt.h>
#include <RobotIRremote.h>
#include <RobotIRremoteTools.h>



int receiver_pin = 8;
int first_light_pin = 7;
int second_light_pin = 6;
int third_light_pin = 5;
int fourth_light_pin = 4;
int led_case[] = {0,0,0,0};
IRrecv receiver(receiver_pin);
decode_results output;

#define code1  48703
#define code2  58359
#define code3  6375
#define code4  25979

void setup()
{
  Serial.begin(9600);
  receiver.enableIRIn();
  pinMode(first_light_pin, OUTPUT);
  pinMode(second_light_pin, OUTPUT);
  pinMode(third_light_pin, OUTPUT);
  pinMode(fourth_light_pin, OUTPUT);
}

void loop()
{
  if (receiver.decode(&output))
  {
    unsigned int value = output.value;
    switch(value)
    {
      case code1:
      if(led_case[1] == 1) 
      {
        digitalWrite(first_light_pin, LOW);
        led_case[1] = 0;
      } 
      else 
      {
        digitalWrite(first_light_pin, HIGH);
        led_case[1] = 1;
      }
      break;
      case code2:
      if(led_case[2] == 1) 
      {
        digitalWrite(second_light_pin, LOW);
        led_case[2] = 0;
      } 
      else 
      {
        digitalWrite(second_light_pin, HIGH);
        led_case[2] = 1;
      }
      break;
      case code3:
      if(led_case[3] == 1) 
      {
        digitalWrite(third_light_pin, LOW);
        led_case[3] = 0;
      } 
      else 
      {
        digitalWrite(third_light_pin, HIGH);
        led_case[3] = 1;
      }
      break;
      case code4:
      if(led_case[4] == 1) 
      {
        digitalWrite(fourth_light_pin, LOW);
        led_case[4] = 0;
      } 
      else 
      {
        digitalWrite(fourth_light_pin, HIGH);
        led_case[4] = 1;
      }
      break;
    }
    Serial.println(value);
    receiver.resume();
  }
}
