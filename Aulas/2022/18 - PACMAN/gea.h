#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define COR_PRETO 		printf("\33[30m");
#define COR_VERMELHO 	printf("\33[31m");
#define COR_VERDE 		printf("\33[32m");
#define COR_LARANJA 	printf("\33[33m");
#define COR_AZUL 		printf("\33[34m");
#define COR_ROXO		printf("\33[35m");
#define COR_AGUA		printf("\33[36m");
#define COR_BRANCO 		printf("\33[37m");
#define EMOJI_PAC	    printf("🙂");
#define EMOJI_PAC2	    printf("😃");
#define EMOJI_PER	    printf("🤢");
#define EMOJI_MON	    printf("👻");
#define EMOJI_PAL	    printf("🤡");
#define EMOJI_VIDA	    printf("🧡");
#define EMOJI_PAR	    printf("🧱");
#define EMOJI_CAM	    printf("  ");

// https://www.assuntoscriativos.com.br/2013/08/simbolos-da-tecla-alt-que-voce-ainda.html

#define LAR         48
#define ALT         32
#define CAMINHO 	0
#define PAREDE 		1
#define PACMAN 		2
#define FANTASMA	3
#define TEMPF	    4
#define PALHACO	    5
#define TEMPP	    6
#define VIDA		7
#define PACMAN2	    8

int mat[ALT][LAR] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, },
    {1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 1, },
    {1, 0, 1, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, },
    {1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, },
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 7, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 7, 1, 0, 0, 0, 0, 0, 0, 0, 1, },
    {1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, },
    {1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 3, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, },
    {1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, },
    {1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, },
    {1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, },
    {1, 1, 0, 0, 7, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, },
    {1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, },
    {1, 1, 0, 0, 1, 0, 0, 3, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, },
    {1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, },
    {1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, },
    {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, },
    {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, },
    {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, },
    {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 5, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, },
    {1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 5, 1, 1, 1, 1, 0, 1, 1, },
    {1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, },
    {1, 1, 5, 0, 0, 0, 0, 0, 0, 7, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, },
    {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, },
    {1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 3, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 7, 1, 0, 1, 1, },
    {1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, },
    {1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 1, 1, },
    {1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 7, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 7, 1, 0, 0, 0, 0, 0, 0, 1, 1, },
    {1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 7, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, },
    {1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, },
    {1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, },
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 0, 0, 0, 0, 0, 0, 0, 1, 1, },
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, },
};

int px=1, py=1, vidas=0;
int pacx=1, pacy=1, quadro=0;

void iniciarMapa(int mapa[ALT][LAR], int flag);
void desenharMapa(int mapa[ALT][LAR], int flag);
int atualizarMapa(int mapa[ALT][LAR], char jogada);
int efetuarJogada(int mapa[ALT][LAR], char jogada);

void iniciarMapa(int mapa[ALT][LAR], int flag) {
    int lin, col;
    for(lin=0; lin<ALT; lin++) {
        for(col=0; col<LAR; col++) {
            if(flag == 0) {
                mapa[lin][col] = PAREDE;
            }
            else {
                mapa[lin][col] = mat[lin][col];
            }
        }
    }
}

void desenharMapa(int mapa[ALT][LAR], int flag) {
    int lin, col;
    system("clear");
    for(lin=0; lin<ALT; lin++) {
        for(col=0; col<LAR; col++) {
            if(lin == px && col == py) {
                COR_VERDE
                printf("__");    
            }
            else if(mapa[lin][col] == CAMINHO) {
                EMOJI_CAM
            }
            else if(mapa[lin][col] == PAREDE) {
                EMOJI_PAR
            }
            else if(mapa[lin][col] == PACMAN) {
                if(quadro == 0) {
                    EMOJI_PAC
                    quadro = 1;
                }
                else {
                    EMOJI_PAC2
                    quadro = 0;
                }
            }
            else if(mapa[lin][col] == FANTASMA) {
                EMOJI_MON
            }
            else if(mapa[lin][col] == PALHACO) {
                EMOJI_PAL
            }
            else if(mapa[lin][col] == VIDA) {
                EMOJI_VIDA
            } 
        }
        printf("\n");
    }
    if(flag == 1) {
        printf("(C: Caminho)(P: Parede)(I: Início)(V: Vida)(M: Monstro)(O: OK)");
    }
    else {
        printf("Vidas Capturadas: %i", vidas);
    }
}

int atualizarMapa(int mapa[ALT][LAR], char jogada) {

    // CIMA
    if(jogada == '^') {
       if(px > 0) {
            px--;
       }
    }
    // BAIXO
    else if(jogada == '|') {
        if(px < ALT-1) {
            px++;
        }
    }
    // DIREITA
    else if(jogada == '>') {
        if(py < LAR-1) {
            py++;
        }
    }
    // ESQUERDA
    else if(jogada == '<') {
        if(py > 0) {
            py--;
        }
    }
    // CAMINHO
    else if(jogada == 'c' || jogada == 'C') {
        mapa[px][py] = CAMINHO;
    }
    // PAREDE
    else if(jogada == 'p' || jogada == 'P') {
        mapa[px][py] = PAREDE;
    }
    // PACMAN
    else if(jogada == 'i' || jogada == 'I') {
        mapa[px][py] = PACMAN;
        pacx = px;
        pacy = py;
    }
    // FANTASMA
    else if(jogada == 'f' || jogada == 'F') {
        mapa[px][py] = FANTASMA;
    }
    // PALHAÇO
    else if(jogada == 'l' || jogada == 'L') {
        mapa[px][py] = PALHACO;
    }
    // VIDA
    else if(jogada == 'v' || jogada == 'V') {
        mapa[px][py] = VIDA;
    }
    else if(jogada == 'o' || jogada == 'O') {
        return 1;
    }

    return 0;
}

int efetuarJogada(int mapa[ALT][LAR], char jogada) {

     // CIMA
    if(jogada == '^') {
       if(pacx > 0) {
            mapa[pacx][pacy] = CAMINHO;
            pacx--;
            mapa[pacx][pacy] = PACMAN;
       }
    }
    // BAIXO
    else if(jogada == '|') {
        if(pacx < ALT-1) {
            mapa[pacx][pacy] = CAMINHO;
            pacx++;
            mapa[pacx][pacy] = PACMAN;
        }
    }
    // DIREITA
    else if(jogada == '>') {
        if(pacy < LAR-1) {
            mapa[pacx][pacy] = CAMINHO;
            pacy++;
            mapa[pacx][pacy] = PACMAN;
        }
    }
    // ESQUERDA
    else if(jogada == '<') {
        if(pacy > 0) {
            mapa[pacx][pacy] = CAMINHO;
            pacy--;
            mapa[pacx][pacy] = PACMAN;
        }
    }

    return 0;
}