#include "funciones.h"
#include <Arduino.h>

int pin[] = {8, 9, 10}; // Pin Rojo, Verde, Azul

//Hace un Fade In y fade Out del led que se le pase por el primer parametro a la velocidad del segundo parametro
void fade(int led, int vel_fade){
 int r;
 int f_delay = (vel_fade) ? vel_fade : 1000;

  for(r=0; r<256; r++){
    analogWrite(led, r);
    delay(f_delay);
  }
  for(r=255; r>=0; r--){
    analogWrite(led, r);
    delay(f_delay);
  }
}

void allColours(int u_delay){ // Delay en ms
  int r, g, b = 0;
  int f_delay = (u_delay) ? u_delay : 1000; // En el caso de que el parámetro u_delay sea nulo, se tomará el valor de 1000ms (1s)

  for(r=0; r<256; r++){ // Rojo++
    analogWrite(pin[0], r);
    delay(f_delay);
  }
  for(b=255; b>=0; b--){ // Azul--
    analogWrite(pin[2], b);
    delay(f_delay);
  }
  for(g=0; g<256; g++){ // Verde++
    analogWrite(pin[1], g);
    delay(f_delay);
  }
  for(r=255; r>=0; r--){ // Rojo--
    analogWrite(pin[0], r);
    delay(f_delay);
  }
  for(b=0; b<256; b++){ // Azul++
    analogWrite(pin[2], b);
    delay(f_delay);
  }
  for(g=255; g>=0; g--){ // Verde--
    analogWrite(pin[1], g);
    delay(f_delay);
  }
}

void setRandomColor() {
  // Obtengo valores aleatorios entre 0 y 256 para los tres les. Despues, aplico la configuración
  for (int colors = 0; colors < 3; colors++) { // 3 colores: Red, Green, Blue
    int currentPin = pin[colors];
    analogWrite(currentPin, random(0, 256));
  }
}
