#include <stdio.h>

int main() {

    int v1, v2, aux;

    printf("Digite os valores: ");
    scanf("%i %i", &v1, &v2);
    
    if(v1 > v2) {
        aux = v1; // 10
        v1 = v2;  // 4
        v2 = aux; // 10
    }

    for(v1; v1 <= v2; v1++) {
        printf("%i ", v1);
    }
    
    printf("\n");
    return 0;
}
