#include <stdio.h>

int main() {

    int num;

    printf("Digite um número: ");
    scanf("%i", & num);
    
    if(num>=10 && num<100) {
        printf("Possui dois dígitos!");
    }
    else {
        printf("NÃO possui dois dígitos!");
    }

    printf("\n");
    return 0;
}
