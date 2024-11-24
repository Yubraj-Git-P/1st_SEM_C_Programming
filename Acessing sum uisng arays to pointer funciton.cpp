#include <stdio.h>
// Write a program which makadd the sum of numbers of arrays By passing through the pointers.
int sum(int *addition);
int main ()

{
	int computer[] = {23,34,45,6,67,78};
	
	int a;
	a = sum(computer);
	printf(" The total sum of the arrays inside and arrays is %d\n",a);
	
	return 0;
}
int sum(int *addition)
{
    
    int summing;
    
    summing = *addition + *(addition+1) + *(addition+2) + *(addition+3) + *(addition+4) + *(addition+5);
    
   return summing; 
 } 
