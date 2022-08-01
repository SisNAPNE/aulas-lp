#include <stdio.h>

int main() {

    char resp;

    // repete as linhas entre as "{ }" enquanto o valor da variável resp for 's' ou 'S'
    do {

        printf("deseja continuar (s) ou (n)? ");
        scanf(" %c", &resp);

    } while(resp == 's' || resp == 'S');
     
    
    printf("\n");
    return 0;
}
