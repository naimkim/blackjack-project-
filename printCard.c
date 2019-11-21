#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "configUser.c"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//카드 정보 출력 예를 들어 DiaA
int printCard(void){
	int n_user;
	int N_CARD[52]=
	{1,2,3,4,5,6,7,8,9,10,10,10,10,
	1,2,3,4,5,6,7,8,9,10,10,10,10,
	1,2,3,4,5,6,7,8,9,10,10,10,10,
	1,2,3,4,5,6,7,8,9,10,10,10,10};
	int pattern;
	int i;
	
	srand(time(NULL));
	
	pattern = N_CARD[52] / 13;  //i가 아니고 배열숫자라고 어케 말하지?? 

  	char HART,DIA,SPADE,CLUB;
  	
  	if (pattern==0)
  		pattern="HART";
  			
	else if (pattern==1)
  		pattern="DIA";
  		
  	else if (pattern==2)		
  		pattern="SPADE";
  		
  	else if (pattern==3)		
  		pattern="CLUB";
  	
	for(i=0;i<n_user;i++){
		
		if(i==0)
		printf("-->server   : %s %d",pattern,N_CARD[52]);
		
		else if(i==1)
		printf("-->you   : %s %d",pattern,N_CARD[52]);
	
		else
		printf("-->player[%d]  :  %s %d",i,pattern,N_CARD[52]);
	  
}
	return 0;
}
