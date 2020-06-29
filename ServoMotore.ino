
/*******************************************
 * ESEMPIO DI GESTIONE SERVOMOTORE 
 * 
 * Author: Stefano Capezzone
 * Ver: 1.0
 * 
 * Corso Arduino & Oltre 
 * 
 *  
 */

#include <Servo.h>

Servo motore;
 
void setup() {

 motore.attach(9);

}

void loop() {

  motore.write(10);
  delay(1000);
  motore.write(170);
  delay(1000);
  
}
