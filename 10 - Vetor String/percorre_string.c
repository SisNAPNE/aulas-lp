#include <stdio.h>

int main() {

    // Declara um Strings
    char nome[20];
    int a;

    // Captura a String utilizando gets()
    printf("Nome: ");
    gets(nome); 
    // Percorre a String até o '\0' - Exibe o Conteúdo e Calcula o Tamanho
    printf("Conteúdo: ");
    for(a=0; nome[a] != '\0'; a++) {
        printf("%c", nome[a]);
    }
    printf("\nTamanho: %i", a);

    printf("\n");
    return 0;
}