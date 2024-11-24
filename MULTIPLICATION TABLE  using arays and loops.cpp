#include <stdio.h>

int main ()

{
	int mult[3][10];
	
	for(int i=0; i<10; i++)
	{ 
		mult[0][i] = 7*(i+1);
	}
    	for(int i=0; i<10; i++)
	{ 
        printf("The multiplication of 7 * %d is %d\n",(i+1),mult[0][i]); 
	}
	
	printf("\n");
	
	for(int a=0; a<10; a++)
	{ 
		mult[1][a] = 9*(a+1);
	}
    	for(int a=0; a<10; a++)
	{ 
        printf("The multiplication of 9 * %d is %d\n",(a+1),mult[1][a]); 
	}
	
	printf("\n");
	
	for(int x=0; x<10; x++)
	{ 
		mult[2][x] = 14*(x+1);
	}
    	for(int x=0; x<10; x++)
	{ 
        printf("The multiplication of 7 * %d is %d\n",(x+1),mult[2][x]); 
	}
	
	return 0;
}
