#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int a, tam;
    char nome[40];
    char *pont;

    printf("Tamanho: ");
    scanf("%i", &tam);
    pont = malloc(tam * sizeof(char));

    for(a=0; a<tam; a++) {
        pont[a] = 'A';  
        printf("%c", pont[a]);
    }

    printf("\nNovo Tamanho: ");
    scanf("%i", &tam);
    pont = realloc(pont, tam * sizeof(char));

    for(a; a<tam; a++) {
        pont[a] = 'B';  
    }

    printf("\n");
    for(a=0; a<tam; a++) {
        printf("%c", pont[a]);
    }


    printf("\n");
    return 0;
}

