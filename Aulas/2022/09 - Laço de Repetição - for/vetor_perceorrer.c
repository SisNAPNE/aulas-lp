#include <stdio.h>

int main() {

    int p;
    int vetor[10000];
    // |0|1|2|3|4|  => posições/índice
    // | | | | | |  => valores armazenados

    for(p=0; p<10000; p++) {
        vetor[p] = p;
        printf("%i ", vetor[p]);
    }
    // |0|1|2|3|4|  => posições/índice
    // |0|0|0|0|0|  => valores armazenados


    printf("\n");
    return 0;
}
