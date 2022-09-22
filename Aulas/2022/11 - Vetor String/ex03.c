#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {

    int a;
    char vet[TAM];

    srand(time(NULL));
    
    // a - 97
    // z - 122
    printf("Vetor aleatório: ");
    for(a=0; a<TAM; a++) {
        vet[a] = 97 + (rand()%26);
        printf("%c ", vet[a]);
    }

    printf("\n");
    return 0;
}
