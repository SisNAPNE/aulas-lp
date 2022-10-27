#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define TAM 12

// protótipo da função (declaração)
void aleatorio(int, int*);

int main() {
    
    int a, maximo, numeros[TAM];

    srand(time(NULL));

    printf("Valor máximo: ");
    scanf("%i", &maximo);

    aleatorio(maximo, numeros);

    printf("Vetor aleatório: ");
    for(a=0; a<TAM; a++) {
        printf("%i ", numeros[a]);
    }

    printf("\n");
    return 0;
}

// implementação da função
void aleatorio(int max, int *vet) {
    int a;
    for(a=0; a<TAM; a++) {
        vet[a] = rand()%(max+1);
    }
}
