#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // declara dois ponteiros char e aloca memória
    char *origem = malloc(50 * sizeof(char));
    char *destino = malloc(50 * sizeof(char));

    printf("Digite uma string: ");
    gets(origem);
    
    // utiliza a função strcpy() para copiar o conteúdo da
    // variável "origem" para variável "destino"
    strcpy(destino, origem);
    
    // apresenta o conteúdo copiado para variável "destino"
    // através do uso da função strcpy()
    printf("Conteúdo copiado: %s", destino);
    
    printf("\n");
    return 0;
}