#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main() {

    int valor;
    FILE *fp;
    char str[80];
    float f;

    fp = fopen("dados.txt", "a+");

    if(fp == NULL) {
        printf("Não foi possível abrir o arquivo!\n");
        return 0;
    }

    fscanf(fp, "%s", str);
    fscanf(fp, "%i", &valor);
    fscanf(fp, "%s", str);
    fscanf(fp, "%i", &valor);
    fscanf(fp, "%s", str);
    fscanf(fp, "%f", &f);
    printf("%f", f);

    fclose(fp);
    printf("\n");
    return 0;
}

