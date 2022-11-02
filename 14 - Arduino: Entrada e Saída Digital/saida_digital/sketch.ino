// Declara a variável global (int) "pinoBotao" e atribui valor "2"
int pinoBotao = 2;
int pinoLed = 3;
 
void setup() {
 // Configura a porta serial - taxa de comunicação "9600"
 Serial.begin(9600);
 // Define a porta "pinoBotao (2)" como entrada de dado
 pinMode (pinoBotao , INPUT);
 // Define a porta "pinoLed (3)" como saída de dado
 pinMode (pinoLed , OUTPUT);
}
 
void loop() {
 // Declara a Variável local (int) apertou
 int apertou;
 // Efetua a leitura digital da porta "pinoBotao" - Armazena em apertou
 apertou = digitalRead (pinoBotao);
 // Efetua a escrita digital da porta "pinoLed"
 digitalWrite(pinoLed, apertou);
 // Aguarda (para a execução) por um segundo
 delay(1000);
}

