#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//ī�带 ��� Ʈ���̿� ���� 
int main(int argc, char *argv[]) {
	int N_CARDSET;
	int CardTray;
	char HART;
	char DIA;
	char SPADE;
	char CLUB;
	int A,J,Q,K;
	int aChoice;
	int N_CARD[4][13]=
	{{HART,DIA,SPADE,CLUB},
	{A,2,3,4,5,6,7,8,9,10,J,Q,K}};
	
	printf("which number do you choice? \n 1-->1 11-->OTHERS\N");
	scanf("%d",aChoice);
	
	{
	if (aChoice=0)
	A=1;
	else 
	A=11;
	
	return A;
}
	
	J,Q,K=10;
	
	mixCardTray(
	N_CARD[4][13]=rand()%52+1;//�迭 �ϳ��ϳ��� ������Ѵٰ�....�� ����  
	N_CARDSET=N_CARD;
	);
	
	
	return 0;
}
