#include <stdio.h>

int main() {

    int num, div, cont=0;

    printf("Numero: ");
    scanf("%i", &num); // 8

    for(div=1; div<=num; div++) {
        if(num%div == 0) {
            cont++;
        }
        // printf("%i ", div);
    }
    
    if(cont == 2) { 
        printf("PRIMO");
    }
    else {
        printf("NÃO PRIMO");
    }


    printf("\n");
    return 0;
}
