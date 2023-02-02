#include <stdio.h>
#include <termios.h>
#include <unistd.h>

char getTecla();
int getch(void);

char getTecla() {

    char press = getch();

    // TECLA ESPECIAL
    if(press == 27) {
        press = getch(); 
        // DIRECIONAL
        if(press == 91) {      
            press = getch();
            // CIMA
            if(press == 65) return '^';		
            // BAIXO
            else if(press == 66) return '|'; 
            // DIREITA
            else if(press == 67) return '>';
            // ESQUERDA
            else if(press == 68) return '<';
        }
    }
    else {
        return press;
    }
}

int getch(void) {

    struct termios oldattr, newattr;
    int ch;

    tcgetattr( STDIN_FILENO, &oldattr);
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO);
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr);
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr);

    return ch;
}