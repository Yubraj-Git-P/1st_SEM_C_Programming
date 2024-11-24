#include <stdio.h>
// write a program to print the adress of a variable use these adress to get the value of variable.
int main () 

{
	int a = 50;
	int *i;
	i = &a;// here we should not write like this *I = &A;
	
	/*
	Decaalration of pointer is :
	
	int a = 50;
	int *i;
	i = &a;
	
	Decalaration of pointer is :
	int a = 50;
	int *i;
	i = &a;
	
	Decalaration of pointer is :
	int a = 50;
	int *i;
	i = &a;
	
	Decalaraion of pointer is :
	int a = 50;
	itn *i;
	i =&a;
	
	decalaration of pointer is :
	int a = 50;
	int *i;
	i = &a;
		
	*/
	
	
	printf(" The adress of these variable a is %u\n",&a);
	
	printf(" The value of the variable is %d",*i);
	
	return 0;
}
