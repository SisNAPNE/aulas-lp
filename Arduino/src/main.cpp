#include <Arduino.h>
#include <Wire.h>
#include "display.h"
#include "keyboard.h"

int posl = 0;
int posc = 1;

void updatePos();

void setup() {

  Wire.begin();
  Serial.begin(9600);
  initDisplay();
  Serial.println("Running...");
  displayString(0, 0, "PRESSIONE UMA TECLA:");
}

void loop() {
  char tecla = teclado.getKey();
  if (tecla) {
    displayChar(posl, posc, tecla);
    Serial.println(tecla);
    updatePos();
  }
  
  delay(50);
}

void updatePos() {
  posl++;
  if(posl == 20) {
    posl = 0;
    posc++;
    if(posc == 4) {
      posc=1;
    }
  }
}


