#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main() {

    // declara duas variáveis inteiras
    int a, b;
    // declara um ponteiro inteiro
    int *p;

    // atribui o valor 12 a variável "a"
    a = 12;
    // aponta o ponteiro "p" para variável "a"
    // "p" recebe o endereço de memória da variável "a"
    p = &a;
    // atribui a "b" o conteúdo da variável apontada por "p"
    // nesse caso o conteúdo da variável "a"
    b = *p;
    // apresenta os valores armazenados em "a" e "b"
    printf("\na = %i / b = %i", a, b);

    printf("\n");
    return 0;
}