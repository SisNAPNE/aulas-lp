#include "biblio.h"

int main() {

    int op = -1;
    char *nome, *conteudo;

    while(op != 0) {
        menu();
        scanf("%i", &op);

        if(op == 1 || op == 2) {
            printf("Digite um nome: ");
            nome = scans();

            if(op == 1) {
                escreverArquivoChar("alunos.txt", nome);
            }
            else if(op == 2) {
                escreverArquivoString("alunos.txt", nome);
            }

            printf("\n[%s] Cadastrado com sucesso!", nome);
            printf("\nENTER para continuar...");
        }
        else if(op == 3 || op == 4) {

            if(op == 3) {
                conteudo = lerArquivoChar("alunos.txt");
            }
            else if(op == 4) {
                conteudo = lerArquivoString("alunos.txt");
            }

            printf("%s", conteudo);
            printf("\nENTER para continuar...");
        }
        else {
            if(op == 0) printf("\nAté logo!");
            else printf("\n[ERRO] Opção Inválida!");
        }

        __fpurge(stdin);
        getchar();
    }

    printf("\n");
    return 0;
}

