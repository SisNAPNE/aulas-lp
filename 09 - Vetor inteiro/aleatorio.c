#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int valor;

    // Geração da semente
    srand(time(NULL));
    // Geração de um número aleatório de 0 a 9
    valor = rand()%10;
    // Apresentando o valor aleatório
    printf("[%i]", valor);

    printf("\n");
    return 0;
}
