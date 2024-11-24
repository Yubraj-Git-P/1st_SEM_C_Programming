#include <stdio.h>
/* Write a program in C language to convert degree celsius into fohrenheit   */
/*  NOTE:  (o degree celsius into fohrenheit 

     0 degree celsius *9/5 ) + 32

        */
int main (){
	
	//Decalaring variables 
	int celsius;
	int fohrenheit;
	
	//printing the celsius amount 
    printf("Enter your celsius amount :   \n");
    scanf("%d",&celsius);
    
    // conversion of celsius into fohrenheit
    fohrenheit = (celsius*9/5)+32;
    
    
    //Finally printing the value of the degree celsius amount into fohrenheit 
    printf("The required conversion of DEGREE celsius into fohrenheit is %d",fohrenheit);
    
	return 0;
}

