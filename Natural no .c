#include <stdio.h>

int main () 
{
	int x;
	
	// program to print only odd num from 1 to 100.
	printf("Value of x: ");
	scanf("%d",&x);
    
    //1, 3, 5, 7,---99.
    //1+0, 2+1, 3+2, 4+3, ----49+50;
	for(x;x>=1 && x<100;x++) {
		
		printf("%d\n",x);			
	} 
	return 0;
}
