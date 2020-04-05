/***************************************************
 *    SKETCH PER TEST LETTURA SENSORE ANALOGICO TMP36
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
  int valore; // dichiaro una variabile per contenere il valore numerico letto dal PIN
  float temp; // dichiaro una variabile per contenere il valore calcolato della temp.
  
  valore = analogRead(A0); // leggo il valore sul pin A0
  Serial.print("Valore ADC del sensore: ");
  Serial.print(valore);
 
  temp = ((valore * 0.00488) - 0.5) / 0.01;
  Serial.print(" Calcolo temperatura in C°= ");
  Serial.println(temp);

  delay(500); // attendo 500 ms per rallentare il loop
}
