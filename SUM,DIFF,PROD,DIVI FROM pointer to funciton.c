#include <stdio.h>
// Write a program which take input from the arrays using pinter and passes to the fucntions
// which makes sum,diff,prod,and division of the numbers inside an arrays.
int sum(int *addition);// Function prottype which tells us which type of funciton is this.
int diff(int *difference);// Function prototype which tels us which types of funcion is this
int prod(int *product);// Function prototype which tells us whihc types of funciton is this
int divi(int *division);// Fucnction prototype whihc tells us which types of Funcito is this
int main ()

{
	int computer1[] = {12,34,54,67,34};
	int a;
	a = sum(computer1);// Function calls where the value inside function definition get
	// executed
	printf(" Addition of the number inside an arays is %d\n",a);
	
	printf("\n");
	
	int computer2[] = {123,34,20};
	int b;
	b = diff(computer2);// Function calls where the value inside funcion defitinion get
	// executed
	printf(" Difference of the number inside an arrays is %d\n",b);
	
	printf("\n");
	
	int computer3[] = {32,45,65,7};
	int c;
	c = prod(computer3);// Function calls where the value inside function definintion get
	// executed
	printf(" Product of the numbers inside an arrays is %d\n",c);
	
	printf("\n");
	
	int computer4[] = {14345,5};
	int d;
	d = divi(computer4);// Function calls where the value inside function definition get
	// executed
	printf(" Division of the number inside an arrays is %d\n",d);
	
	return 0;
}
int sum(int *addition)//Fucntion definintion where the value executed
{
	int summing;
	summing = *addition + *(addition+1) + *(addition+2) + *(addition+3) + *(addition);
	return summing;
}
int diff(int *difference)// Funciton definition where the value executed
{
	int minus;
	minus = *difference + *(difference+1) + *(difference+2);
	return minus;
}
int prod(int *product)// Fucntion definiton  where the value executed
{
	int mult;
	mult = *product * *(product+1) * *(product+2) * *(product+3);
	return mult;
}
int divi(int *division)// Function definition where the value executed
{
	int bhag;
	bhag = *division / *(division+1);
	return bhag;
}
