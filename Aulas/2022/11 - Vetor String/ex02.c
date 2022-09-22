#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#define TAM 50

int main() {

    int a;
    char nome[TAM];

    printf("Nome do país: ");
    __fpurge(stdin);
    gets(nome);

    printf("Conteúdo: ");
    for(a=0; nome[a]!='\0';a++) {
        printf("%c", nome[a]);
    }

    printf("\n");
    return 0;
}
