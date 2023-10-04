#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main() {

    int valor, ret, linha=1;
    FILE *fp;
    char str[80], c;
    float f;

    fp = fopen("dados.txt", "a+");

    if(fp == NULL) {
        printf("Não foi possível abrir o arquivo!\n");
        return 0;
    }

    do {
        // String
        if(linha%2 == 1) {
            ret = fscanf(fp, "%s", str);   
            if(ret == 1) {
                printf("%s\n", str);
            }
        }
        // Int ou Float
        else {
            // Int
            if(linha < 4) {
                ret = fscanf(fp, "%i", &valor);
                if(ret == 1) {
                    printf("%i\n", valor);
                }
            }
            // Float
            else {
                ret = fscanf(fp, "%f", &f);
                if(ret == 1) {
                    printf("%.4f\n", f);
                }
            }
        }

        linha++;

    } while(ret == 1);


    fclose(fp);
    printf("\n");
    return 0;
}

