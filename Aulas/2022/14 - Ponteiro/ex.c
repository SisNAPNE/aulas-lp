#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int x, y;
    int *px;

    x = 10;
    px = &x;
    printf("[%p] = %i", px, *px);
    *px = 20;
    printf("\n%i", x);

     printf("\n");
    return 0;
}
