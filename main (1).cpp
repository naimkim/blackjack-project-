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

#include "configUser.c"
#include "mixCardtray.c"
#include "betDollar.c"
#include "offerCards.c"
#include "printCardInitialStatus.c"
#include "printUserCardStatus.c"
#include "calcStepResult.c"
#include "getAction.c"
#include "checkResult.c"
#include "checkWinner.c"
#include "printCard.c"
 


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
int ROUND=1;

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
	int pattern;
	int HART, DIA, SPADE, CLUB;
	 switch(pattern){
 		 case 0 :
  		 printf("HART");
  		 break;
 		 case 1 :
  		 printf("DIA");
  		 break;
  		case 2 :
  		 printf("SPADE");
   		break;
 		 case 3 :
   		printf("CLUB");
   		break;
		 }
	
};


//card array controllers -------------------------------

//mix the card sets and put in the array-----------END
int mixCardTray(void) {
	
}

//get one card from the tray------------END
int pullCard(void) {
	
}



//playing game functions -----------------------------

//player settiing
int configUser(void) {
	
}


//betting
int betDollar(void) {
	
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
	int cardIndex = 0;//사용한 카드 갯수  
	int max_user=5;
	int i;
	int round=1; 
	
	srand((unsigned)time(NULL));
	
	//set the number of players
	configUser();
	//Game initialization --------
	//1. players' dollar
	N_DOLLAR=$50;
	//2. card tray
	mixCardTray();



	//Game start --------
	do {
		printf("---------ROUND %d(cardIndex:%d)--------",round,cardIndex);
		
		betDollar();
		offerCards(); //1. give cards to all the players
		printCardInitialStatus();
		printf("\n------------------ GAME start --------------------------\n");
		
		//each player's turn
		for (player=1;player<n_user+2;player++) //each player
		{
			printf("roundIndex is %d",roundIndex);
			while () //do until the player dies or player says stop
			{
				//print current card status printUserCardStatus();
				printf("--------------CARD OFFERING-----------");
				printCard();
				//check the card status ::: calcStepResult()
				
				//GO? STOP? ::: getAction()
				getAction();
				//check if the turn ends or not
				
			}
			
			
			
		}
		
		//result
		printf("------------------ROUND %d result----------",round);
		checkResult();
		
		round++;

	} while (gameEnd == 0);
	
	checkWinner();
	
	
	return 0;
}
