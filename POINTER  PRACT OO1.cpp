#include <stdio.h>
//write a program to print the adress of a variable use the adress to get the value of the 
// variable
int main () 

{
	int i = 565;
	int *j;
	j = &i;
	
	printf(" The adress of the variable is %u",&i);
	printf(" The value of the variable is %d",*j);
	
	return 0;
}
