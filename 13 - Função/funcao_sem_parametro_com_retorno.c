#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

// variáveis globais
int resultado;
// protótipo da função (declaração)
void somar(int, int);

int main() {

    int val_a, val_b;
    printf("Valor (a): ");
    scanf("%i", &val_a);
    printf("Valor (b): ");
    scanf("%i", &val_b);
    
    // chamada da função (invocação)
    somar(val_a, val_b);
    printf("Resultado = %i", resultado);

    printf("\n");
    return 0;
}

// implementação da função
void somar(int a, int b) {
    resultado = a + b;
}
