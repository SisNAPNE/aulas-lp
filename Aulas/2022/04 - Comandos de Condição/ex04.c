#include <stdio.h>

int main() {

    int op, saldo, valor;

    printf("Digite seu saldo: ");
    scanf("%i", &saldo);

    printf("MENU:\n");
    printf("1 - saque\n2 - depósito\n> ");
    scanf("%i", &op);

    // SAQUE
    if(op == 1) {
        printf("Valor do saque: ");
        scanf("%i", &valor);

        if(valor > saldo) {
            printf("Saldo Insuficiente");
        }
        else {
            saldo = saldo - valor;
            printf("Novo saldo: %i", saldo);
        }
    }
    // DEPÓSITO
    else if(op == 2) {
        printf("Valor de depósito: ");
        scanf("%i", &valor);
        saldo = saldo + valor;
        printf("Novo saldo = %i", saldo);
    }
    // INVÁLIDA
    else {
        printf("Opção Inválida!");
    }

    
    printf("\n");
    return 0;
}
