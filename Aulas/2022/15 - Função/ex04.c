#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

// Declaração / Protótipo
void ordenar(int *v);

int main() {

    int a, vetor[TAM];

    srand(time(NULL));

    printf("Aleatório: ");
    for(a=0; a<TAM; a++) {
        vetor[a] = 10 + (rand()%90);
        printf("%i ", vetor[a]);
    }

    ordenar(vetor);

    printf("\nOrdenado: ");
    for(a=0; a<TAM; a++) {
        printf("%i ", vetor[a]);
    }

    printf("\n");
    return 0;
}

// implementação da função
void ordenar(int *v) {

    int a, b, aux;

    for(a=0; a<TAM; a++) {
        for(b=a; b<TAM; b++) {
            if(v[a] < v[b]) {
                aux = v[a];
                v[a] = v[b];
                v[b] = aux;
            }
        }
    }
}
    