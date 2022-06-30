#include <stdio.h>

int main() {

    int saldo, valor;

    printf("Digite seu saldo: ");
    scanf("%i", &saldo);

    if(saldo > 0) {
        printf("Valor de saque: ");
        scanf("%i", &valor);

        if(valor > saldo) {
            printf("Saldo Insuficiente!");    
        }
        else {
            saldo = saldo - valor;
            printf("Novo saldo = %i", saldo);
        }
    }
    else {
        printf("Saldo Insuficiente!");
    }

    printf("\n");
    return 0;
}
