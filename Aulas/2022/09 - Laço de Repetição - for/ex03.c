#include <stdio.h>

int main() {

    int v1, v2, soma=0;

    printf("Digite os valores: ");
    scanf("%i %i", &v1, &v2);
    
    for(v1; v1 <= v2; v1++) {
        if(v1%2 == 0) {
            printf("%i ", v1);
            soma = soma + v1;
        }
    }
    printf(" = %i", soma);
    
    printf("\n");
    return 0;
}
