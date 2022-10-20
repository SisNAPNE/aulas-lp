#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

    int tam, t1, t2;
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
    
    t1 = strlen(n1); // 3
    t2 = strlen(n2); // 6

    printf("%i + %i = %i", t1, t2, t1+t2);

    printf("\n");
    return 0;
}
