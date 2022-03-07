#include <Ultrasonic.h>
Ultrasonic ultrassom(A2,A1);

long distancia;

int in1 = 2;
int in2 = 3;
int in3 = 4;
int in4 = 5;
int dist = 40;

void setup() {
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT); 
}

void loop() {
 distancia = ultrassom.Ranging(CM);
// frente(distancia);
acoes();
}
void acoes(){
 frente(distancia);
 delay(3000);
 parar();
 delay(1000);
 re();
 delay(3000);
}
void frente(long distancia){
 if(verificar(distancia)){
  digitalWrite(in1, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  }else{
    re();
    delay(3000);
  }
}
void re(){
  digitalWrite(in1, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW); 
}

void parar(){
  digitalWrite(in1, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW); 
}
boolean verificar(long distancia){
  if(distancia > dist){
    return true;
  }
  return false;
}



