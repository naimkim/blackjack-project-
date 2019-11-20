#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//2장씩 초기카드 배부 한장씩 순서대 
int main(int argc, char *argv[]) {
	int i,j;
	int pullCard;
	int cardhold;
	int n_user;
	int x;
	
	
	
	
	//1. give one card for each players and dealer
	for (i=0;i<n_user;i++)
	{
		cardhold[i][0] = pullCard();//카드 트레이에서 하나씩 꺼내는 함슈  
		x=cardhold[0];
		printf("->dealer's first card: %i\n ->player[i]'s first card: %d\n",x,pullCard);
	}
	//2. 딜러랑 플레이어한테 두번째 카드주기 
	for (j=0;j<n_user;j++)
	{
		cardhold[i][1] = pullCard();
		
		printf("->dealer's second card:%d\n ->player[i]'s second card:%d\n",pullCard);
	}
	//3. give one card for me
	{
		cardhold[n_user][0] = pullCard();
	
		printf("->your first card:%d\n",pullCard);
	}

	//4. 나한테 두번째 카드주기
	{ 
		cardhold[n_user][1] = pullCard();
		
		printf("->your second card:%d\n",pullCard);
	}
		 
	return 0;
}
