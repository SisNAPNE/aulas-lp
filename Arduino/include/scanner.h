#include <Arduino.h>
#include <Wire.h>

void scanner() {
  
  byte error, address;
  int nDevices;
  nDevices = 0;
  for(address = 1; address < 127; address++ ) {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();
    if (error == 0) {
      Serial.print("Endereço I2C encontrado: 0x");
      if (address<16) {
        Serial.print("0 ");
      }
      Serial.println(address,HEX);
      nDevices++;
    }
    else if (error==4) {
      Serial.print("ERRO ");
      if (address<16) {
        Serial.print("0");
      }
      Serial.println(address,HEX);
    }    
  }
  if (nDevices == 0) {
    Serial.println("Nenhum endereço i2C encontrado ");
  }
  else {
    Serial.println(" Feito !");
  }
}