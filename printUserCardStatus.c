#include <stdio.h>
#include <stdlib.h>
#include "printCard.c"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// ���� turn�� player ī�� ���� ���
int printUserCardStatus(int argc, char *argv[]) {
	int i;
	
	printf("   -> card : ");
	for (i=0;i<cardcnt;i++)
		printCard(cardhold[user][i]);
	printf("\t ::: ");
	
	getAction();
	
	return 0;
}
