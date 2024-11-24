#include <stdio.h>

int main ()  

{
	int i = 5;
	
	int *ptr;// Decalaration syntax for POINTER
	
	ptr = &i;// adress of variable is given to the pointer;
	
	printf(" Value of adress of the operator is %d",ptr);
	
	printf(" value at adress of operator is %d",*ptr);
	
	
   return 0;
}
