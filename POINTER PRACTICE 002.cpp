#include <stdio.h>
// Write a program having a variable i print the adress of i pass this variable to function and print it
//  adress are these adress same €why ?
void vari(int i);
int main ()       // why the value of the adresses get different when passing through the 
                  // main function is one value 
                  // and passing through the another funciton is another value.
{
	int i;
	
    printf(" The adress of i is %u\n",&i);
	
	vari(i);
    
	
	
	return 0;
}
void vari(int i) 
{
	printf(" The adress of i is %u",&i);
	
}// why the adressses of these variable is one when calling to main function and anothere
// when callaling to another fucntion its because when calling from main function
// the imaginary value of the variable is original 
// but when calling from user defined fucntion the copy of that variable is passed
//so these makes the difference in adresses when calling from
// main function incase to the user defined fucntion
