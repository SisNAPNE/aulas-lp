#include <stdio.h>

int main() {

    char c1, c2, c3;

    printf("Digite a primeira letra: ");
    scanf(" %c", &c1);
    printf("Digite a segunda letra: ");
    scanf(" %c", &c2);
    printf("Digite a terceira letra: ");
    scanf(" %c", &c3);
    
    printf("Digitados: %c %c %c", c1, c2, c3);

    printf("\n");
    return 0;
}