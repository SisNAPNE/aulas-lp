#include <stdio.h>

int main() {

    int v1, v2;

    printf("Valores: ");
    scanf("%i %i", &v1, &v2); // 3 10

    while(v1 <= v2) {
        if(v1%2 == 1) {
            printf("%i ", v1);
        }
        v1++;
    }

    printf("\n");
    return 0;
}