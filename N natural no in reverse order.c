#include <stdio.h>

int main ()

{   int i;
    
    printf("Value : ");
    scanf("%d",&i);
    
    do{
    	
    	printf("%d\n",i);
    	i++;
	} while(i>=22&&i<=102);
	
	return 0;
}
