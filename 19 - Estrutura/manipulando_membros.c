#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

struct aluno{
	char nome[50];
	char curso[50];
	int turma;
};

int main() {

    struct aluno sala[20];

    printf("Digite a turma: ");
	scanf("%i", &sala[0].turma);

    printf("\n> Turma %i", sala[0].turma);

    printf("\n");
    return 0;
}