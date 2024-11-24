#include <stdio.h>
// Write a program of 2D array which tking output from the user and write it on the screen 
// using display function inside the content

int display(int arr[3][4]);// NOte in 2D arrays it is most important to write inside the Big brackets
int main ()// at the time of function definiton

{
	int arr[3][4];
	
	display(arr);
	
	return 0;
	
}int display(int arr[3][4])// Note it i most important to write inside the big brackets 
{// and most important to write inside the big brackets...
	//int arr[3][4];
	
	int i,j;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
		  printf("Enter the value of arr[%d][%d]",i,j);
		  scanf("%d",&arr[i][j]);	
		  printf("\n");		
		}
	}
	
	printf("\n");
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			printf(" The value of arr[%d][%d] is %d",i,j,arr[i][j]);
			printf("\n");
			
		}
	}
	
}
