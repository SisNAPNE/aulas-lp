#include <stdio.h>
#include <math.h>

int main() {

    int x, y;
    double pot;

    printf("Digite dois valores inteiros: ");
    scanf("%i %i", &x, &y);
    
    pot = pow(x, y);
    printf("Resultado = %lf", pot);

    printf("\n");
    return 0;
}