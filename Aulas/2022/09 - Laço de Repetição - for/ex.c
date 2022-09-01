#include <stdio.h>

int main() {

    int lin, col, larg, alt;

    printf("Largura: ");
    scanf("%i", &larg);
    printf("Altura: ");
    scanf("%i", &alt);


    for(lin = 0; lin < alt; lin++) {
        for(col = 0; col < larg; col++) {
            printf("* ", lin, col);
            fflush(stdout);
        }
        printf("\n");
    }    

    
    printf("\n");
    return 0;
}
