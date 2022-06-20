// compilação: gcc math_sqrt.c -lm
#include <stdio.h>
#include <math.h>

int main() {

    double valor, raiz;

    printf("Digite um valor: ");
    scanf("%lf", &valor);
    
    // calcula a raiz quadrada
    raiz = sqrt(valor);

    printf("- Raiz: %.1lf", raiz);
    
    printf("\n");
    return 0;
}
