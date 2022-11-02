// Declara a variável global (int) "pinoBotao" e atribui valor "2"
int pinoBotao = 2;
int pinoLedVerde = 3;
int pinoLedVerme = 4;
int acendeVerde = LOW;
int acendeVerme = HIGH;
// Declara a variável global "apertou" e atrivou nível lógico baixo
int apertou;


void setup() {
// Configura a porta serial - taxa de comunicação "9600"
Serial.begin(9600);
  // Define a porta "pinoBotao (2)" como entrada de dado
  pinMode (pinoBotao , INPUT);
  // Define a porta "pinoLedVerde (3)" como saída de dado
  pinMode (pinoLedVerde , OUTPUT);
  // Define a porta "pinoLedVerme (4)" como saída de dado
  pinMode (pinoLedVerme , OUTPUT);
}
void loop() {
  
  // Verifica se o botão foi pressionado
  if(digitalRead(pinoBotao) == HIGH) {
    // Inverte nível lógico da variável "apertou"
    acendeVerde = HIGH;
    acendeVerme = LOW; 
  }
  else {
    acendeVerde = LOW;
    acendeVerme = HIGH; 
  }
  // Efetua a escrita digital da porta "pinoLedVerde"
  digitalWrite(pinoLedVerde, acendeVerde);
  // Efetua a escrita digital da porta "pinoLedVermelho"
  digitalWrite(pinoLedVerme, acendeVerme);

  // Aguarda (para a execução) por meio segundo
  delay(500);
}
