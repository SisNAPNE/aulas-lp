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

    for(a=0; str[a] != '\0'; a++) {
        fputc(str[a], fp);
    }
    fputc('\n', fp);
    
    fclose(fp);
    printf("\n");
    return 0;
}

