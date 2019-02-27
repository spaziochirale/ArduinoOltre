/***************************************************
 *    ESEMPIO GESTIONE DEGLI INTERRUPT
 *    Senza gestione del 'debounce'
 *    
 *    Author: Stefano Capezzone
 *    Version: 1.0
 *    Corso Professionale di arduino Avanzato
 *    
 */
const byte BUTTON = 2; // Modificare con il PIN scelto anche in base al tipo di scheda
volatile byte stato=0;
volatile int contatore=0;


// Interrupt Service Routine
void buttonPressed() {
  contatore++;
  stato = !stato;
  digitalWrite(LED_BUILTIN,stato);
  
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(BUTTON), buttonPressed, FALLING);
  Serial.begin(9600);
  

}

void loop() {
  
  Serial.println(contatore);

}
