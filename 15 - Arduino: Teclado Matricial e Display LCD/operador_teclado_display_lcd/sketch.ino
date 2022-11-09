#include <LiquidCrystal.h>
#include <Keypad.h>
#include <Servo.h>

/* Display - setup */
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

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
    // Limpa texto do Display LCD
    lcd.clear();
    // Converte a tecla pressionada para inteiro e armazena na variável "val"
    int val = tecla - 48;
    // Verifica se é um número
    if(val >= 0 && val <= 9) {
      lcd.setCursor(4, 0);
      lcd.print("[Numero]");
    }
    // Verifica se é um operador matemático
    else if(tecla == '+' || tecla == '-' || tecla == '*' || tecla == '/') {
      lcd.setCursor(3, 0);
      lcd.print("[Operador]");
    }
    else {
      lcd.setCursor(1, 0);
      lcd.print("[Ponto /Igual]");
    }
  }
  // Aguarda 20 milissegundos
  delay(20);
}
