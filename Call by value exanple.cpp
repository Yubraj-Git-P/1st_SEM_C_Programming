#include <stdio.h>

int sum(int a, int b);

int main () 

{
    int a = 5, b = 15;
    
    printf(" The value of a + b is %d \n",sum(a,b));
    printf(" The value of a and b is %d and %d \n",a,b);
    printf(" The value of a and b after the Function call is %d and %d\n",a,b);
    
	return 0;
}
int sum(int a, int b)/*

here in this case call by value is used so that
the value given at the sum funciton is not assinged in  the operator because the major problem is this
value from the sum function is not assinged to the main function thats why the function does not go there

But in case of call by reference the value at the sum funcion should be assinged to the main fnction

because call by reference means sending adress to the argunments
*/
{
	int c;
	
	
	c = a + b;
	a = 6467;
	b= 4335;
	
	return c ;
}
