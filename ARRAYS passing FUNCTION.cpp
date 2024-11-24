#include <stdio.h>

int sum(int array[3]);

int main () 

{
     
	printf(" The sum of three arrays is %d",sum(int array[3]));
	
	
	return 0;
}
int sum(int array[3])

{
	int result;
	array[0] = 12;
	array[1] = 32;
	array[2] = 13;
	
	result = array[0] + array[1] + array[2];
	
	return result;
}
