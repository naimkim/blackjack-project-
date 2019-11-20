#include <stdio.h>
#include <stdlib.h>
#include "offerCards.c"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//초기 카드 배포 출력 
int main(int argc, char *argv[]) {
	int dealer;
	int you;
	int i,k;
	int player[k];
	int cardhold;
	int n_user=5;//임시로해놓은거다 
	int dfc=cardhold[0][0];//Dealer's First Card
	
	printf("------CARD OFFERING------\n");
	
		
		switch(i>=0&&i<n_user)
		{
		case (i=0);
		printf("--->dealer : %i %i\n",dfc,cardhold[0][1]);
		case (i=1);
		printf("->you : %i %i\n",cardhold[1][0],cardhold[1][1]);
		case (i>1); 
			{
			for(k=1;k<n_user;k++)
			printf("->player[k] :%i %i\n",cardhold[][0],cardhold[][1]);//아니 근데 그냥 offerCards함수랑 합치면 안되나? 좀그런가
			}
		}
	
	
	
	return 0;
}
