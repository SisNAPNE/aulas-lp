#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 5
#define COL 7

int main() {

    // declara os índices para percorrer a matriz
    int lin, col;
    // declara uma matriz com 5 linhas e 7 colunas
    int matriz[LIN][COL];

    // define semente para geração dos nrs aleatórios
    srand(time(NULL));

    // percorre a matriz
    for(lin=0; lin<LIN; lin++) {
        for(col=0; col<LIN; col++) {
            // armazena os valores aleatórios: 0-9
            matriz[lin][col] = rand()%10;
            // apresenta os valores armazenados
            printf("%i ", matriz[lin][col]);
        }
        // pula para a próxima linha
        printf("\n");
    }

    printf("\n");
    return 0;
}