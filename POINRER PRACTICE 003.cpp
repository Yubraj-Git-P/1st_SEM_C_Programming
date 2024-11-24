#include <stdio.h>
// Write a prorgam to change the value of a variable 10 times of current value
//write a funciton and pass the value by reference.
int pass(int *a);

int main () 

{   
    int a;
    //printf(" Value of a : ");
    //scanf("%d",&a);
      
      
    printf(" Value 10 times of its origna is %d",10*a);
	
	return 0;
}
int pass(int *a)
{
	int a = 5;
	
	*a = 5;
	
	return *a; 
}
