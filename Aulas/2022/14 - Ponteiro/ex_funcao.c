#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

void mudar(int *px) {
    *px = 100;
}

int main() {

    int x = 10;

    printf("[%i]", x);
    mudar(&x); // mudar(px = &x);
    printf("\n[%i]", x);

     printf("\n");
    return 0;
}

