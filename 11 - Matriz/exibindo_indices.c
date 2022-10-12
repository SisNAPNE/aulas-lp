#include <stdio.h>

#define LIN 5
#define COL 7

int main() {

    // declara os índices
    int lin, col;
    // declara uma matriz com 5 linhas e 7 colunas
    int matriz[LIN][COL];
    
    // percorre a matriz
    for(lin=0; lin<LIN; lin++) {
        for(col=0; col<LIN; col++) {
            // apresenta os indices (linha/coluna)
            printf("[%i %i] ", lin, col);
        }
        // pula para a próxima linha
        printf("\n");
    }

    printf("\n");
    return 0;
}