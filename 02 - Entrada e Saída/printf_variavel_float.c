#include <stdio.h>

int main() {

    float b = 3.1415;
    
    printf("Valor da variável b: %.1f (uma casa decimal)", b);
    printf("\nValor da variável b: %.2f (duas casas decimais)", b);
    printf("\nValor da variável b: %.3f (três casas decimais)", b);

    printf("\n");
    return 0;
}