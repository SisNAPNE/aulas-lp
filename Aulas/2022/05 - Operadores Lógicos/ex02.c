#include <stdio.h>

int main() {

    float media;

    printf("Média: ");
    scanf("%f", &media);

    if(media >= 4 && media < 6) {
        printf("EM recuperação!");
    }
    else if(media < 0 || media > 10) {
        printf("Inválido!");
    }
    else {
        printf("Não está em recuperaçao!");
    }


    printf("\n");
    return 0;
}
