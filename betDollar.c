#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
   int dollar;
   int i;
   int n_user=5;//또 막설정했으니까 다시 고치기. 
   
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
       else if (dollar <= 50)
      {
      	for(i=1;i<n_user+1;i++)
         printf("-> player[%d] bets $%d (out of $50)\n",i,rand()%50);
       
      }
	  printf("----------------");
   }
   
	return 0;
}
