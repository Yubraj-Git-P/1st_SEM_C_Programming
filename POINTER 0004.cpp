#include <stdio.h>
// write a program to print the value of a variable i, by using the 
// pointer to pointer type of a variable.c
int main () 

{   
    int i = 1234;
    
    int *a,**b;
    
    a = &i;
    
    b = &a;
    
    printf(" Address of i is %u\n",&i);
    
    printf(" Value stored at address of a is %d\n",*a);  
	
	printf(" Value stored at address of b is %d",*b);  
    


    
	//pointer to pointer : as we know if we want to store the address of the variable
	//we use the special type of variable called int *i POINTER .
	//and so, incase if we want to store the address of POINTER itself so at that time
	//we use pointer to pointer variabled.
	
	
	/*  IMPORTANT CODE ABOUT POINTERS
	
	int a = 50;
	
	int *p,**q;
	
	p = &a;
	q = &p;
	
	printf(" Address of the variable a is %u\n",&a);
	
	printf(" Address of the pointer p is %d\n",p);
	
	printf(" Address of the pointer  is %d\n",q); */
	
	return 0;
}
