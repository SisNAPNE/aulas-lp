#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main() {

    // declara uma variável inteira
    int a;
    // declara um ponteiro inteiro
    int *p;

    // atribui o valor 12 a variável "a"
    a = 12;
    // aponta o ponteiro "p" para variável "a"
    // "p" recebe o endereço de memória da variável "a"
    p = &a;
    
    // apresenta o conteúdo de "p" (endereço de memória apontado por "p")
    printf("\nConteúdo de p = %p", p);
    // apresenta o conteúdo do endereço de memória apontado por "p"
    printf("\nConteúdo do endereço apontado por p = %i", *p);

    printf("\n");
    return 0;
}