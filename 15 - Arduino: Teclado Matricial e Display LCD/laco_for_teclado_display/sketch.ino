#include <LiquidCrystal.h>
#include <Keypad.h>
#include <Servo.h>

/* Display */
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
 // Configura a porta serial - taxa de comunicação "9600"
 Serial.begin(9600);
 lcd.begin(16, 2);
}
 
void loop() {
  
  // Efetua a leitura do Teclado Matricial e armazena na variável "tecla"
  char tecla = keypad.getKey();
  if(tecla) {
    // Converte a tecla pressionada para inteiro e armazena na variável "val"
    int val = tecla - 48;
    // Verifica se é um número
    if(val >= 0 && val <= 9) {
      int cont;
      // Efetua a contagem
      for(cont=0; cont<=val; cont++) {
        // Exibe a varável "cont" no Display LCD
        lcd.setCursor(cont, 0);
        lcd.print(cont);
        // Aguarda (para a execução) 200 milisegundos
        delay(200);
      }
    }
    // Limpa o display
    else {
      lcd.clear();
    }
  }
  // Aguarda (para a execução) 100 milisegundos
  delay(100);
}

