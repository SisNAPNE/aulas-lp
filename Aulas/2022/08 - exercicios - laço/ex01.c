#include <stdio.h>

int main() {

    int acertos = 0, op, resp;
    int aa=0, as=0, am=0, ad=0;

    while(acertos < 4) {
        system("clear");
        printf("-----------------------------");
        printf("\n--- DESAFIO DA MATEMÁTICA ---");
        printf("\n-----------------------------");
        if(aa == 0) {
            printf("\n1 - Adição");
        }
        if(as == 0) {
            printf("\n2 - Subtração");
        }
        if(am == 0) {
            printf("\n3 - Multiplicação");
        }
        if(ad == 0) {
            printf("\n4 - Divisão");
        }
        printf("\n-----------------------------");
        printf("\n> ");
        scanf("%i", &op);

        // Adição
        if(op == 1) { 
            printf("56 + 78 = ");
            scanf("%i", &resp);

            if((56+78) == resp) {
                printf("\nACERTOU!");                
                acertos++;
                aa = 1;
            }
            else {
                printf("\nERROU!");                
            }

            __fpurge(stdin);
            getchar();
        }
        else if(op == 2) { 
            printf("768 - 533 = ");
            scanf("%i", &resp);

            if((768-533) == resp) {
                printf("\nACERTOU!");                
                acertos++;
                as = 1;
            }
            else {
                printf("\nERROU!");                
            }
            __fpurge(stdin);
            getchar();
        }
        // Multiplicação
        else if(op == 3) { 
            printf("65 * 12 = ");
            scanf("%i", &resp);

            if((65*12) == resp) {
                printf("\nACERTOU!");                
                acertos++;
                am = 1;
            }
            else {
                printf("\nERROU!");                
            }
            __fpurge(stdin);
            getchar();
        }
        // Divisão
        else if(op == 4) { 
            printf("50 / 5 = ");
            scanf("%i", &resp);

            if((50/5) == resp) {
                printf("\nACERTOU!");                
                acertos++;
                ad = 1;
            }
            else {
                printf("\nERROU!");                
            }
            __fpurge(stdin);
            getchar();
        }
    }

    printf("Obrigado por jogar!!");
    printf("\n");
    return 0;
}