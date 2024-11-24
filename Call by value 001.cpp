#include <stdio.h>

int sum(int a, int b);
// Call by value : call by value : call by value : call by value :N
int main () 

{
	int a = 45;
	int b = 55;
	
	printf(" Value of a + b is %d\n",sum(a,b));
	printf(" Value of a and b is %d and %d",a,b);
	
	return 0;
}
int sum(int a, int b)
{
    int result;
    
    result = a + b;
    
    a = 23423;// tala value rakhesi value aaudena
    b = 34245;// tala value aayasi value aaudena
	
	return result;
}
