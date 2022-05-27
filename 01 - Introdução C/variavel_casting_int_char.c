#include <stdio.h>

int main() {

    char c1 = 'd', c2 = 'J';

    printf("Valor = %c %c", c1, c2);

    c1 = c1 - 32;
    c2 = c2 + 32;

    printf("\nValor = %c %c", c1, c2);

    printf("\n");
    return 0;
}