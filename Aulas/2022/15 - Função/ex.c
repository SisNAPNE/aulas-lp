#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

// Declaração / Protótipo
void aleatoria(int *p);

int main() {

    // Chamada da função
    int a, vet[10];

    srand(time(NULL));

    aleatoria(vet);

    for(a=0; a<10; a++) {
        printf("%i ", vet[a]);
    }

    printf("\n");
    return 0;
}

// implementação da função
void aleatoria(int *p) {
    int a;
    for(a=0; a<10; a++) {
        p[a] = rand()%10;
    }
}
