#include <stdio.h>

int main() {

    int num, fat=1;

    printf("Numero: ");
    scanf("%i", &num); // 8

    for(num; num>=2; num--) {
        if(num == 2) {
            printf("%i = ", num);
        }
        else {
            printf("%i x ", num);
        }
        fat = fat * num;
    }
    printf("%i", fat);

    printf("\n");
    return 0;
}
