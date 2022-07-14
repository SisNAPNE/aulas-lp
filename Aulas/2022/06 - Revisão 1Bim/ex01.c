#include <stdio.h>

int main() {

    float altura, peso;
    int resp;
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Você é (1) homem ou (2) mulher? ");
    scanf("%i", &resp);
    
    if(resp == 1) { 
        peso = (72.7 * altura) - 58;
    }
    else {
        peso = (62.1 * altura) - 44.7;
    }

    printf(" - Peso ideal: %.1f kg", peso);

    printf("\n");
    return 0;
}
