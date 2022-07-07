#include <stdio.h>

int main() {

    char resp;

    printf("Você gosta de LP (s) ou (n)? ");
    scanf("%c", &resp);

    if(resp == 's' || resp == 'S') {
        printf(";D");
    }
    else if(resp == 'n' || resp == 'N'){
        printf(":C");
    }
    else {
        printf("Inválido!");
    }
    
    printf("\n");
    return 0;
}
