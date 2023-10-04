#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main() {

    float valor;
    FILE *fp;

    fp = fopen("dados.txt", "a+");

    if(fp == NULL) {
        printf("Não foi possível abrir o arquivo!\n");
        return 0;
    }

    printf("Digite um valor float: ");
    scanf("%f", &valor);

    fprintf(fp, "Valor\n%f\n", valor);

    fclose(fp);
    printf("\n");
    return 0;
}

