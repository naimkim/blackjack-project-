#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int max_user=5;
	int n_user;
	
	while(1){
		
	printf("HOW MANY PLAYERS WILL PLAY THIS GAME?(max is 5) : ");
	scanf("%d",&n_user);
		
	if (n_user<0){
		printf("no\n");
		continue;
	}
	else if(n_user>5){
		printf("too many!\n");
		continue;
	}
	else{
		printf("-->card is mixed and put into the tray");
		break;
	}
	
}
	return 0;
}
