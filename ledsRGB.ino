#include "funciones.h"

void setup() {
  for (int colors = 0; colors < 3; colors++) { // 3 colores: Red, Green, Blue
    pinMode(pin[colors], OUTPUT);
  }
}

void loop() {
  // Hago fade() a un color aleatorio.
  fade(pin[random(0, 2)]);
}
