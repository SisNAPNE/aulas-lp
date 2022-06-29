#include <stdio.h>

int main() {

    int dia;

    printf("Digite um valor (1 - 7): ");
    scanf("%i", &dia);

    // verifica se o dia é igual a "1"
    if(dia == 1) {
       printf("Domingo");
    }
    // se não for igual a "1" mas for igual a "2"
    else if(dia == 2) {
       printf("Segunda");
    }
    // se não for igual a "2" mas for igual a "3"
    else if(dia == 3) {
       printf("Terça");
    }
    // se não for igual a "3" mas for igual a "4"
    else if(dia == 4) {
       printf("Quarta");
    }
    // se não for igual a "4" mas for igual a "5"
    else if(dia == 5) {
       printf("Quinta");
    }
    // se não for igual a "5" mas for igual a "6"
    else if(dia == 6) {
       printf("Sexta");
    }
    // se não for igual a "6" mas for igual a "7"
    else if(dia == 7) {
       printf("Sábado");
    }
    // se não for igual a nenhum dos anteriores
    else if(dia == 4) {
       printf("Inválido");
    }


    printf("\n");
    return 0;
}
