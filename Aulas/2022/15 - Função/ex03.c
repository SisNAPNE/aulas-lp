#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

// Declaração / Protótipo
int perfeito(int num);

int main() {

    int n;

    printf("Numero: ");
    scanf("%i", &n);

    if(perfeito(n) == 1) {
        printf("PERFEITO");    
    }
    else {
        printf("IMPERFEITO");    
    } 


    printf("\n");
    return 0;
}

// implementação da função
int perfeito(int num) {

    int div, soma=0;

    for(div=1; div<num; div++) {
        if(num%div == 0) {
            soma = soma + div;
        }
    }

    if(soma == num) {
        return 1;
    }

    return 0;
}

    