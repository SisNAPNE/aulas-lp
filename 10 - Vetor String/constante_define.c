#include <stdio.h>

// Define a constante de nome PI e valor 3.1415
#define PI 3.1415

int main() {

    double raio, comp;

    printf("Raio da Circunferência: ");
    scanf("%lf", &raio);
    // Calcula o comprimento da circunferência
    comp = 2 * PI * raio;
    printf("Comprimento: %.2lf", comp);
    
    printf("\n");
    return 0;
}