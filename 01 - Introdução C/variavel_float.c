#include <stdio.h>

int main() {

    float v1, v2, soma, mult, div, sub;

    v1 = 4.53;
    v2 = 12.56;

    soma = v1 + v2;
    mult = v1 * v2;
    div = v2 / v1;
    sub = v2 - v1;

    printf("Soma = %.1f", soma);
    printf("\nMultiplicação = %.1f", mult);
    printf("\nDivisão = %.1f", div);
    printf("\nSubtração = %.1f", sub);

    printf("\n");
    return 0;
}