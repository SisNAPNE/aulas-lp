#include <stdio.h>
#include <stdio_ext.h>

int main() {

    char c1, c2, c3;

    printf("Digite a primeira letra: ");
    __fpurge(stdin); // fflush(stdin);
    scanf("%c", &c1);
    printf("Digite a segunda letra: ");
    __fpurge(stdin);
    scanf("%c", &c2);
    printf("Digite a terceira letra: ");
    __fpurge(stdin);
    scanf("%c", &c3);
    
    printf("Digitados: %c %c %c", c1, c2, c3);

    printf("\n");
    return 0;
}