#include <stdio.h>

int main() {

    int saldo=0, op=1, valor;

    while(op != 0) {
        system("clear");
        printf("---------------------");
        printf("\nSaldo: R$%i", saldo);
        printf("\n---------------------");
        printf("\n1 - Depósito");
        printf("\n2 - Saque");
        printf("\n0 - Sair");
        printf("\n---------------------");
        printf("\n> ");
        scanf("%i", &op);

        if(op == 1) { 
            printf("Valor do depósito: ");
            scanf("%i", &valor);
            saldo = saldo + valor;
        }
        else if(op == 2) { 
            printf("Valor do saque: ");
            scanf("%i", &valor);
            saldo = saldo - valor;
        }
        else if(op == 0) { 
            printf("Tchau!!!");
        }
        else {
            printf("Opção Inválida!");
            __fpurge(stdin);
            getchar();
        }
    }

    printf("\n");
    return 0;
}