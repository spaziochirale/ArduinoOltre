/***************************************************
 *    ESEMPIO INTERRUPT DEBOUNCE
 *      Versione base
 *    
 *    Author: Stefano Capezzone
 *    Version: 1.0
 *    Corso Arduino & Oltre
 *    
 *    
 */

volatile int stato=0;
volatile int conta=0;
volatile unsigned long tempo;
 
void buttonPressed() {
  if ((millis() - tempo) > 200) 
    {stato = !stato;
     conta=conta+1;
     digitalWrite(13, stato);
    }
  
  
  tempo = millis();
}



void setup() {
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(2),buttonPressed, FALLING);
  Serial.begin(9600);
  tempo = millis();
}

void loop() {
  Serial.println(conta);
  delay(200);
}
