#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mixCardtray.c"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int FUCTIONPLAY(int argc, char *argv[]) {
	int x;
	int N_CARD;
	
	srand((unsigned)time(NULL));
	x=rand()%N_CARD;
	
	printf("%d\n",x);
	
	return 0;
}
