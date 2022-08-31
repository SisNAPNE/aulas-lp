#include <stdio.h>

int main() {

    // declara o vetor "numeros", do tipo "int" e tamanho "10"
    int numeros[10];

    // armazena o valor "6" na posição "0"
    numeros[0] = 6;
    // armazena o valor "-10" na posição "4"
    numeros[4] = -10;
    
    printf("\nnumeros[0] = %i", numeros[0]);
    printf("\nnumeros[4] = %i", numeros[4]);

    printf("\n");
    return 0;
}
