#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#define TAM 50

int main() {

    char nome[TAM];

    printf("Nome do país: ");
    __fpurge(stdin);
    gets(nome);

    printf("Contéudo: %s", nome);

    printf("\n");
    return 0;
}
