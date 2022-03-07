#include <Servo.h>

#define SERVO A0

Servo servo; 

int btn30 = 2;
int btn60 = 3;
int btn90 = 4;
int btn180 = 5;

void setup()
{
  servo.attach(SERVO);
  servo.write(0); // Inicia motor posição zero
  
  pinMode(btn30, INPUT);
  pinMode(btn60, INPUT);
  pinMode(btn90, INPUT);
  pinMode(btn180, INPUT);
}

void loop()
{
  if (digitalRead(btn30) == HIGH){
   	 servo.write(30);
  }
  
  if (digitalRead(btn60) == HIGH){
   	 servo.write(60);
  }
  
  if (digitalRead(btn90) == HIGH){
   	 servo.write(90);
  }
  
  if (digitalRead(btn180) == HIGH){
   	 servo.write(180);
  }
  
}