#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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

    int a, pos, fim = 0, vet[TAM];
    int mascara[TAM];

    srand(time(NULL));

    for(a=0; a<TAM; a++) {
        vet[a] = 0;
        mascara[a] = 0;
    }

    for(a=0; a<3; a++) {
        pos = rand()%TAM;

        if(vet[pos] == 0) {
            vet[pos] = 1;
        }
        else {
            a--;
        }
    }
    
    while(fim < 2) {
        system("clear");
        RED
        printf("|");
        for(a=0; a<TAM; a++) {
            if(a < 10) {
                printf("0");
            }
            printf("%i|", a);
        }

        
        WHITE
        printf("\n|");
        for(a=0; a<20; a++) {
            if(mascara[a] == 0) {
                printf("??|");
            }
            else {
                printf("0%i|", vet[a]);
            }
        }
        if(fim == 0) {
            // printf("\nJogada => ");
            // scanf("%i", &pos);
            pos = rand()%20;
            mascara[pos] = 1;
            printf("\nJogada => %i", pos);
            fflush(stdout);
            sleep(1);

            if(vet[pos] == 1) { 
                fim = 1; 
            }
        }
        else {
            fim = 2;
        }
    }
    

    printf("\n");
    return 0;
}
