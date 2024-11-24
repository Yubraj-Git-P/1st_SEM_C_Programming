#include <stdio.h>
//Write a program in C language which calculate the sum of the
// Natural numbers from 1 to 1000.
int main ()
{    
    //Decalaring the variables.
	int n;
	int TOTALSUMn;
	
	//Printing the value of n.
	printf("The value of n is : \n");
	scanf("%d",&n);
	
	//Calculating the total sum.
	TOTALSUMn = n*(n+1)/2;
	
	//Total sum.
	printf("The required total sum of the natural numbers is %d",TOTALSUMn);
	
	return 0;

}
