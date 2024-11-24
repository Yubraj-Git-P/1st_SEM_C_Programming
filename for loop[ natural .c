#include <stdio.h>
// WAP to print the sum of the natural no from one o 100.
int main( ){
	
    int sum,n;
    
    printf(" n value :");
    scanf("%d",&n);
    
    sum = n*(n+1)/2;
    
    printf("The sum of the natural number is : %d",sum);
    
	return 0;
}
