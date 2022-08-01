#include <stdio.h>
#include <stdlib.h>

int main() {

	char a, b, c, d, e, f, g, h, i;
	
	a = ' ';
	b = ' ';
	c = ' ';
	d = ' ';
	e = ' ';
	f = ' ';
	g = ' ';
	h = ' ';
	i = ' ';

	system("clear");	
	printf ("======================================");
	printf ("\n============ JOGO DA VELHA ===========");	
	printf ("\n======================================");
	printf ("\n=== Tabuleiro ====== Jogo da Velha ===\n");
	printf ("\n    a | b | c           %c | %c | %c", a, b, c);
	printf ("\n    __|___|__           __|___|__");
	printf ("\n    d | e | f           %c | %c | %c", d, e, f);
	printf ("\n    __|___|__           __|___|__");
	printf ("\n    g | h | i           %c | %c | %c ", g, h, i);
	printf ("\n      |   |               |   |   ");
	printf ("\n\n======================================");
	printf ("\n Jogador 01-> [O]    Jogador 02-> [X]");
	printf ("\n======================================");
	
	printf("\n\n");
	return 0;
}
