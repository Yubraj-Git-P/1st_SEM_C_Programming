#include <stdio.h>
// Write a program which print the multiplication table given integer n :
int main ()

{
	int mult[10];
	
	int n;
	
	printf(" Enter your multiplicatioin number is :");
	scanf("%d",&n);
	
	for(int i=0; i<10; i++)
	{
        mult[i] = n*(i+1); 		
	}
	 
	for(int i=0; i<10; i++)
	{
        printf(" The multipliaction of %d * %d is %d\n",n,(i+1),mult[i]);		
	}
	
	 
	  
	return 0;
}
