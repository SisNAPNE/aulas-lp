#include "keyboard.h"
#include "gea.h"
#include "constantes.h"

int main() {
		
	int op, pmenu;
	
	op = 0;
	pmenu = 1;
	while(op != -1) {
		menuPrincipal(pmenu);
		// CAPTURA TECLA DIGITADA
		op = getTecla();
		if(op == BAIXO) { pmenu++; }
		else if(op == CIMA) { pmenu--; }
		// ENTER
		else if(op == ENTER) {
			
			switch(pmenu) {
				// JOGAR
				case 1:
						printf("JOGAR");
						break;
				// EDITAR MAPA
				case 2:
						printf("EDITAR MAPA");
						break;
				// CARREGAR MAPA
				case 3:
						printf("CARREGAR MAPA");
						break;
				// SAIR
				case 4:
						op = -1;
						break;
			}

			if(pmenu != 4) {
				fflush(stdout);
				__fpurge(stdin);
				getchar();
			}
		}
		
		if(pmenu > 4) pmenu = 1;
		if(pmenu < 1) pmenu = 4;
	}

	printf("\n");
	return 0;
}


