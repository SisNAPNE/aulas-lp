#include <stdio.h>

int main() {

    int idade;

    printf("Digite uma idade: ");
    scanf("%i", &idade);

    // Verifica se a idade é menor que 0 ou maior igual a 150
    if(idade < 0 || idade >= 150) {
        printf("Idade Inválida!");
    }
    else {
        printf("Idade OK!");
    }

    printf("\n");
    return 0;
}

