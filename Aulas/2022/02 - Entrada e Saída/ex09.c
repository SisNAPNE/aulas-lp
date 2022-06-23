#include <stdio.h>

int main() {
    
    float media, tanque, result;

    printf("Media de consumo (km/l): ");
    scanf("%f", &media);
    printf("Gasolina no tanque (l): ");
    scanf("%f", &tanque);

    result = media * tanque;
    printf("Percorre: %f km", result);

    printf("\n");
    return 0;
}
