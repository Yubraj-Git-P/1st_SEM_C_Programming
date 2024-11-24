#include <stdio.h>

// Write a program having a variable i , print the address of i, pass this variable to a 
// Fucntion and print its address are these adresses same ans and why ? 

void pass(int i);

int main() 

{
	int i;
	
	printf("Address of i is %u\n",&i);
	pass(i);
	
	return 0;
}
void pass(int i)
{
	printf(" Address of the variable after Function call is %u",&i);
	
}
// Note all the confusions about these program the address before function call and 
// After function call is too much different because the original value of the function
// is palced at one place inside the memory blocks and the another difference addresses
// is due to copy of the variable
