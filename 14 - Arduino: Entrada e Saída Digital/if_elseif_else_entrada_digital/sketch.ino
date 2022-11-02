// Declara a variável global (int) "pinoBotao" e atribui valor "2"
int pinoBotao = 2;
// Declara a variável global (int) "idade" e atribui valor "0"
int idade = 0;
// Declara a variável global (String) "texto" e atribui valor ""
String texto = "";

void setup() {
// Configura a porta serial - taxa de comunicação "9600"
Serial.begin(9600);
  // Define a porta "pinoBotao (2)" como entrada de dado
  pinMode (pinoBotao , INPUT);
}
void loop() {

  // Verifica se o botão foi pressionado
  if(digitalRead(pinoBotao) == HIGH) {
    // Incrementa a variável "idade" em 1
    idade++;

    // Verifica SE a Idade é menor que ou igual a "2"
    if(idade <= 2) {
      texto = "Bebê: ";
    }
    // SENÃO Verifica SE a Idade é menor que ou igual a "12"
    else if(idade <= 12) {
      texto = "Criança: ";
    }
    // SENÃO Verifica SE a Idade é menor que ou igual a "17"
    else if(idade <= 17) {
      texto = "Adolescente: ";
    }
    // SENÃO Verifica SE a Idade é menor que ou igual a "59"
    else if(idade <= 59) {
      texto = "Adulto: ";
    }
    // SENÃO
    else {
      texto = "Idoso: ";
    }

    Serial.print(texto);
    Serial.println(idade);
  }

  // Aguarda (para a execução) por meio segundo
  delay(500);
}
