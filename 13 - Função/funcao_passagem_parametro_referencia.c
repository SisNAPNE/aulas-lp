#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <math.h>

// protótipo da função (declaração)
void pitagoras(int, int, double*);

int main() {

    int cateto_op, cateto_ad;
    double hipotenusa;

    printf("Cateto oposto: ");
    scanf("%i", &cateto_op);
    printf("Cateto adjacente (b): ");
    scanf("%i", &cateto_ad);
    
    // chamada da função (invocação)
    pitagoras(cateto_op, cateto_ad, &hipotenusa);
    printf("Hipotenusa = %.2lf", hipotenusa);

    printf("\n");
    return 0;
}

// implementação da função
void pitagoras(int co, int ca, double *hipo) {
    *hipo = sqrt(pow(co, 2) + pow(ca, 2));
}
