#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main() {

    int a, total;
    // declara um ponteiro inteiro
    int *p;

    printf("Digite o total de números: ");
    scanf("%i", &total);
    
    // aloca a quantidade de memória de acordo
    // como o total de números especificado
    p = malloc(total * sizeof(int));

    // percorre a área de memória alocada e apontada por "p"
    // armazenando valores inteiros nela
    for(a=0; a<total; a++) {
        p[a] = 10 + a;
        printf("%i ", p[a]);
    }

    printf("\n\nDigite o total de números: ");
    scanf("%i", &total);

    // realoca a quantidade de memória de acordo
    // como o total de números especificado, mantendo
    // o conteúdo já armazenado anteriormente
    p = realloc(p, total * sizeof(int));

    // percorre a área de memória realocada e apontada por "p"
    // armazenando novos valores inteiros nela
    for(a; a<total; a++) {
        p[a] = 20 + a;
    }

    // Exibe todo o conteúdo armazenado na memória realocada
    // e apontada por "p"
    for(a=0; a<total; a++) {
        printf("%i ", p[a]);
    }

    printf("\n");
    return 0;
}