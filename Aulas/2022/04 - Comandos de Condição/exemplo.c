#include <stdio.h>

int main() {

    int op = 0;
    printf("1 - saque");
    printf("\n2 - depósito");
    printf("\n> ");
    scanf("%i", &op);

    if(op == 1) {
        printf("Saque");
    }
    else if(op == 2) {
        printf("Depósito");
    }
    else {
        printf("Inválida!");
    }
    

    printf("\n");
    return 0;
}
