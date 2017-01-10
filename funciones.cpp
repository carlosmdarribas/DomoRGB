#include "funciones.h"
#include <Arduino.h>


//Hace un Fade In y fade Out del led que se le pase por el primer parametro a la velocidad del segundo parametro
void fade(int led, int vel_fade){
 int r;
  for(r=0; r<256; r++){
    analogWrite(led, r);
    delay(vel_fade);
  }
  for(r=255; r>=0; r--){
    analogWrite(led, r);
    delay(vel_fade);
  }
}



void allColours(){
  int r, g, b=255;
  analogWrite(ledB, b);
  
  for(r=0; r<256; r++){
    analogWrite(ledR, r);
    delay(vel_all);
  }
  for(b=255; b>=0; b--){
    analogWrite(ledB, b);
    delay(vel_all);
  }
  for(g=0; g<256; g++){
    analogWrite(ledG, g);
    delay(vel_all); 
  }
  for(r=255; r>=0; r--){
    analogWrite(ledR, r);
    delay(vel_all);
  }
  for(b=0; b<256; b++){
    analogWrite(ledB, b);
    delay(vel_all);
  }
  for(g=255; g>=0; g--){
    analogWrite(ledG, g);
    delay(vel_all);
  }
  
}

