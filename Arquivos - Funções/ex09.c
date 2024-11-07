#include <stdio.h>
#include <string.h>

int main() {

    int flag = 0;
    char nome[100], linha[100];
    FILE *fp;

    printf("Nome: ");
    fgets(nome, 100, stdin);

    fp = fopen("alunos.txt", "a+");

    if(fp == NULL) {
        printf("[ERRO]");
        return 0;
    }


    while (fgets(linha, 100, fp) != NULL) {
        if(strcmp(nome, linha) == 0) {
           printf("Achei!!");
           flag = 1;
        }
    }

    if(flag == 0) {
        printf("NÃO Achei!");
    }

    fclose(fp);
    printf("\n");
    return 0;
} 