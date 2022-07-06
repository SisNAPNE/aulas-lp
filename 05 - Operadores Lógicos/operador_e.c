#include <stdio.h>

int main() {

    int idade;

    printf("Digite uma idade: ");
    scanf("%i", &idade);

    // Verifica se a idade é menor ou igual a 12 e maior ou igual a 17
    if(idade >= 12 && idade <= 17) {
        printf("Adolescente!");
    }
    else {
        printf("Não é Adolescente!");
    }

    printf("\n");
    return 0;
}

