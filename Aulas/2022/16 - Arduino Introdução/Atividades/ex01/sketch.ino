

int pinBotao = 2;
int pinsLeds[4] = {6, 7, 8, 9};
int statusLeds[4] = {0, 0, 0, 0};

void setup() {
  // put your setup code here, to run once:
  pinMode(pinBotao, INPUT);
  for(int a=6; a<=9; a++) {
    pinMode(a, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int press;

  press = digitalRead(pinBotao);

  if(press == HIGH) {
    animar();
  }

  delay(100);
}

void animar() {
  for(int a=6; a<=10; a++) {
    zerar();
    if(a < 10) {
      statusLeds[a] = 1;
    }
    ascender();
    delay(500);
  }
}

void zerar() {
  for(int a=6; a<=9; a++) {
    statusLeds[a] = 0;
  }
}

void ascender() {
  for(int a=6; a<=9; a++) {
    digitalWrite(a, statusLeds[a]);
  }
}
