#include <stdio.h>
#include <math.h>

int main() {

    int x, y;
    double pot, raiz;

    printf("Digite dois valores inteiros: ");
    scanf("%i %i", &x, &y);
    
    pot = pow(y, x);
    raiz = sqrt(pot);
    printf("Resultado = %lf", pot);

    printf("\n");
    return 0;
}