#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#define LIN 5
#define COL 30

int main() {

    // declara o índice para as linhas
    int lin;
    // declara uma matriz com 5 linhas e 30 colunas
    char nomes[LIN][COL];

    printf("Digite os nomes:\n");
    // percorre as linhas matriz
    for(lin=0; lin<LIN; lin++) {
        // limpa o buffer de entrada
        __fpurge(stdin);
        // captura e armazena o nome na matriz "nomes"
        gets(nomes[lin]);
    }

    printf("\nNomes armazenados:");
    // percorre as linhas matriz
    for(lin=0; lin<LIN; lin++) {
        // Exibe os nomes
        printf("\n%s", nomes[lin]);
    }

    printf("\n");
    return 0;
}