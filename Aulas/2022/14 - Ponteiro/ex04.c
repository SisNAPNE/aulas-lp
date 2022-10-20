#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

    int tam;
    char *destino, *origem;

    printf("Tamanho: ");
    scanf("%i", &tam);

    destino = malloc(tam * sizeof(char));
    origem = malloc(tam * sizeof(char));

    printf("Digite um nome:\n");
    __fpurge(stdin);
    gets(origem);   // Gil
    
    strcpy(destino, origem);
    
    printf("%s", destino);

    printf("\n");
    return 0;
}
