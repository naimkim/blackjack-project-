#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//ī�带 ��� Ʈ���̿� ���� �׷� Ʈ���̴� �޸𸮰����ΰ�? 
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
	
	//ī�� �������� 
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
