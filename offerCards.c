#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mixCardtray.c" 
void pullCard(void) {
	int x;
	int N_CARD;
	
	srand((unsigned)time(NULL));
	x=rand()%N_CARD;
	
	return 0;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//2장씩 초기카드 배부 한장씩 순서대로 
int offerCards(int argc, char *argv[]) {
	int i,j;
	int n_user=5;
	int cardhold[n_user][2];
		

	//1. give two card for each players 한장씩 따로따로 줘야되고 딜러-나-플레이어 순이다 
	for (i=0;i<n_user;i++){
		cardhold[i][1] = pullCard();
		
		for (j=0;j<n_user;j++){
			cardhold[i][0] = pullCard();
			break;
		}//2. give two card for the operator
		cardhold[n_user][0] = pullCard();
	}
	cardhold[n_user][1] = pullCard();
	
	
	
	
	return 0;
}
