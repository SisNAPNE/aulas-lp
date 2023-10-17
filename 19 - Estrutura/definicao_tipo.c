#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

typedef struct {
	char nome[50];
	char curso[50];
	int turma;
}aluno;

void recebeEstrutura(aluno *sala);

int main() {

    aluno *sala = malloc(20 * sizeof(aluno));

    printf("Digite a turma: ");
	scanf("%i", &sala[0].turma);
    recebeEstrutura(sala);

    printf("\n");
    return 0;
}

void recebeEstrutura(aluno *sala) {
    printf("\n> Turma %i", sala[0].turma);
}