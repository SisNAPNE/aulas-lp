#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

// variáveis globais
int resultado, val_a, val_b;
// protótipo da função (declaração)
void somar();

int main() {

    printf("Valor (a): ");
    scanf("%i", &val_a);
    printf("Valor (b): ");
    scanf("%i", &val_b);
    
    // chamada da função (invocação)
    somar();
    printf("Resultado = %i", resultado);

    printf("\n");
    return 0;
}

// implementação da função
void somar() {
    resultado = val_a + val_b;
}
