#include <LiquidCrystal_I2C.h>

#define DLIN  4         // número de linhas (display)
#define DCOL  20        // número de colunas (display)
#define ADDR  0x3F      // Endereço do display.

LiquidCrystal_I2C lcd(ADDR, DCOL, DLIN);

void initDisplay() {
    lcd.init();
    lcd.backlight();
    lcd.clear();
}

void displayChar(int lin, int col, char t) {
  lcd.setCursor(lin, col);
  lcd.print(t);
}

void displayString(int lin, int col, String str) {
  lcd.setCursor(col, lin);
  lcd.print(str);
}