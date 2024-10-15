#include <Arduino.h>

#define BUUZER_PIN 11

void tom(char pino, int frequencia, int duracao);

void setup() {
  Serial.begin(9600);  
  Serial.println("Running...");
  pinMode(BUUZER_PIN, OUTPUT);
}

void loop() {
   /*
  Frequência das notas:
  Dó - 262 Hz
  Ré - 294 Hz
  Mi - 330 Hz
  Fá - 349 Hz
  Sol - 392 Hz
  Lá - 440 Hz
  Si - 494 Hz
  #Dó - 528 Hz
  */
  delay(1000);
  int tempo = 400;
  tone(BUUZER_PIN, 440, tempo); //LA
  delay(tempo);
  tone(BUUZER_PIN, 294, tempo); //RE
  delay(tempo);
  tone(BUUZER_PIN, 349, tempo/2); //FA - O tempo/2 faz com que demore metade do valor estipulado anteriormente, pois essa parte é mais rápida
  delay(tempo/2);
  tone(BUUZER_PIN, 392, tempo/2); //SOL
  delay(tempo/2);
  tone(BUUZER_PIN, 440, tempo); //LA
  delay(tempo);
  tone(BUUZER_PIN, 294, tempo); //RE
  delay(tempo);
  tone(BUUZER_PIN, 349, tempo/2); //FA
  delay(tempo/2);
  tone(BUUZER_PIN, 392, tempo/2); //SOL
  delay(tempo/2);
  tone(BUUZER_PIN, 330, tempo); //MI
  delay(tempo);
}

void tom(char pino, int frequencia, int duracao){
  float periodo = 1000.0/frequencia; //Periodo em ms
  for (int i = 0; i< duracao/(periodo);i++){ //Executa a rotina de dentro o tanta de vezes que a frequencia desejada cabe dentro da duracao
    digitalWrite(pino,HIGH);
    delayMicroseconds(periodo*500); //Metade do periodo em ms
    digitalWrite(pino, LOW);
    delayMicroseconds(periodo*500);
  }
}
