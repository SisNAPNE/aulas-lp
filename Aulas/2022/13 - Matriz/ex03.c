#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define BLACK   printf("\033[0;30m");
#define RED     printf("\033[0;31m");
#define GREEN   printf("\033[0;32m");
#define YELLOW  printf("\033[0;33m");
#define BLUE    printf("\033[0;34m");
#define PURPLE  printf("\033[0;35m");
#define CYAN    printf("\033[0;36m");
#define WHITE   printf("\033[0;37m");

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

    YELLOW
    printf("   |");
    for(col=0; col<TAM; col++) {
        printf("0%i|", col);
    }
    printf("\n");
    for(lin=0; lin<TAM; lin++) {
        YELLOW
        printf("|0%i|", lin);
        for(col=0; col<TAM; col++) {
            WHITE
            printf("0%i ", matriz[lin][col]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
