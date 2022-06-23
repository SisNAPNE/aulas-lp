#include <stdio.h>

int main() {

    int val, quad, cubo;

    printf("Digite um valor: ");
    scanf("%i", &val);
    
    quad = val * val;
    cubo = quad * val;
    
    printf("Quadrado = %i", quad);
    printf("\nCubo = %i", cubo);
    
    printf("\n");
    return 0;
}
