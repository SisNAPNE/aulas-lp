#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

// Declaração / Protótipo
int aprovado(double n1, double n2, double n3, double n4);

int main() {

    double n1, n2, n3, n4;
    int result;

    printf("Notas: ");
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    result = aprovado(n1, n2, n3, n4);

    if(result == -1) {
        printf("REPROVADO");    
    }
    else if(result == 0) { 
        printf("RECUPERAÇÃO");    
    }
    else {
        printf("APROVADO");    
    } 


    printf("\n");
    return 0;
}

// implementação da função
int aprovado(double n1, double n2, double n3, double n4) {

    double media = (n1 + n2 + n3 + n4)/4;

    if(media < 4) { 
        return -1;
    }
    else if(media >= 4 && media < 6) { 
        return 0;
    }

    return 1;
}
    