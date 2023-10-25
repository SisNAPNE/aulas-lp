#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

typedef struct {
	char nome[50];
	char data[15];
} pessoa;

int main() {

    int total = 0;
    char resp;
    pessoa aluno;
    FILE *fp = fopen("aluno.bin", "a+");

    if(fp == NULL) {
        printf("Não foi possível abrir o arquivo binário!");
        return 0;
    }

    do {
        printf("Nome: ");
        __fpurge(stdin);
        fgets(aluno.nome, 50, stdin);
        printf("Data de Nascimento: ");
        __fpurge(stdin);
        fgets(aluno.data, 15, stdin);
        // Esceve os dados no arquivo
        fwrite(&aluno, sizeof(pessoa), 1, fp);
        total++;

        printf("\nDeseja continuar (s) ou (n)? ");
        __fpurge(stdin);
        scanf("%c", &resp);
        printf("\n");

    } while(resp == 's' || resp == 'S');
    
    fclose(fp);
    printf("\n- Total de alunos cadastrados (%i)", total);


    printf("\n");
    return 0;
}

