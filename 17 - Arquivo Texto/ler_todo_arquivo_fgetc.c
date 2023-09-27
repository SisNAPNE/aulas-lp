#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main() {

    FILE *fp;
    char c;

    fp = fopen("arquivo.txt", "a+");

    if(fp == NULL) {
        printf("Não foi possível abrir o arquivo!\n");
        return 0;
    }

    do {
        c = fgetc(fp);
        if(c != EOF) {
            printf("%c", c);
        }
    } while(c != EOF);

    fclose(fp);
    printf("\n");
    return 0;
}

