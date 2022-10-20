#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

    int tam, comp;
    char *n1, *n2;

    printf("Tamanho: ");
    scanf("%i", &tam);

    n1 = malloc(tam * sizeof(char));
    n2 = malloc(tam * sizeof(char));

    printf("Digite dois nomes:\n");
    __fpurge(stdin);
    gets(n1);   // Gil
    __fpurge(stdin);
    gets(n2);   // carlos
    
    comp = strcmp(n1, n2);

    if(comp == 0) {
        printf("IGUAIS");
    }
    else if(comp > 0) {
        printf("n1 é maior que n2");
    }
    else {
        printf("n1 é menor que n2");
    }

    printf("\n");
    return 0;
}
