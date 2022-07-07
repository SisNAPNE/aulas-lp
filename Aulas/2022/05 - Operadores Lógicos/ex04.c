#include <stdio.h>

int main() {

    char r1, r2;

    printf("Você pratica exercícios físicos (s) ou (n)? ");
    scanf("%c", &r1);
    printf("Você possui uma alimentação saudável (s) ou (n)? ");
    scanf(" %c", &r2);

    if((r1 == 's' || r1 == 'S') && (r2 == 's' || r2 == 'S')) {
        printf("Vida saudável!");
    }
    else if((r1 == 's' || r1 == 'S') || (r2 == 's' || r2 == 'S')) {
        printf("Você pode melhorar!");
    }
    else {
        printf("Você precisa mudar!");
    }

    
    printf("\n");
    return 0;
}
