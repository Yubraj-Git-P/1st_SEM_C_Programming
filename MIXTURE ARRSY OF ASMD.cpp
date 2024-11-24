#include <stdio.h>
// Write a program which add,minus,mult, and divi of two numbers by passing through
// concept of arrays :

int add(int adding[]);
int diff(int difference[]);
int prod(int product[]);
int divi(int division[]);
int main () 

{
	int array1[] = {234,123};
	int resultA = add(array1);
	printf(" Adding by passing two values through array is %d\n",resultA);
	printf(" value of array1[0] is %d\n",array1[0]);
	printf(" value of array1[1] is %d\n",array1[1]);
	
	printf("\n");
	
	int array2[] = {344,87};
	int resultB = diff(array2);
	printf(" Difference of the two numbers by passing through array is %d \n",resultB);
	printf(" Value of array2[0] is %d\n",array2[0]);
	printf(" Value of array2[1] is %d\n",array2[1]);
	
	printf("\n");
	
	int array3[] = {67,54};
	int resultC = prod(array3);
	printf(" Product of the two numbers is by passing through arrays is %d \n",resultC);
	printf(" Value of array3[0] is %d\n",array3[0]);
	printf("Value of array3[1] is %d\n",array3[1]);
	
	printf("\n");
	
	int array4[] = {1800,18};
	int resultD = divi(array4);
	printf(" Division of the two numbers is by passing through arrays is %d \n",resultD);
	printf(" Value of array4[0] is %d\n",array4[0]);
	printf(" Value of array4[1] is %d\n",array4[1]);
	printf("\n");
	
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
	b = difference[0] - difference[1];
	return b;
}
int prod(int product[])
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
