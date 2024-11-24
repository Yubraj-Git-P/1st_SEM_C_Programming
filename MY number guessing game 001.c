#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Number guesing game
int main (){
	
	int guess,number;
	int Gtimes = 1;
	
	srand(time(0));
	number = rand()%100 + 1;
	
	do{
		printf(" Enter your guessed number between 1 and 100 \n: ");
		scanf("%d",&guess);
		
		if(guess>number){
			
			printf(" @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@Your number is greater \n");
		}
		 else if(guess<number){
		 	
	        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@Your number is lower \n");
				 
		 } else{
		 	
		 	printf(" You have find the number in %d times\n",Gtimes);
		 	
		 } Gtimes++;
		 	
	}while(guess!=number);
	
	return 0;
}
