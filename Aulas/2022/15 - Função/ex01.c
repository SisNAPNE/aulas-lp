#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

// Declaração / Protótipo
int parOuImpar(int num);

int main() {

    int num;

    printf("Numero: ");
    scanf("%i", &num);

    if(parOuImpar(num) == 0) {
        printf("PAR");
    }
    else {
        printf("IMPAR");
    }

    printf("\n");
    return 0;
}

// implementação da função
int parOuImpar(int num) {
    return num%2;
}