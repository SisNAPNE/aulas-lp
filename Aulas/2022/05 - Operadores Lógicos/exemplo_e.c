#include <stdio.h>

int main() {

    float nota;

    printf("Nota: ");
    scanf("%f", &nota);

    // A >= 9.0 
    if(nota >= 9 && nota <= 10) {
        printf("A - aprovado!");
    }
    //  8.0 =< B < 9.0
    else if(nota < 9 && nota >= 8) {
        printf("B - aprovado!");
    }
    //  6.0 =< C < 8.0
    else if(nota < 8 && nota >= 6) {
        printf("C - aprovado!");
    }
    // D
    else if(nota < 6 && nota >=0){
       printf("D - reprovado!"); 
    }
    else {
        printf("INválido!"); 
    }

    printf("\n");
    return 0;
}
