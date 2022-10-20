#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

    int tam, comp;
    char *n1, *n2, *n3;

    printf("Tamanho: ");
    scanf("%i", &tam);

    n1 = malloc(tam * sizeof(char));
    n2 = malloc(tam * sizeof(char));
    n3 = malloc((tam+tam+1) * sizeof(char));

    printf("Digite dois nomes:\n");
    __fpurge(stdin);
    gets(n1);  
    __fpurge(stdin);
    gets(n2);   
    
    strcpy(n3, n1);
    strcat(n3, "-");
    strcat(n3, n2);

    printf("%s", n3);

    printf("\n");
    return 0;
}
