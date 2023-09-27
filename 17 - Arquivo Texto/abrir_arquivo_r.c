#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main() {

    FILE *fp;

    fp = fopen("arquivo.txt", "r");

    if(fp == NULL) {
        printf("Não foi possível abrir o arquivo!\n");
        return 0;
    }

    printf("Arquivo aberto com sucesso!");
    fclose(fp);
    printf("\n");
    return 0;
}

