#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#define TAM 20

int main() {

    int a;
    char str[TAM];

    printf("Digite seu nome: ");
    __fpurge(stdin);
    gets(str);
    
    // str(pos)     => |0|1|2|3 |4|...|19|
    // str(con)     => |g|i|l|\0| |...|  |

    for(a=0; str[a]!='\0'; a++) {
        printf("%c", str[a]);
    }


    printf("\n");
    return 0;
}
