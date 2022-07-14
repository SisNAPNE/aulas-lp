#include <stdio.h>

int main() {

    int a1, a2, a3, soma;

    printf("Ângulos: ");
    scanf("%i %i %i", &a1, &a2, &a3);
    
    soma = a1 + a2 + a3;

    if(soma != 180) {
        printf(" - Inválido!");
    }
    else if(a1 == 90 || a2 == 90 || a3 == 90) {
        printf(" - Retângulo");
    }
    else if(a1 > 90 || a2 > 90 || a3 > 90) {
        printf(" - Obtusângulo");
    }
    else {
        printf(" - Acutângulo");   
    }


    printf("\n");
    return 0;
}
