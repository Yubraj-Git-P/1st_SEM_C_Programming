#include <stdio.h>

int main ()
{
	int i;
	
	printf("Value :");
	scanf("%d",&i);
	
	do{
		printf("%d\n",i);
		i++;
	} while(i<20);
		
	return 0;
}
