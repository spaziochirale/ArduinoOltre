/***************************************************
 *    ESEMPIO LETTURA PIN DIGITALE
 *    
 *    
 *    Author: Stefano Capezzone
 *    Version: 1.0
 *    Corso Arduino e OLTRE
 *    
 */

void setup() {
  pinMode(10,INPUT); // Ipotizziamo che sul PIN 10 vi sia un sensore digitale di tipo on/off
  Serial.begin(9600); // Inizializzo la porta seriale di Arduino impostando la velocità 9600 baud
}

void loop() {
  int valore; // Dichiaro una variabile per contenere il valore letto
  valore = digitalRead(10);
  Serial.print("Valore letto: "); // Invio al terminale una prima parte di messaggio
  Serial.println(valore); // completo il messaggio e invio il carattere di "carriage return" (a capo)
  delay(200); // Introduco un piccolo ritardo di 20 decimi di secondo per rallentare la velocità del loop
  
}
