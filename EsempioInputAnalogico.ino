/***************************************************
 *    ESEMPIO LETTURA PIN ANALOGICO
 *    
 *    
 *    Author: Stefano Capezzone
 *    Version: 1.0
 *    Corso Arduino e OLTRE
 *    
 */

void setup() {
// I pin analogici sono solo di INPUT e non vanno impostati nel setup
  Serial.begin(9600); // Inizializzo la porta seriale di Arduino impostando la velocità 9600 baud
}

void loop() {
  int valore; // Dichiaro una variabile per contenere il valore letto
  valore = analogRead(A0); // lettura del PIN A0
  Serial.print("Valore letto: "); // Invio al terminale una prima parte di messaggio
  Serial.println(valore); // completo il messaggio e invio il carattere di "carriage return" (a capo)
  delay(200); // Introduco un piccolo ritardo di 20 decimi di secondo per rallentare la velocità del loop
  
}
