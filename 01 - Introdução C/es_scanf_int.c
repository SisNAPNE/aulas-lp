#include <stdio.h>

int main() {

    int v1, v2, soma;

    printf("Digite o valor 1: ");
    scanf("%i", &v1);
    printf("Digite o valor 2: ");
    scanf("%i", &v2);

    soma = v1 + v2;

    printf("Soma %i + %i = %i", v1, v2, soma);

    printf("\n");
    return 0;
}