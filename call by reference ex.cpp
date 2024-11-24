#include <stdio.h>

void wrong_swap(int a, int b);// call by value example
void swap(int *a, int *b);// call by reference example

int main () 
{
	// call by value means sending value of the variables to the argunments.
	// call by reference means sending value of the adress to the argunments.
    	
    int x = 200;
    int y = 400;
    
	printf("The value of x and y before swap is %d and %d\n",x,y);
	
	//wrong_swap(x,y);// wrong due to call by value;
	//printf("The value of x and y after swap is %d and %d\n",x,y);     
	swap(&x,&y);
	printf(" The value of x and y after swapping is %d and %d\n",x,y);
	
	return 0;
}
void wrong_swap( int a, int b)
{
     int temp;// wrong swap is not working because it is a call by value example
	// and these the value never be changed at the swap Function
	// because one and only the copy of the variable is pass to the argunments
	 temp = a;
    a = b;
     b = temp;
     
}
void swap(int *a, int *b)
{
     int temp;/*
     swap(int a,int b) is working because one an only the adress of the variable 
	 is passed to the argunments so deu to this it is more acessible for the 
	 user to run the code inside he swap function. 
	*/
	 temp = *a;
	 *a = *b;
	 *b = temp;
	  
}


