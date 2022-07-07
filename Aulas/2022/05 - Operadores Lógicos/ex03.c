#include <stdio.h>

int main() {

    int n1, n2;

    printf("Dois números: ");
    scanf("%i %i", &n1, &n2);

    printf("[");
    if(n1 == 1) { printf("Domingo"); }
    else if(n1 == 2) { printf("segunda"); }
    else if(n1 == 3) { printf("terça"); }
    else if(n1 == 4) { printf("quarta"); }
    else if(n1 == 5) { printf("quinta"); }
    else if(n1 == 6) { printf("sexta"); }
    else if(n1 == 7) { printf("sábado");}

    if(n1 >= 1 && n1 <= 7 && n2 >=1 && n2 <=7) {
        printf(", ");
    }

    if(n2 == 1) { printf("Domingo"); }
    else if(n2 == 2) { printf("segunda"); }
    else if(n2 == 3) { printf("terça"); }
    else if(n2 == 4) { printf("quarta"); }
    else if(n2 == 5) { printf("quinta"); }
    else if(n2 == 6) { printf("sexta"); }
    else if(n2 == 7) { printf("sábado"); }
    printf("]");

    printf("\n");
    return 0;
}
