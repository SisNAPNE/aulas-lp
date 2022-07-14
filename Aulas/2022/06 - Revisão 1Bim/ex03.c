#include <stdio.h>

int main() {

    int pa, pb, pf;

    printf("Pontos (Argentina/Brasil/França): ");
    scanf("%i %i %i", &pa, &pb, &pf);

    if(pa > pb && pa > pf) {
        printf("Argentina ");
        if(pb > pf) {
            printf("Brasil França");
        }
        else {
            printf("França Brasil");
        }
    }
    else if(pb > pa && pb > pf) {
        printf("Brasil ");
        if(pa > pf) {
            printf("Argentina França");
        }
        else {
            printf("França Argentina");
        }
    }
    else {
        printf("França ");
        if(pa > pb) {
            printf("Argentina Brasil");
        }
        else {
            printf("Brasil Argentina");
        }
    }

    printf("\n");
    return 0;
}
