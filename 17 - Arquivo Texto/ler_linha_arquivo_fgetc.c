#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main() {

    FILE *fp;
    char c;
    int linha, cont;

    fp = fopen("arquivo.txt", "a+");

    if(fp == NULL) {
        printf("Não foi possível abrir o arquivo!\n");
        return 0;
    }

    printf("Linha: ");
    scanf("%i", &linha);

    cont = 1;
    do {
        c = fgetc(fp);
        if(c == '\n' || c == EOF) {
            cont++;
        }
        else if(cont == linha) {
            printf("%c", c);
        }
    } while(c != EOF);

    fclose(fp);
    printf("\n");
    return 0;
}

