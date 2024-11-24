#include <stdio.h>
//Write a program using function which calculate the sum and average of two numbers
// Use pointer and print sum and average of two number in main functin.
int sum(int a, int b);

int average(int e, int f);

int main ()

{   int a,b;
    printf(" Enter the value of a :");
    scanf("%d",&a);
    
    printf(" Enter the value of b :");
    scanf("%d",&b);


	printf(" Value of sum of two numbers is %d\n",sum(a,b));
	
	int e,f;
	printf(" Enter the value of e:");
	scanf("%d",&e);
	
	printf(" Enter the value of f:");
	scanf("%d",&f);
	
	
	printf(" Value of average of two numbers is %d\n",average(e,f));
		
	return 0;
}
int sum(int a, int b)
{
    return a+b;
}
int average(int e, int f)
{
	int avresult;
	
	avresult = (e+f)/2;
	
	return avresult;
}
