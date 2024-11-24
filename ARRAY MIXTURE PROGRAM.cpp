#include <stdio.h>
// write a program which make sum diference product and division of the number using arrays
int add(int adding[]);
int diff(int difference[]);
int mult(int multiplying[]);
int divi(int division[]);
int main () 

{
	int array1[] = {123,32};
	int resultA;
    resultA = add(array1);
    printf(" The sum of the two numbers is %d\n",resultA);
	
	printf("\n");
	
    int array2[] = {23,12};
	int resultB;
	resultB = diff(array2);
	printf(" The differnce of the two numbers is %d\n",resultB);
	
	printf("\n");
	
	int array3[] = {21,34};
	int resultC;
	resultC = mult(array3);
	printf(" The product of the two numbers is %d \n",resultC);
	
	printf("\n");
	
	int array4[] = {1234,2};
	int resultD;
	resultD = divi(array4);
	printf(" The division of the two numbers is %d\n",resultD); 
	 
	
	return 0;
}
int add(int adding[]) 
{
	int a;
	a = adding[0] + adding[1];
	return a;
}
int diff(int difference[])
{
	int b;
	b = difference[0]-difference[1];
	return b;
}
int mult(int product[])
{
	int c;
	c = product[0]*product[1];
	return c; 
}
int divi(int division[])
{
	int d;
	d = division[0]/division[1];
	return d;
}
