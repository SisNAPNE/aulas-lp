#include <Keypad.h>
#include <Servo.h>

/* Keypad setup - Begin */
const byte KEYPAD_ROWS = 4;
const byte KEYPAD_COLS = 4;
byte rowPins[KEYPAD_ROWS] = {5, 4, 3, 2};
byte colPins[KEYPAD_COLS] = {A3, A2, A1, A0};
char keys[KEYPAD_ROWS][KEYPAD_COLS] = {
  {'1', '2', '3', '+'},
  {'4', '5', '6', '-'},
  {'7', '8', '9', '*'},
  {'.', '0', '=', '/'}
};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, KEYPAD_ROWS, KEYPAD_COLS);
/* Keypad setup - Finish */

void setup() {
  Serial.begin(9600);
}
void loop() {
  // Efetua a leitura do Teclado Matricial e armazena na variável "tecla"
  char tecla = keypad.getKey();
  if(tecla) {
    // Converte a tecla pressionada para inteiro e armazena na variável "val"
    int val = tecla - 48;
    // Verifica se é um número
    if(val >= 0 && val <= 9) {
      Serial.println("[Número]");
    }
    // Verifica se é um operador matemático
    else if(tecla == '+' || tecla == '-' || tecla == '*' || tecla == '/') {
      Serial.println("[Operador Matemático]");
    }
    else {
      Serial.println("[Ponto ou Igual]");
    }
  }
  // Aguarda 20 milissegundos
  delay(20);
}
