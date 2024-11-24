#include <stdio.h>

int main () 

{
	int i = 50;
	int *ptr,**btr;
	
	ptr = &i;
	btr = &ptr;
	
	
	printf(" Value of i is %d\n",i);
	
	printf(" Address of ptr is %d\n",ptr);
	
	printf(" Value at address of variable is %u \n",*ptr);
	
	printf(" Address of btr is %d \n",btr);
	
	printf(" Value stored at pointer to pointer is %d \n",*(*btr));
	
	
	
	return 0;
}
