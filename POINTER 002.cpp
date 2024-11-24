#include <stdio.h>
//  write a program which demostrate pointers
int main () 

{
	int a = 5;// Decalaring variables
	
	int *b; 
	b = &a;// Decalaring pointer

    //printf(" adress of a is %u\n",&a);
   // printf(" adress of %d",b);
    printf(" adress of a is %u",&a);
    printf(" value of a is %d",*(&a));
    printf(" value of a is %d",*b);
    //printf(" adress of ");
	
	return 0;
}
