#include <stdio.h>
#include <time.h>

#define TAM 20

#define BLACK   printf("\033[0;30m");
#define RED     printf("\033[0;31m");
#define GREEN   printf("\033[0;32m");
#define YELLOW  printf("\033[0;33m");
#define BLUE    printf("\033[0;34m");
#define PURPLE  printf("\033[0;35m");
#define CYAN    printf("\033[0;36m");
#define WHITE   printf("\033[0;37m");

int main() {

    int a, vet[TAM];

    srand(time(NULL));

    RED
    printf("|");
    for(a=0; a<TAM; a++) {
        if(a < 10) {
            printf("0");
        }
        printf("%i|", a);
    }

    printf("\n|");
    WHITE
    for(a=0; a<20; a++) {
        vet[a] = 10 + (rand()%90);
        printf("%i|", vet[a]);
    }

    printf("\n");
    return 0;
}
