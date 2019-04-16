/*******************************************
 * ESEMPIO DI GESTIONE DEL SENSORE DI SUONO/VOLUME/RUMORE 
 * 
 * Author: Rosita Esposito
 * Ver: 1.0
 * 
 * Corso Arduino & Oltre 
 * 
 *  
 */

// Dichiaro le varialbili usate nello Sketch
unsigned long tempo; // Valore potenzialmente molto grande
int pressione,pMax,pMin,volume; // Variabili varie per calcolo volume

 
void setup() {
  // Inizializzo la comunicazione con il terminale seriale
  Serial.begin(9600);
}

void loop() {
  // Registro il tempo attuale (numero di millisecondi dall'accensione di Arduino)
  tempo=millis();

  // Inizializzo le variabili che alla fine del blocco di programma successivo
  // conterranno il valore minimo e massimo registrato dal PIN del sensore
  pMax=0;
  pMin=1023;

  // Il sensore a microfono rileva la pressione acustica in un certo istante
  // non il volume medio percepito dall'orecchio umano. 
  // Per cui devo effettuare un campionamento e calcolare il volume.
  // Finché non sono trascorsi 50 millisecondi effettuo letture del sensore
  // e mantengo aggiornati i valori minimi e massimi registrati in questo intervallo
  while((millis()-tempo)<50)
  {
    pressione=analogRead (A0); 
    if(pressione>pMax) pMax=pressione;
    if(pressione<pMin) pMin=pressione;    
  }
  
  // Il volume è la differenza tra il valore massimo e minimo della pressione acustica 
  // misurata nell'intervallo. Lo calcolo e scrivo il risultato sul terminale
  volume =pMax-pMin;
  Serial.print("Volume rilevato: ");
  Serial.println(volume);
}
