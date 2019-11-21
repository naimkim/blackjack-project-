#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//offercards½ÃÇàÁß 
int betDollar(void) {
   
   int dollar;
   srand(time(NULL));
   
   while(1)
   {
      printf("-> your betting (total:$50) : ");
      scanf("%d", &dollar); 
      
      if (dollar > 50) 
      {
         printf("you only have $50! bet again\n");
         continue;
      }
       else (dollar <= 50);
      {
         printf("-> player1 bets $%d (out of $50)\n", rand()%50);  
         printf("-> player2 bets $%d (out of $50)\n", rand()%50);
          
         printf("----------------------------");
         break;
      }   
   }
   
}
