#include <stdio.h>

// write a program in C languge to find the given num is divisible by 5 or not

int main (){
	
	int munnabhaiya;
	
    printf("At first enter your number: \n");
    scanf("%d",&munnabhaiya);
    
	if(munnabhaiya % 5 == 0){
		
		printf(" The given number is divisible by Five");
	} else {
		
		printf("The given number is not divisible by five");
	}
	

	return 0;
}
