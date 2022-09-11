#include <stdio.h>

int main() {

    // Declara duas Strings
    char mes[20];
    char nome[20];

    // Captura a String utilizando scanf("%s")
    printf("Mês: ");
    scanf("%s", mes); 
    // Captura a String utilizando scanf("%s")
    printf("Nome: ");
    scanf("%s", nome); 
    // Exibe a String utilizando printf("%s")
    printf("[%s] [%s]", mes, nome);

    printf("\n");
    return 0;
}