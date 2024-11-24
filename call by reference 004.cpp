#include <stdio.h>

void swap(int *a, int *b);

int main () 
{
	int a = 243;
	int b = 344;
	//int x,y;
	
	printf(" Value of a and b  before swap is %d and %d\n",a,b);
	
	swap(&a,&b);
	printf(" Value a and b after swapping is %d and %d\n",a,b);

	return 0;
}

void swap(int *a, int *b)

{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

   
