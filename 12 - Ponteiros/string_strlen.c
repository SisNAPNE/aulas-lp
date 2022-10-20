#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int total;
    // declara um ponteiro char e aloca memória
    char *str = malloc(50 * sizeof(char));

    printf("Digite uma string: ");
    gets(str);
    
    // utiliza a função strlen() para obter a quantidade
    // de letras da string "str"
    total = strlen(str);
    
    // apresenta o total de letras obtido pela função
    // strlen()
    printf("Total de letras: %i", total);
    
    printf("\n");
    return 0;
}