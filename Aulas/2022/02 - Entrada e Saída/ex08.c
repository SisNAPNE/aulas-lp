#include <stdio.h>

int main() {

    char l1, l2, l3;

    printf("Digite três letras: ");
    scanf("%c %c %c", &l1, &l2, &l3);
   
    printf("1ª = %c%c%c", l1, l2, l3);
    printf("\n2ª = %c%c%c", l1, l3, l2);
    printf("\n3ª = %c%c%c", l2, l1, l3);
    printf("\n4ª = %c%c%c", l2, l3, l1);
    printf("\n5ª = %c%c%c", l3, l1, l2);
    printf("\n6ª = %c%c%c", l3, l2, l1);
    
    printf("\n");
    return 0;
}
