#include <stdio.h>

int main() {

    char c1, c2, c3;

    printf("Digite três letras: ");
    scanf("%c %c %c", &c1, &c2, &c3);

    printf("- Combinação 1 = %c%c%c", c1, c2, c3);
    printf("\n- Combinação 2 = %c%c%c", c1, c3, c2);
    printf("\n- Combinação 3 = %c%c%c", c2, c1, c3);
    printf("\n- Combinação 4 = %c%c%c", c2, c3, c1);
    printf("\n- Combinação 5 = %c%c%c", c3, c1, c2);
    printf("\n- Combinação 6 = %c%c%c", c3, c2, c1);

    printf("\n");
    return 0;
}