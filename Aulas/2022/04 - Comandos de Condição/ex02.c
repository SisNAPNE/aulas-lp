#include <stdio.h>

int main() {

    float temp;

    printf("Temperatura ºC: ");
    scanf("%f", &temp);

    if(temp < 18) {
        printf("Clima frio");
    }
    else if(temp <= 25) {
        printf("Clima agradável");
    }
    else if(temp <= 40) {
        printf("Clima quente");
    }
    else {
        printf("Um forno");
    }
    
    printf("\n");
    return 0;
}
