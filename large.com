#include <stdio.h>

int main (){
	
	// Write a program in C language which swaps two variables 
	
	int a = 24;
	int b = 44;
	
	printf("The value of a is %d",a);
	printf("The value of b is %d",b);
	
	
	
	
}
