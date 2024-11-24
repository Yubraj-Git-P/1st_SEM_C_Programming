#include <stdio.h>

int main () 

{
	int i;
	
	int marks[5];
	
	for(i=0;i<5;i++)
	
	{
		printf("Enter the marks of %d student \n",i+1);
		scanf("%d",&marks[i]);
		
	}
	
	for(i=0;i<5;i++) 
	
	{
		
		printf(" Marks of %d student is %d \n",i+1,marks[i]);
		
		
	}
	
	return 0;
}
