#include <stdio.h>
#include <time.h>

int main() {

    int num;

    srand(time(NULL));

    num = rand()%101;
    printf("%i ", num); 
    num = rand()%101;
    printf("%i ", num); 

    printf("\n");
    return 0;
}
