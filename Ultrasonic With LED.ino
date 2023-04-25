int SensorPin=A0;
int SensorValue=0;

int LED1=6;

#include <NewPing.h>

#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200 // Maksimum 400-500 CM
NewPing sonar (TRIGGER_PIN,ECHO_PIN,MAX_DISTANCE);
void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  pinMode(6,OUTPUT);
}

void loop() 
  // put your main code here, to run repeatedly:
{

delay(100);
int cm=sonar.ping_cm();
//Serial.print(" Ping : ");
//Serial.print(cm);
//Serial.print(" cm ");
//Serial.println("");

if (cm<=20){
digitalWrite(LED1,HIGH);
Serial.println("BAYAR UTANG LO");
}else{
 digitalWrite(LED1,LOW);
 Serial.println("AMAN AMAN");
 
}
}
