#include <stdio.h>
// Recursion is the process of the calling the Function itself by using the same Funciton.c.
int factorial(int x);
int main () 

{
	int a;
	
	printf(" Enter the value of a : ");
	scanf("%d",&a);
	
	printf(" The factorial of %d is %d",a,factorial(a));

	return 0;
}
int factorial(int x){// Here is the function call 
	
	if(x== 1 || x==0){
		return 1;
	}
	else{
	
	    return x*factorial(x-1);// And again the same function called it again by the same function
	}
}
