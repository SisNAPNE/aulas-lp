#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main() {

    int lin, col;
    int matriz[TAM][TAM];

    for(lin=0; lin<TAM; lin++) {
        for(col=0; col<TAM; col++) {
            matriz[lin][col] = 0;
            printf("%i ", matriz[lin][col]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
