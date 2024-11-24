#include <stdio.h>
// Repeatation of the problem 002....using scanf Function.ccc
int main ()

{
	int mult[10];
	
	int i;
	
	for(i=0; i<=9; i++)
	{
		printf(" Enter the multiplication %d::::::",(i+1));
		scanf("%d",&mult[i]);
		printf("\n");
	}
	
	for(i=0; i<=9; i++)
	{
		printf(" The multiplication of 5 * %d is %d\n",(i+1),mult[i]);
		printf("\n");
	}
	
	
	
	
	return 0;
}
