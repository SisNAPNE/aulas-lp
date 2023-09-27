#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main() {

    FILE *fp;
    char str[100];

    fp = fopen("arquivo.txt", "a+");

    if(fp == NULL) {
        printf("Não foi possível abrir o arquivo!\n");
        return 0;
    }

    while(fgets(str, 100, fp) != NULL) {
        printf("%s", str);
    } 
    
    fclose(fp);
    printf("\n");
    return 0;
}