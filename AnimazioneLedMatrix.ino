/*************************************
 * SEMPLICE ANIMAZIONE MATRICE LED CON MAX72XX e LIBRERIA LED CONTROL
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
 pin 6 is connected to LOAD 
 
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

}

void loop() {
  
  int img1[8] = {
    B11111111,
    B10000001,
    B10000001,
    B10000001,
    B10000001,
    B10000001,
    B10000001,
    B11111111};
int img2[8] = {
    B00000000,
    B00000000,
    B00111100,
    B00111100,
    B00111100,
    B00111100,
    B00000000,
    B00000000};
    
   for (int i=0;i<8;i++) lc.setRow(0,i,img1[i]);
   delay(200);
   for (int i=0;i<8;i++) lc.setRow(0,i,img2[i]);
   delay(200);

}
