#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

// protótipo da função (declaração)
void substituir(char, char, char*);

int main() {
    
    int a, tam;
    char tirar, colocar, *nome;

    printf("Tamanho da string: ");
    scanf("%i", &tam);

    nome = malloc(tam * sizeof(char));

    printf("Nome: ");
    __fpurge(stdin);
    gets(nome);

    printf("Letra a ser tirada: ");
    __fpurge(stdin);
    scanf("%c", &tirar);

    printf("Letra a ser colocada: ");
    __fpurge(stdin);
    scanf("%c", &colocar);

    substituir(tirar, colocar, nome);

    printf("Nome: %s", nome);

    printf("\n");
    return 0;
}

// implementação da função
void substituir(char b, char c, char *vet) {
    int a;
    for(a=0; vet[a] != '\0'; a++) {
        if(vet[a] == b) {
            vet[a] = c;
        }
    }
}
