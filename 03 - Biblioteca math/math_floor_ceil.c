// compilação: gcc math_floor_ceil.c -lm
#include <stdio.h>
#include <math.h>

int main() {

    double valor, baixo, cima;

    printf("Digite um valor: ");
    scanf("%lf", &valor);
    // calcula o arredondamento para baixo
    baixo = floor(valor);
    // calcula o arredondamento para cima
    cima = ceil(valor);

    printf("- Arredondamento para baixo: %.1lf", baixo);
    printf("\n- Arredondamento para cima: %.1lf", cima);
    
    printf("\n");
    return 0;
}
