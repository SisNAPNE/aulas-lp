#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {

    char l;
    int lin, col;
    int vetor[TAM];
    int matriz[TAM][TAM];

    srand(time(NULL));

    for(lin = 0; lin<TAM; lin++) {
        for(col=0; col<TAM; col++) {
            matriz[lin][col] = rand()%10;
            if(col%2 == 0) {
                l = 65 + (rand()%26);
                printf("%c ", l);
            }
            else {
                printf("%i ", matriz[lin][col]);
            }
            // 
            
            fflush(stdout);
        }
        printf("\n");
    }


    printf("\n");
    return 0;
}
