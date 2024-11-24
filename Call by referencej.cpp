#include <stdio.h>

int sum(int a, int b);

int main () 

{   //call by reference is the way by which we can pass the values from the function to the main function.

    int a = 5, b = 8;
	
	printf(" The value of a+b is %d",sum(a,b));
	  
	return 0;
}
int sum(int a, int b)

{   
    int c;
    
    a = 32432;
    b = 554534;
    
    c = a+b; 
    
	return c;
}



