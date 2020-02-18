/*************************************
 * ESEMPIO GESTIONE MATRICE LED CON MAX72XX e LIBRERIA LED CONTROL
 * 
 * Author: Stefano Capezzone
 * 
 * Corso: Arduino e Oltre
 * 
 */

#include "LedControl.h"

/*
 Cablaggio del MAX72XX
 
 pin 12 is connected to the DataIn 
 pin 9 is connected to the CLK 
 pin 6 is connected to LOAD/CS 
 
 Immaginiamo di collegare un solo MAX72XX.
 */

LedControl lc=LedControl(12,9,6,1);


void setup() {
  /*
   Il MAX72XX è in modalità power-saving allo startup,
   è necessario fare una chiamata per risvegliarlo...
   */
  lc.shutdown(0,false);
  /* Impostiamo la luminosità ad un valore intermedio */
  lc.setIntensity(0,8);
  /* azzeriamo il display */
  lc.clearDisplay(0);

  /* accendo il quarto LED della fila 4 */
  lc.setRow(0,3,B0001000);

  

}

void loop() {
  
  // non ho nulla da fare nel loop

}
