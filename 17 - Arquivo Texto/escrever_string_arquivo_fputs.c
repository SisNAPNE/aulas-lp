#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main() {

    FILE *fp;
    char str[100];
    int a;

    fp = fopen("nomes.txt", "a+");

    if(fp == NULL) {
        printf("Não foi possível abrir o arquivo!\n");
        return 0;
    }

    printf("Digite um nome: ");
    gets(str);
    fputs(str, fp);
    fputc('\n', fp);
    
    fclose(fp);
    printf("\n");
    return 0;
}

