#include <stdio.h>

int main() {

    // declara o vetor "numeros", do tipo "int" e tamanho "10"
    int numeros[10];
    int indice;

    // percorre o vetor, da posição 0 até 9
    for(indice=0; indice<10; indice++) {
        numeros[indice] = indice * 2;
        printf("\nnumeros[%i] = %i", indice, numeros[indice]);
    }

    printf("\n");
    return 0;
}
