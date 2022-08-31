#include <stdio.h>

int main() {

    int tempo;

    // 1) inicializa a variável tempo com valor 1
    // 2) repete as linhas entre as "{ }" enquanto o valor da variável tempo for menor que 50
    // 3) incrementa em "1" o valor da variável tempo
    for(tempo=1; tempo<50; tempo++) {
        printf("%i ", tempo);
        
    }
    
    printf("\n");
    return 0;
}