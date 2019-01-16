/***************************************************
 *    ESEMPIO: IL SEMAFORO
 *    
 *    Author: Stefano Capezzone
 *    Version: 1.0
 *    Corso Arduino & Oltre
 *    
 */

void setup() {
 pinMode(7,OUTPUT); // LED rosso
 pinMode(8,OUTPUT); // LED giallo
 pinMode(9,OUTPUT); // LED verde

// Tutto spento
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 digitalWrite(9, LOW);

}

void loop() {
  digitalWrite(7,HIGH); // Accendo il Rosso
  delay(5000); // Durata del rosso
  digitalWrite(7,LOW); // Spengo il rosso
  digitalWrite(9,HIGH); // Accendo il verde
  delay(5000); // Durata del verde
  digitalWrite(8,HIGH); // Accendo anche il giallo
  delay(2000); // Durata del giallo
  digitalWrite(8,LOW); // Spengo il giallo
  digitalWrite(9, LOW); // Spengo il verde
  
}
