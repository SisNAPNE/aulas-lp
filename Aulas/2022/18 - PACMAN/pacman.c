#include "gea.h"
#include "keyboard.h"

int main() {

    int final = 0;
    int mapa[ALT][LAR];
    char jogada;

    
    iniciarMapa(mapa, 1);
    // EDIÇÃO DO MAPA
    while(final == 0) {
        desenharMapa(mapa, 1);
        jogada = getTecla();
        final = atualizarMapa(mapa, jogada);
    }

    // JOGO
    final = 0;
    while(final == 0) {
        desenharMapa(mapa, 0);
        jogada = getTecla();
        final = efetuarJogada(mapa, jogada);
    }

    return 0;
}