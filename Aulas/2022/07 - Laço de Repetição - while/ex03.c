#include <stdio.h>

int main() {

    int v1, v2, soma = 0;

    printf("Valores: ");
    scanf("%i %i", &v1, &v2);
    
    while(v1 <= v2) {
        if(v1%2 == 0) {
            printf("%i ", v1);
            soma = soma + v1; // 6
        }
        v1++;
    }

    printf("= %i", soma);

    printf("\n");
    return 0;
}