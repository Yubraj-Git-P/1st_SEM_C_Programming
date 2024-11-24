#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//My game project.
int main () {
	
	int number,guess;
	int Gtimes = 1;
	
	srand(time(0));
	number = rand() % 100 + 1;
	
	do{
		
		printf(" Enter your guessing number : ");
		scanf("%d",&guess);
		
		if(guess>number){
			
			printf(" --------------------Higher number\n");
			
		} else if (guess<number){
			
			printf("--------------------Lower number\n");
			
		} else{
			
			printf(" You have guess the number in %d times\n",Gtimes);
			
		} Gtimes++;
	
	} while(Gtimes!=guess);
	
	return 0;
}
