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
  pinMode(8,OUTPUT); // Utilizziamo il PIN 8, ma lo sketch può essere modificato per funzionare su qualunque PIN
  Serial.begin(9600); 
}

void loop() {
  int valore;
  valore = analogRead(A0);   
  Serial.print("Valore luminosità: "); 
  Serial.print(valore); 
  Serial.print("\t");

  // Modificare il test in base al proprio circuito e alle prove di lettura
  if (valore < 500) { 
    Serial.println("Accendo la luce");
    digitalWrite(8,HIGH);
  }
  else {
    Serial.println("Spengo la luce");
    digitalWrite(8,LOW);
  }
  delay(200); 
}
