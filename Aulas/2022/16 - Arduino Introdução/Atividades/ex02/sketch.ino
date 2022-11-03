int pinBotao = 2;
int leds[4] = {6, 7, 8, 9};
int cont = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinBotao, INPUT);
}

void loop() {

  if(digitalRead(pinBotao) == 1) {

    if(cont == 0) {
      animacao(0);
      cont++;
    }
    else if(cont == 1){
      animacao(1);
      cont++;
    }
    else {
      animacao(2);
      cont = 0;
    }
  }
  
  delay(1000);
}

void animacao(int x) {

  // Animação - Direita para Esquerda
  int a;

  if(x == 0) {
    for(a=0; a<4; a++) {
      digitalWrite(leds[a], HIGH);
      delay(1000);
      digitalWrite(leds[a], LOW);
      delay(1000);
    }
  }
  else if(cont == 1) {
    for(a=3; a>=0; a--) {
      digitalWrite(leds[a], HIGH);
      delay(1000);
      digitalWrite(leds[a], LOW);
      delay(1000);
    }
  }
  else {

  }
}
