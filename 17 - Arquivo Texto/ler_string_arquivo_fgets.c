#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main() {

    FILE *fp;
    char str[10];

    fp = fopen("arquivo.txt", "a+");

    if(fp == NULL) {
        printf("Não foi possível abrir o arquivo!\n");
        return 0;
    }

    fgets(str, 10, fp);
    printf("Caracteres lidos: %s", str);
    
    fclose(fp);
    printf("\n");
    return 0;
}

