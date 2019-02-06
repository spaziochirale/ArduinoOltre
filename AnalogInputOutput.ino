/*******************************************
 * ESEMPIO DI LETTURA ANALOGICA E SCRITTURA PWM 
 * 
 * Author: Stefano Capezzone
 * Ver: 1.0
 * 
 * Corso Arduino & Oltre 
 * 
 *  
 */
 
void setup() {
  Serial.begin(9600);

}

void loop() {
  int valSensor;
  int valOutput;

  valSensor = analogRead(A0); // modificare con il PIN a cui è collegato il sensore
  valOutput = map(valSensor,0,1023,0,255);
  analogWrite(9,valOutput); // modificare con il pin a cui è collegato l'attuatore

  Serial.print("Valore sensore: ");
  Serial.print(valSensor);
  Serial.print("\tValore trasformato Output: ");
  Serial.println(valOutput);

  delay(100); // ritardo per rallentare il ciclo

}
