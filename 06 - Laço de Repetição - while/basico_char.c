#include <stdio.h>

int main() {

    char resp;

    // inicializa a variável resp com a letra 's'
    resp = 's';
    // repete as linhas entre as "{ }" enquanto o valor da variável resp for 's' ou 'S'
    while(resp == 's' || resp == 'S') {
        printf("deseja continuar (s) ou (n)? ");
        scanf(" %c", &resp);
    }
    
    printf("\n");
    return 0;
}
