#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Declaração / Protótipo
void bhaskara(int a, int b, int c, double *x1, double *x2);

int main() {

    int a, b, c;
    double x1, x2;

    printf("Coeficientes: ");
    scanf("%i %i %i", &a, &b, &c);

    bhaskara(a, b, c, &x1, &x2);

    printf("Raízes: %.2lf %.2lf", x1, x2);

    printf("\n");
    return 0;
}

// implementação da função
void bhaskara(int a, int b, int c, double *x1, double *x2) {

    *x1 = (-b + sqrt(b*b - (4*a*c)))/(2*a);
    *x2 = (-b - sqrt(b*b - (4*a*c)))/(2*a);
}

    