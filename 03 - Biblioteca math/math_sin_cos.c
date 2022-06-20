// compilação: gcc math_sin_cos.c -lm
#include <stdio.h>
#include <math.h>

int main() {

    double val1, val2, seno, cosseno;

    printf("Digite o valor (seno): ");
    scanf("%lf", &val1);
    printf("Digite o valor (cosseno): ");
    scanf("%lf", &val2);
    
    // calcula o seno
    seno = sin(val1*3.1415/180);
    // calcula o cosseno
    cosseno = cos(val2*3.1415/180);

    printf("- Seno: %.1lf", seno);
    printf("\n- Cosseno: %.1lf", cosseno);
    
    printf("\n");
    return 0;
}
