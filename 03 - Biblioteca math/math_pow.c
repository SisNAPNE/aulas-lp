// compilação: gcc math_pow.c -lm
#include <stdio.h>
#include <math.h>

int main() {

    double base, pot, resultado;

    printf("Digite o valor da base: ");
    scanf("%lf", &base);
    printf("Digite o valor da potencia: ");
    scanf("%lf", &pot);
    
    // calcula a potência
    resultado = pow(base, pot);

    printf("- Resultado: %.1lf", resultado);
    
    printf("\n");
    return 0;
}
