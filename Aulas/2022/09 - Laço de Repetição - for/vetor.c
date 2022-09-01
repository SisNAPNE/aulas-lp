#include <stdio.h>

int main() {

    int vetor[5];

    // |0|1|2|3|4|  => posições/índice
    // | | | | | |  => valores armazenados

    vetor[3] = 7;
    // |0|1|2|3|4|  => posições/índice
    // | | | |7| |  => valores armazenados
    printf("\n%i", vetor[3]);

    vetor[1] = 0;
    // |0|1|2|3|4|  => posições/índice
    // | |0| |7| |  => valores armazenados
    printf("\n%i", vetor[1]);


    printf("\n");
    return 0;
}
