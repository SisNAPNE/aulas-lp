#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

#define BLACK   printf("\033[0;30m");
#define RED     printf("\033[0;31m");
#define GREEN   printf("\033[0;32m");
#define YELLOW  printf("\033[0;33m");
#define BLUE    printf("\033[0;34m");
#define PURPLE  printf("\033[0;35m");
#define CYAN    printf("\033[0;36m");
#define WHITE   printf("\033[0;37m");

int main() {

    int a, cont=0;
    char frase[TAM];

    printf("Digite uma frase: ");
    __fpurge(stdin);
    gets(frase);

    for(a=0; frase[a]!='\0'; a++) {}

    printf("Invertido: ");
    for(a=a-1; a>=0; a--) {
         if(frase[a] == 'a' 
            || frase[a] == 'e' 
            || frase[a] == 'i'
            || frase[a] == 'o' 
            || frase[a] == 'u'
            || frase[a] == 'A' 
            || frase[a] == 'E' 
            || frase[a] == 'I'
            || frase[a] == 'O' 
            || frase[a] == 'U'
            || frase[a] == ' ') {
                // YELLOW
                printf("%c", frase[a]);
            }
            else {
                printf("(%c)", frase[a]);
            }
    }

    printf("\n");
    return 0;
}
