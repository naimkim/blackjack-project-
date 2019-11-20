#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_CARDSET			1
#define N_CARD				52
#define N_DOLLAR			50


#define N_MAX_CARDNUM		13
#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17
#define N_MAX_BET			5

#define N_MIN_ENDCARD		30

#include "mixCardtray.c"
#include "betDollar.c"
#include "offerCards.c"
#include "printCardInitialStatus.c"
#include "printUserCardStatus.c"
#include "calcStepResult.c"
#include "getAction.c"
#include "checkResult.c"
#include "checkWinner.c"
 


//card tray object
int CardTray[N_CARDSET*N_CARD];
int cardIndex = 0;							


//player info
int dollar[N_MAX_USER];						//dollars that each player has
int n_user;									//number of users


//play yard information
int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];	//cards that currently the players hold
int cardSum[N_MAX_USER];					//sum of the cards
int bet[N_MAX_USER];						//current betting 
int gameEnd = 0; 							//game end flag

//some utility functions

//get an integer input from standard input (keyboard)
//return : input integer value
//         (-1 is returned if keyboard input was not integer)
int getIntegerInput(void) {
    int input, num;
    
    num = scanf("%d", &input);
    fflush(stdin);
    if (num != 1) //if it fails to get integer
        input = -1;
    
    return input;
}


//card processing functions ---------------

//calculate the actual card number in the blackjack game
int getCardNum(int cardnum) {
	
}

//print the card information (e.g. DiaA)
void printCard(int cardnum) {
	
	int N_CARD[4][13]=
	{{HART,DIA,SPADE,CLUB},
	{A,2,3,4,5,6,7,8,9,10,J,Q,K}
	A=1||11;
	J,Q,K=10;
	};
	
	
};


//card array controllers -------------------------------

//mix the card sets and put in the array
int mixCardTray(void) {
	
	
	mixCardTray=
}

//get one card from the tray
int pullCard(void) {
	
}



//playing game functions -----------------------------

//player settiing
int configUser(void) {
	
}


//betting
int betDollar(void) {
	
}


//offering initial 2 cards
void offerCards(void) {
	int i;
	//1. give two card for each players
	for (i=0;i<n_user;i++)
	{
		
		cardhold[i][0] = pullCard();
		cardhold[i][1] = pullCard();
		
		printf("dealer:?\n player[i]:%d\n",pullCard);
	}
	//2. give two card for the operator
	cardhold[n_user][0] = pullCard();
	cardhold[n_user][1] = pullCard();
	
	return;
}

//print initial card status
void printCardInitialStatus(void) {
	
}

int getAction(void) {
	
}


void printUserCardStatus(int user, int cardcnt) {
	int i;
	
	printf("   -> card : ");
	for (i=0;i<cardcnt;i++)
		printCard(cardhold[user][i]);
	printf("\n ::: ");
}




// calculate the card sum and see if : 1. under 21, 2. over 21, 3. blackjack
int calcStepResult() {
	
}

int checkResult() {
	
}

int checkWinner() {
	
}



int main(int argc, char *argv[]) {
	int roundIndex = 0;
	int max_user=5;
	int i;
	
	srand((unsigned)time(NULL));
	
	//set the number of players
	configUser(
	while(1){
		
	printf("HOW MANY PLAYERS WILL PLAY THIS GAME?(max is 5) : ");
	scanf("%d",&n_user);
		
	if (n_user<=0||n_user>max_user)
	printf("no\n");
	
	else
	break;
	}
	printf("-->card is mixed and put into the tray");
	);
	//Game initialization --------
	//1. players' dollar
	N_DOLLAR(
	
	);
	//2. card tray
	mixCardTray(
	
	);



	//Game start --------
	do {
		
		betDollar(
		int player [n_user];
		printf("\n------BETTING STEP--------");
		
		printf("\n-->input your betting dollar(total:$%d) : ",N_DOLLAR);
		scanf("%d",&dollar);
		if(dollar>50)
		printf("you have only $50.")
		else
		printf("->your betting(total:$%d) : %d",N_DOLLAR,dollar);
		for(player=1;player<n_user;player++);
		printf("\n-->player[] bets $%d",);
		);
		offerCards(
		
		); //1. give cards to all the players
		
		printCardInitialStatus();
		printf("\n------------------ GAME start --------------------------\n");
		
		//each player's turn
		for (player=1;player<n_user+2;player++) //each player
		{
			printf("roundIndex is %d",roundIndex);
			while () //do until the player dies or player says stop
			{
				//print current card status printUserCardStatus();
				printf("card : %s%d",)
				//check the card status ::: calcStepResult()
				
				//GO? STOP? ::: getAction()
				printf(":::ACTION? (0 - GO, others - STOP)");
				others=getIntegerInput;
				//check if the turn ends or not
			}
			roundIndex++;
			
			
		}
		
		//result
		checkResult(
		if
		
		
		);
	} while (gameEnd == 0);
	
	checkWinner();
	
	
	return 0;
}
