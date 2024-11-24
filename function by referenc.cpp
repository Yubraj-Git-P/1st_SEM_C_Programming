#include <stdio.h>

int sum(in *a, int *b);

int main () 

{
	int x = 5;;
	int y = 10;
	
	printf(" value of a and b is %d and %d\n",a,b);
	
	
	return 0;
}
int sum(int a, int b){
	
	int c;
	
	c = *a + *b;
	a = 98;
	b = 32;
	
	return c;
}
