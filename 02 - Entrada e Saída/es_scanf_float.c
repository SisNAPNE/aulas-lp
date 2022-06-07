#include <stdio.h>

int main() {

    float v1, v2, mult;

    printf("Digite o valor 1: ");
    scanf("%f", &v1);
    printf("Digite o valor 2: ");
    scanf("%f", &v2);

    mult = v1 * v2;

    printf("\tMultiplicação %.2f * %.2f = %.2f", v1, v2, mult);

    printf("\n");
    return 0;
}