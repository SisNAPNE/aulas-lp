#include <stdio.h>

int main() {

    int op = 10;
    int num;
    
    printf("Digite numero: ");
    scanf("%i", &num);

    if(num > 0) {
        printf("Positivo");
    }
    else if(num == 0) {
        printf("Neutro");
    }
    else {
        printf("Negativo");
    }
    


    printf("\n");
    return 0;
}
