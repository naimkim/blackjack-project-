#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//카드 정보 출력 예를 들어 DiaA
int main(void){

	int pattern;  
  	int N_CARD;
  
  	pattern = number / 13;  
  	N_CARD= number % 13;  
  
  switch(pattern) {  
  case 0:  
    cout << "HART";
    break;  
  case 1:  
    cout <<"DIA";
    break;  
  case 2:  
    cout <<"SPAD";
    break;  
  case 3:  
    cout <<"CLOV";
    break;  
  default:  
    break;  
  }  
  

}  
	
	printf("%i %i",pattern,N_CARD);
	
	return 0;
}
