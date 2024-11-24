#include <stdio.h>
// PLEASE make me an program for calculating the simple interest.

int main ()

{   int principle,rate,year;
    int simple_interest;
    
	printf("What is your principle : \n");
	scanf("%d",&principle);
	
	printf("What is your rate : \n");
	scanf("%d",&rate);
	
	printf("What is your year : \n");
	scanf("%d",&year);
	
	simple_interest = (principle*rate*year)/100;  
	
	printf("here finally your needed simple interest is %d",simple_interest);
	
		
	return 0;
}
