#include <stdio.h>

int main() {

    int num;

    printf("Digite um número: ");
    scanf("%i", &num);
    
    if(num >= 10) {
        printf("Maior ou igual a 10");
    }
    else {
        printf("Não é Maior ou igual a 10");
    }


    printf("\n");
    return 0;
}
