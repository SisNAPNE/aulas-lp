#include <stdio.h>

int main() {

    char c1, c2;

    printf("Letras: ");
    scanf("%c %c", &c1, &c2);

    while(c1 <= c2) {
        printf("%c ", c1);
        c1++;
    }
    
    printf("\n");
    return 0;
}