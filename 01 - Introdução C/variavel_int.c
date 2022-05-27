#include <stdio.h>

int main() {

    int v1, v2, soma, mult, div, sub, resto;

    v1 = 10;
    v2 = 20;

    soma = v1 + v2;
    mult = v1 * v2;
    div = v2 / v1;
    sub = v2 - v1;

    v1 = 5;
    v2 = 2;
    resto = v1 % v2;
    
    printf("Soma = %i", soma);
    printf("\nMultiplicação = %i", mult);
    printf("\nDivisão = %i", div);
    printf("\nSubtração = %i", sub);
    printf("\nResto = %i", resto);

    printf("\n");
    return 0;
}