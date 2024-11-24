#include <stdio.h>
// Write a program to change the value of a variable to ten times of its current value Write 
// write a function and pass the value by reference.
int ten(int *i);

int main () 

{
	int i;
	
	printf(" Enter the value of the variable : ");
	scanf("%d",&i);
	
	
	int c;
	
	c = ten(&i);//  Note we should have to kept andpercent(&) insdide the ten()
    // Fucntion to print the value at which adress is given
		
    printf(" The value of the variable which changes its ten times is %d",c*10);
	
	// And whatever i used is an call by reference it means Sending the address of the
	// variable to the argunments
	// so by sending address of the variable to the argunments we conclude it.
	 
	return 0;
}
int ten(int *i)
{
   return *i;
	
}
