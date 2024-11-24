#include <stdio.h>
// write a program to print natural number  from 1 to 50
int main ()

{
	int i;
	
	printf("Enter the value of i ");
	scanf("%d",&i);
	
	while(i>=10&&i<50)
	{	
			printf("%d\n",i);
			++i;
			
	}
	
	return 0;
}
