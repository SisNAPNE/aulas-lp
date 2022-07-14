#include <stdio.h>

int main() {

    int px, py;

    printf("Posição da bola (x, y): ");
    scanf("%i %i", &px, &py);

    if(px >= 0 && px <= 90 && py >=0 && py <= 120) {
        printf(" - Dentro");
    }
    else {
        printf(" - Fora");
    }

    printf("\n");
    return 0;
}
