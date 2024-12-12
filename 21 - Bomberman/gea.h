// https://www.freecodecamp.org/portuguese/news/todos-os-emojis-lista-de-emojis-para-copiar-e-colar/

#ifndef __GEA__
#define __GEA__

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include "constantes.h"

void menuPrincipal(int op);

void menuPrincipal(int op) {

    system("clear");
    printf("🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱\n");
    printf("🧱🧱🧱  BOMBERMAN 🧱🧱🧱🧱\n");
    printf("🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱\n");
    if(op == 1) { printf("🧱🧱 💣"); } else { printf("🧱🧱   "); }
    printf(" Jogar         🧱🧱\n");
    if(op == 2) { printf("🧱🧱 💣"); } else { printf("🧱🧱   "); }
    printf(" Editar Mapa   🧱🧱\n");
    if(op == 3) { printf("🧱🧱 💣"); } else { printf("🧱🧱   "); }
    printf(" Carregar Mapa 🧱🧱\n");
    if(op == 4) { printf("🧱🧱 💣"); } else { printf("🧱🧱   "); }
    printf(" Continuar Game🧱🧱\n");
    if(op == 5) { printf("🧱🧱 💣"); } else { printf("🧱🧱   "); }
    printf(" Sair          🧱🧱\n");
    printf("🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱\n");
    printf("🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱\n");
}

#endif