/***************************************************
 *    SKETCH GENERICO TEST LETTURA SENSORE ANALOGICO 
 *    
 *    
 *    Author: Stefano Capezzone
 *    Version: 1.0
 *    Corso Arduino & Oltre
 *    
 */

void setup() {
  Serial.begin(9600); // inizializzo la connessione con il serial monitor

}

void loop() {
  int valore; // dichiaro una variabile per contenere il valore numerico letto
  valore = analogRead(A0); // leggo il valore sul pin A0
  
  // invio al serial monitor un messaggio di una riga con il valore letto
  Serial.print("Valore del sensore: ");
  Serial.println(valore);

  delay(200); // attendo 200 ms per rallentare il loop

}
