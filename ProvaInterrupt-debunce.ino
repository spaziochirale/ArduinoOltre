/***************************************************
 *    ESEMPIO GESTIONE DEGLI INTERRUPT
 *    Con la gestione del 'debounce'
 *    
 *    Author: Stefano Capezzone
 *    Version: 1.0
 *    Corso Professionale di arduino Avanzato
 *    
 */
const byte BUTTON = 2; // Modificare con il PIN scelto anche in base al tipo di scheda
volatile int stato = 1;
volatile unsigned long tempo;
volatile int contatore=0;


void buttonPressed() {
  if ((millis() - tempo) > 200) 
    {stato = !stato;
     contatore++;
    }
  
  digitalWrite(LED_BUILTIN, stato);
  tempo = millis();
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUTTON, INPUT);
  attachInterrupt(digitalPinToInterrupt(BUTTON), buttonPressed, FALLING);
  tempo = millis();
  Serial.begin(9600);

}

void loop() {
  
  Serial.println(contatore);

}
