#include <stdio.h>
// factorial number.
int factorial(int n);
int main () 
{

    int a;
    
    printf(" value of a : ");
    scanf("%d",&a);
    
    printf(" value of %d factorial is %d",a,factorial(a));
    
	return 0;
}
int factorial(int n){
	
	if(n==0 || n==1){

		return 1;
	} 
	else{
		
		
		
		return n*factorial(n-1);
        
	}
}
