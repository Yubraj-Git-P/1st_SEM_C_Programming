#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Number guessing game
int main () {
	
	int number,guess;
	int Gtimes=1;
	
	srand(time(0));
	number = rand() % 100 + 1;
	
	do{
		
		printf("Enter your guess : \n");
		scanf("%d",&guess);
		
		if(guess>number){
			
			printf(" -----------------------------its higher \n");
			
		} else if(guess<number){
			
			printf("-------------------------------its lower \n");
			
		} else{
			
			printf("You guess in %d times",Gtimes);
			
		} Gtimes++;
		
	} while(Gtimes!=guess);
	
	return 0;
}
