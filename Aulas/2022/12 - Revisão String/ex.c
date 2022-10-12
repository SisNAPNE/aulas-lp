#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main() {

    int a, b;
    char nome[100], aux;

    printf("Nome: ");
    gets(nome);

    // AHIODG

    for(a=0; nome[a] != '\0' ; a++) { 
        for(b=a; nome[b] != '\0' ; b++) { 
            if(nome[a] < nome[b]) {
                aux = nome[a];
                nome[a] = nome[b];
                nome[b] = aux;
            }
        }
    }
    printf("%s", nome);

    printf("\n");
    return 0;
}
