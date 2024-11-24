#include <stdio.h>
// Write a program in c language which makes sum,difference, and products.
int add(int adding[]);// Fucntion prototype which type of function is this
int sub(int subtracting[]);//Function prototype which defines which type of functio is this.
int prod(int product[]);// Fuction prototype which defines which type of function is this.
int divi(int division[]);// Function prototype which defines which type of function is this.
int main () 

{
	int array1[] = {30,70};
	int resultA;
	resultA = add(array1);// Function calls place where the executed values displayed.
	printf("The value of sum by adding two numbers is %d\n",resultA);
	
	printf("\n");
	
	int array2[] = {120,70};
	int resultB;
	resultB = sub(array2);// Function calls place where the executed values displayed.
	printf(" The value of minus by differencing two numbers is %d \n",resultB);
	
	printf("\n");
	
	int array3[] = {30,12};
	int resultC;// Function calls place where the executed values displayed.
	resultC = prod(array3);
	printf(" The value of product of two numbers is %d \n",resultC);
	
    printf("\n");
    
    int array4[] = {125,25};
    int resultD;
    resultD = divi(array4);// Function calls where the executed values displayed.
    printf(" The value of division of two numbers is %d \n",resultD);
	
	return 0;
} 
int add(int adding[])//Function definition which tells what to be executed inside the function.
{
	int a;
	a = adding[0] + adding[1];
	
	return a;
}
int sub(int subtracting[])// Function definition which tells what to executed inside the fucntion.
{
	
	int b;
	b = subtracting[0] - subtracting[1];
	
	return b;
}
int prod(int product[])// Function definition which tells what to executed inside the function.
{
	
	int c;
	c = product[0]*product[1];
    
    return c;

}
int divi(int division[])// Function definition which tells what to executed inside the function.
{
	int d;
	d = division[0] / division[1];
	
	return d;
}
