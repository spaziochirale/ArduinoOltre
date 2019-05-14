/***************************************************
 *    ESEMPIO TOGGLE DI UN LED
 *      Versione base
 *    
 *    Author: Stefano Capezzone
 *    Version: 1.0
 *    Corso Arduino & Oltre
 *    
 *    
 */
 
void setup() {
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
}

int stato=0;

void loop() {
  int val = digitalRead(2);
  if (val == 0) stato = !stato;

  if (stato==1) digitalWrite(13,HIGH);
  else digitalWrite(13,LOW);
  delay(200);

}
