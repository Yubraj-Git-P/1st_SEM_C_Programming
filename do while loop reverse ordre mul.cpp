#include <stdio.h>

int main () {
	
    int b = 10;
    int num;
    
    printf(" num value : ");
    scanf("%d",&num);
    
    do{
    	
    	printf(" %d * %d = %d ", num,b,num*b);
    	printf("\n");
    	b--;
    	
	} while(b>=1);

	return 0;
}
