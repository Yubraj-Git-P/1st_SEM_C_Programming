#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Gaming project guessing number between 1 and 100.
int main (){
	
	int number,guess;
	int Gtimes = 1;
	
	srand(time(0));
	number = rand() % 10 + 1;
	
	do{
		
		printf(" Please enter your Guessing number :\n ");
		scanf("%d",&guess);
		
		if(guess>number ){
			
			printf("-----------------------Its Higher number \n ");
			
		} else if(guess<number) {
			
			printf("----------------------Its LOwer \n");
			
		} else {
			
			printf(" CONGRATULATION you have guess the number in %d times   ",Gtimes);
			
		} Gtimes++;
	
	} while(Gtimes!=guess);

	return 0;
}
