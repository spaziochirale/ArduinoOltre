/***************************************************
 *    ESEMPIO INTERRUTTORE CREPUSCOLARE
 *    
 *    
 *    Author: Stefano Capezzone
 *    Version: 1.0
 *    Corso Arduino e OLTRE
 *    
 */
 
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  int valore;
  valore = analogRead(A0);   
  Serial.print("Valore luminosità: "); 
  Serial.print(valore); 
  Serial.print("\t");

  // Modificare il test in base al proprio circuito e alle prove di lettura
  if (valore < 400) { 
    Serial.println("Accendo la luce");
    digitalWrite(13,HIGH);
  }
  else {
    Serial.println("Spengo la luce");
    digitalWrite(13,LOW);
  }
  delay(200); 
}
