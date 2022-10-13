#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {

    int lin;
    char nomes[5][50];

    printf("Digite os nomes:\n");
    for(lin=0; lin<5; lin++) {
        __fpurge(stdin);
        gets(nomes[lin]);
    }

    printf("\nCONTEÚDO:\n");
    for(lin=0; lin<5; lin++) {
        printf("%s", nomes[lin]);
    }

    printf("\n");
    return 0;
}
