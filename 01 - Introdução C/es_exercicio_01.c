#include <stdio.h>

int main() {

    int val, quad, cubo;

    printf("Digite um número: ");
    scanf("%i", &val);    

    quad = val * val;
    cubo = val * val * val;
    printf("- Quadrado = %i", quad);
    printf("\n- Cubo = %i", cubo);

    printf("\n");
    return 0;
}