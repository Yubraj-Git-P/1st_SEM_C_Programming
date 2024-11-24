#include <stdio.h>
//Write a program to print sum of the natural number from 1 to 100.
int main ()
{
	int n;
	
	printf("Enter the vlaue of n: ");
	scanf("%d",&n);
	
	printf("Sum of natural no from 1 to 100 is %d",n*(n+1)/2);
	
	return 0;
}
