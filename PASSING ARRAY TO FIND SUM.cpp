#include <stdio.h>
// passing arays and Finding sum of the numbers
int adding(int array[]);
int main() 

{
	int arr[] = {20,30};
	int result;
	
	result = adding(arr); 
	
	printf(" The sum of the two numbers passing by array is %d",result);
	
	return 0;
}
int adding(int array[])
{
	int sum;
    
    sum = array[0] + array[1];
    
    return sum;
}
