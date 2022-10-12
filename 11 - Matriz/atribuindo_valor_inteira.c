#include <stdio.h>

#define LIN 5
#define COL 7

int main() {

    // declara uma matriz com 5 linhas e 7 colunas
    int matriz[LIN][COL];

    // armazena o valor 10 a linha 3, coluna 5 da matriz
    matriz[3][5] = 10;
    // armazena o valor 12 na linha 0, coluna 3 da matriz
    matriz[0][3] = 12;

    // exibe os valores armazenados anteriormente
    printf("matriz[3][5] = %i", matriz[3][5]);
    printf("\nmatriz[0][3] = %i", matriz[0][3]);

    printf("\n");
    return 0;
}