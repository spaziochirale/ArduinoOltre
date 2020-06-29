
/*******************************************
 * ESEMPIO DI GESTIONE INTENSITÀ LED 
 * 
 * Author: Stefano Capezzone
 * Ver: 1.0
 * 
 * Corso Arduino & Oltre 
 * 
 *  
 */
 
void setup() {
 // non ho bisogno di impostare nulla nel setup 

}

void loop() {

  for (int i=0; i<=255; i++) {
    analogWrite(9,i);
    delay(10);
  }
  
  for (int i=255; i>=0; i--) {
    analogWrite(9,i);
    delay(10);
  }
  
}
