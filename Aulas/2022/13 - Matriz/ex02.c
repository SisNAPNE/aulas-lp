#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main() {

    int a, lin, col;
    int matriz[TAM][TAM];

    srand(time(NULL));

    for(lin=0; lin<TAM; lin++) {
        for(col=0; col<TAM; col++) {
            matriz[lin][col] = 0;
        }
    }

    for(a=0; a<10; a++) {
        lin = rand()%5;
        col = rand()%5;
        if(matriz[lin][col] == 0) {
            matriz[lin][col] = 5;
        }
        else {
            a--;
        }
    }

    for(lin=0; lin<TAM; lin++) {
        for(col=0; col<TAM; col++) {
            printf("%i ", matriz[lin][col]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
