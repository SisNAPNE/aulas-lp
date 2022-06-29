#include <stdio.h>

int main() {

    int nota = 5;

    // == igual
    // > maior
    // < menor
    // >= maior ou igual
    // <= menor ou igual
    // != diferente

    // verifica se a nota é maior ou igual a "6"
    if(nota >= 6) {
        printf("Aprovado!");
    }
    // Se não for maior ou igual a "6"
    else {
        printf("Reprovado");
    }

    printf("\n");
    return 0;
}