#include <stdio.h>
// Product of two numbers by passing Arrays to Function :
int prod(int product[]);
int main () 

{
	int array[] = {2,3};
	int result;
	result = prod(array);
	
	printf(" The value of product is %d \n",result);	
}
int prod(int product[]){
	
	int a;
	a = product[0]*product[1];
	
	return a;
}
