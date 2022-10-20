#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // declara dois ponteiros char e aloca memória
    char *origem = malloc(50 * sizeof(char));
    char *destino = malloc(50 * sizeof(char));

    printf("Digite uma string: ");
    gets(destino);
    printf("Digite outra string: ");
    gets(origem);
    
    // utiliza a função strcat() para concatenar/juntar o conteúdo da
    // variável "destino" com o conteúdo da variável "origem"
    strcat(destino, origem);
    
    // apresenta o conteúdo concatenado dentro da variável "destino"
    // através do uso da função strcat()
    printf("Conteúdo concatenado: %s", destino);
    
    printf("\n");
    return 0;
}