#include <stdio.h>

int main() {

    int valor=0, maior=0;

    printf("Digite -1 para sair");
    printf("\nValores:\n");
    while(valor != -1) {
        scanf("%i", &valor);

        if(valor > maior) {
            maior = valor;
        }
    }
    printf("Maior = %i", maior);

    printf("\n");
    return 0;
}