#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define BLACK   printf("\033[0;30m");
#define RED     printf("\033[0;31m");
#define GREEN   printf("\033[0;32m");
#define YELLOW  printf("\033[0;33m");
#define BLUE    printf("\033[0;34m");
#define PURPLE  printf("\033[0;35m");
#define CYAN    printf("\033[0;36m");
#define WHITE   printf("\033[0;37m");

#define LIN 10
#define COL 10

int main() {

	int a, lin, col, fim = 0;
	int eduardo[LIN][COL], mask[LIN][COL];

	srand(time(NULL));

	//  |0|1|2|3|4|
	// 0| | | | | |
	// 1| | | | | |
	// 2| | | | | |
	// 3| | | | | |
	// 4| | | | | |

	for(lin=0; lin<LIN; lin++) {
		for(col=0; col<COL; col++) {
			eduardo[lin][col]=0;
			mask[lin][col]=0;
		}
	}
	
	for(a=0; a<25; a++) {
		lin = rand()%LIN;
		col = rand()%COL;

		if(eduardo[lin][col] == 0) {
			eduardo[lin][col] = 1;
		}
		else {
			a--;
		}	
	}

	for(a=0; a<15; a++) {
		lin = rand()%LIN;
		col = rand()%COL;

		if(eduardo[lin][col] == 0) {
			eduardo[lin][col] = 3;
		}
		else {
			a--;
		}	
	}

	for(a=0; a<10; a++) {
		lin = rand()%LIN;
		col = rand()%COL;

		if(eduardo[lin][col] == 0) {
			eduardo[lin][col] = 5;
		}
		else {
			a--;
		}	
	}

	


	while(fim < 6) {

		system("clear");
		printf("   ");
		for(lin=0; lin<LIN; lin++) {
			YELLOW
			printf("|0%i", lin);
		}
		printf("|\n");
		for(lin=0; lin<LIN; lin++) {
			YELLOW
			printf("|0%i|", lin);
			for(col=0; col<COL; col++) {
				WHITE
				if(mask[lin][col] == 1) {
					YELLOW
					printf("0%i ", eduardo[lin][col]);
				}
				else {
					WHITE
					printf("@@ ");
				}
			}
			printf("\n");
		}

		if(fim < 5) {
			lin = rand()%LIN;
			col = rand()%COL;
			mask[lin][col] = 1;
			WHITE
			printf("Jogada: %i %i", lin, col);
			fflush(stdout);
			sleep(2);
		}

		fim++;
	}

	printf("\n\n");
	return 0;
}
