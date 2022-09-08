#include <stdio.h>
#include <time.h>

int main() {

    int a, vet[20];

    srand(time(NULL));

    for(a=0; a<20; a++) {
        vet[a] = 10 + (rand()%90);
        printf("%i ", vet[a]);
    }

    printf("\n");
    return 0;
}
