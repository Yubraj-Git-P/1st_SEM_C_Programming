#include <stdio.h>
// Using the concept of loop write a program to accept marks of five students in an array
// and print them in screen.
int main () 

{
    int i;
    
    int marks[i];
    
    for(i=0;i<5;i++)
	{
    	printf(" Enter the value of marks %d \n",i+1);
    	scanf("%d",&marks[i]);
    	
	}
	for(i=0;i<5;i++)
	{
		printf(" The value of %d student is %d \n",i+1,marks[i]);
   }
   
	return 0;
}
