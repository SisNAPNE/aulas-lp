#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

typedef struct {
	char nome[50];
	char data[15];
}pessoa;

int main() {

    int retorno;
    pessoa aluno;
    FILE *fp = fopen("aluno.bin", "a+");

    if(fp == NULL) {
        printf("Não foi possível abrir o arquivo binário!");
        return 0;
    }

    do {
        // Efetua a leitura do arquivo
        retorno = fread(&aluno, sizeof(pessoa), 1, fp);

        if(retorno == 1) {
            printf("%s%s\n", aluno.nome, aluno.data);
        }

    } while(retorno == 1);
    
    fclose(fp);

    printf("\n");
    return 0;
}

