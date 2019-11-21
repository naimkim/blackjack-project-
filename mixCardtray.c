#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//카드를 섞어서 트레이에 넣음 그럼 트레이는 메모리공간인가? 
int main(int argc, char *argv[]) {
	
	int N_CARDSET={NULL};
	int N_CARD[52]=
	{1,2,3,4,5,6,7,8,9,10,10,10,10,
	1,2,3,4,5,6,7,8,9,10,10,10,10,
	1,2,3,4,5,6,7,8,9,10,10,10,10,
	1,2,3,4,5,6,7,8,9,10,10,10,10};//hart, dia, spade, club
	int CardTray;
	int i,j,k;

	srand(time(NULL));
	
	//카드 섞으려면 
	for(i=0;i<52;i++){
		
		N_CARD[i]=(rand()%52)+1;
		
		for(j=0;j<i;j++){
			
			if(N_CARD[i] == N_CARD[j])
			{ i--;
			 break;
			 }
		}
	}

	
	N_CARDSET=N_CARD;
	CardTray=N_CARDSET;
	
	printf("%d",N_CARD);
 
	return 0;
}
