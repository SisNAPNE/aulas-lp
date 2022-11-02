// Declara a variável global (int) "pinoBotao" e atribui valor "2"
int pinoBotao = 2;
 
void setup() {
 // Configura a porta serial - taxa de comunicação "9600"
 Serial.begin(9600);
 // Define a porta "pinoBotao (2)" como entrada de dado
 pinMode (pinoBotao , INPUT);
}
 
void loop() {
 // Declara a Variável local (int) apertou
 int apertou;
 // Efetua a leitura digital da porta "pinoBotao" - Armazena em apertou
 apertou = digitalRead (pinoBotao);
 // Exibe o valor armazenado na variável "apertou" no Monitor Serial
 Serial.println(apertou);
 // Aguarda (para a execução) por um segundo
 delay(1000);
}
