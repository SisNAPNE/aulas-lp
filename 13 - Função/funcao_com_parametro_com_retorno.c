#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

// protótipo da função (declaração)
int somar(int, int);

int main() {

    int resultado, val_a, val_b;
    printf("Valor (a): ");
    scanf("%i", &val_a);
    printf("Valor (b): ");
    scanf("%i", &val_b);
    
    // chamada da função (invocação)
    resultado = somar(val_a, val_b);
    printf("Resultado = %i", resultado);

    printf("\n");
    return 0;
}

// implementação da função
int somar(int a, int b) {
    return a + b;
}
