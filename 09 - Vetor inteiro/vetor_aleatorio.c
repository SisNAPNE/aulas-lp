#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // declara o vetor "numeros", do tipo "int" e tamanho "10"
    int numeros[10];
    int indice;

    // Geração da semente
    srand(time(NULL));

    for(indice=0; indice<10; indice++) {
        numeros[indice] = rand()%10;
        printf("\nnumeros[%i] = %i", indice, numeros[indice]);
    }

    printf("\n");
    return 0;
}
