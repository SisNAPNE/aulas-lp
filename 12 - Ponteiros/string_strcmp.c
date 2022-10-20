#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int ret;
    // declara dois ponteiros char e aloca memória
    char *str1 = malloc(50 * sizeof(char));
    char *str2 = malloc(50 * sizeof(char));

    printf("Digite uma string: ");
    gets(str1);
    printf("Digite outra string: ");
    gets(str2);

    // utiliza a função strcmp() para comparar as duas
    // strings digitadas
    ret = strcmp(str1, str2);
    
    if(ret == 0) { 
        printf("As duas strings são iguais!");
    }
    else if(ret > 0) {
        printf("A primeira string é maior que a segunda!");
    }
    else if(ret < 0){
        printf("A segunda string é maior que a primeira!");
    }
  
    printf("\n");
    return 0;
}