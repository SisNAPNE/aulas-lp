#include <stdio.h>

int main() {

	char a, b, c, d, e, f, g, h, i;
	char jogada;
	
	printf("Digite uma jogada: ");
	scanf(" %c", &jogada);

	// Verifica Jogada
	switch(jogada) {

		case 'a':				// if(jogada == 'a') {
				a = 'O';	
				break;			//}

		case 'b':				// else if(jogada == 'b') {
				b = 'O';		
				break;			//}

		case 'c':				// else if(jogada == 'c') {
				c = 'O';	
				break;			//}

		case 'd':				// else if(jogada == 'd') {
				d = 'O';	
				break;			//}

		case 'e':				// else if(jogada == 'e') {
				e = 'O';	
				break;			//}
	
		case 'f':				// else if(jogada == 'f') {
				f = 'O';	
				break;			//}

		case 'g':				// else if(jogada == 'g') {
				g = 'O';	
				break;			//}

		case 'h':				// else if(jogada == 'h') {
				h = 'O';		
				break;			//}

		case 'i':				// else if(jogada == 'i') {
				i = 'O';	
				break;			//}
		
		default:				//else {
				printf("Inválida!");
				break;			//}
	}
	
	printf("\n\n");
	return 0;
}
