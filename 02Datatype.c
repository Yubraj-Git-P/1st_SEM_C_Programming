#include <stdio.h>
// Write a program which print even number from 2 to 100
int main (){
	
    int i = 1;
    /*
	 Do while loop id a type of loop which can executes at least once time.
	 Summary :
	 first condition is executes and check wheather the conditon is true or not 
	 at least once time run wheather the codition is right or wrong
	 so in this way a code is execute inside the Do while loop.
	 
	*/
    do{
    	printf("%d",i);
    	printf("\n");
    	i++;	
	} while(i<=100);
	
	return 0;
}
