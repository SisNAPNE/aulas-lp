#ifndef __BIBLIO__
#define __BIBLIO__

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

#define BACKSPACE   8
#define ENTER       10

void menu();
char *lerArquivoChar(char *nome_arq);
char *lerArquivoString(char *nome_arq);
void escreverArquivoChar(char *nome_arq, char *str);
void escreverArquivoString(char *nome_arq, char *str);
char* scans();

void menu() {
    system("clear");
    printf("\n----------------------------");
    printf("\n1 - Cadastrar Aluno (fputc)");
    printf("\n2 - Cadastrar Aluno (fputs)");
    printf("\n3 - Listar Alunos (fgetc)");
    printf("\n4 - Listar Alunos(fgets)");
    printf("\n0 - Sair");
    printf("\n----------------------------");
    printf("\n> ");
}

char *lerArquivoChar(char *nome_arq) {

    int tam = 1;
    char c, *ret = malloc(1 * sizeof(char));
    FILE *arq = fopen(nome_arq, "r");

    if(arq != NULL) {
        do {
            c = fgetc(arq);
            if(c != EOF) {
                ret[tam-1] = c;
                tam++;
                ret = realloc(ret, tam * sizeof(char));
            }
        } while(c != EOF);

        fclose(arq);
    }
    ret[tam-1] = '\0';
    return ret;
}

char *lerArquivoString(char *nome_arq) {

    int tam = 1, flag = 0;
    char c, linha[80], *ret = malloc(1 * sizeof(char));
    FILE *arq = fopen(nome_arq, "r");

    if(arq != NULL) {
        while(fgets(linha, 80, arq) != NULL) {
            tam = strlen(linha) + tam;
            ret = realloc(ret, tam * sizeof(char));
            if(flag == 0) {
                strcpy(linha, ret);
                flag = 1;
            }
            else {
                strcat(ret, linha);
            }
        }
        fclose(arq);
        ret[tam-1] = '\0';
    }
    return ret;
}

void escreverArquivoChar(char *nome_arq, char *str) {

    int a;
    FILE *arq = fopen(nome_arq, "a+");

    if(arq != NULL) {
        for(a=0; str[a] != '\0'; a++) {
            fputc(str[a], arq);
        }
        fputc('\n', arq);
        fclose(arq);
    }
}

void escreverArquivoString(char *nome_arq, char *str) {

    int a;
    FILE *arq = fopen(nome_arq, "a+");

    if(arq != NULL) {
        fputs(str, arq);
        fputc('\n', arq);
        fclose(arq);
    }
}

char* scans() {

    int tam = 1;
    char c, *p = malloc(tam * sizeof(char));

    __fpurge(stdin);
    do {
        c = getchar();
        // 
        if(c == BACKSPACE) {
            tam--;
            p = realloc(p, tam * sizeof(char));
        }
        else if(c != ENTER) {
            p[tam-1] = c;
            tam++;
            p = realloc(p, tam * sizeof(char));
        }

    } while(c != '\n');

    p[tam-1] = '\0';
    return p;
}

#endif
