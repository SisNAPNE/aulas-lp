#include <stdio.h>

int main() {

    int tempo;

    // inicializa a variável tempo com valor 1
    tempo = 1;
    // repete as linhas entre as "{ }" enquanto o valor da variável tempo for menor que 50
    while(tempo < 50) {
        printf("%i ", tempo);
        // incrementa em "1" o valor da variável tempo
        tempo++;
    }
    
    printf("\n");
    return 0;
}
