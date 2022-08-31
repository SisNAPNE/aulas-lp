#include <stdio.h>

int main() {

    char resp;

    // 1) inicializa a variável resp com a letra 's'
    // 2) repete as linhas entre as "{ }" enquanto o valor da variável resp for 's' ou 'S'
    for(resp = 's'; resp == 's' || resp == 'S';) {
        printf("deseja continuar (s) ou (n)? ");
        scanf(" %c", &resp);
    }
    
    printf("\n");
    return 0;
}
