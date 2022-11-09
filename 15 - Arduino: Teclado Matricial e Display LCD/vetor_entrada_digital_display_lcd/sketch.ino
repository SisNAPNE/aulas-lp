#include <LiquidCrystal.h>
#include <Servo.h>
 
/* Display */
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

// Declara a variável "pinoBotao" 
int pinoBotao = 2;
// Declara vetores (char) "t1" e "t2" contendo os textos da animação
char t1[] = {'C', 'U', 'R', 'S', 'O', '#'};
char t2[] = {'A', 'R', 'D', 'U', 'I', 'N', 'O', '#'};

void setup() {
  // Configura a porta serial - taxa de comunicação "9600"
  Serial.begin(9600);
  // Inicializa o Display LCD
  lcd.begin(16, 2);
  // Define o "pinoBotao" como entrada de dados
  pinMode(pinoBotao, INPUT);
}
void loop() {

  // Verifica se o botão foi pressionado
  if(digitalRead(pinoBotao) == HIGH) {  
    // Limpa o display
    lcd.clear();
    // Inicia a Animação - Texto "t1"
    for(int a=0; t1[a] != '#'; a++) {
      // Configura a posição para escrita no display
      lcd.setCursor(a, 0);
      // Exibe o conteúdo do vetor "t1" no Display LCD  
      lcd.print(t1[a]);
      // Aguarda (para a execução) 200 milisegundos
      delay(200);
    }
    // Inicia a Animação - Texto "t2"
    for(int a=0; t2[a] != '#'; a++) {
      // Configura a posição para escrita no display
      lcd.setCursor(a, 1);
      // Exibe o conteúdo do vetor "t1" no Display LCD  
      lcd.print(t2[a]);
      // Aguarda (para a execução) 200 milisegundos
      delay(200);
    }
  }
    
  // Aguarda (para a execução) 200 milisegundos
  delay(200);
}

