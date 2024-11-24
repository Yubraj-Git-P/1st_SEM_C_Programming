#include <stdio.h>
int factorial(int a);
int main() 

{
	int a;
	
	printf(" The value of factorial %d is %d ",a,)
	
	return 0;
}
int factorial(int a)
{
	if(a==1 || a==0){
		
	   return 1;
	}
	else{
		
		int f;
		f = a*factorial(a-1);
		return f;
	}
	
}
