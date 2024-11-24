#include <stdio.h>
//Function .c
int sum(int a, int b);//Function prototype
int diff(int c, int d);//Function prototype
int prod(int e, int f);//Function prototype
int div(int g, int h);//Function prototype
//Function prototype is a way which defines that which type of fucntion we are going to be use in the current program.
int main () 
{
	//Function call is the place where we are going to execute the value or program which is kept inside the functio definition
	int a;
	a = sum(5,10);//Function call
	printf(" Value of sum is %d\n",a);
	
	int b; 
	b = diff(20,10);//Function call
	printf(" Value of diff is %d\n",b);
	
	int c;
	c = prod(3,4);//Function call 
	printf(" Value of prod is %d\n",c);
	
	int d;
	d = div(50,10);//Functiion call
    printf(" Value of div is %d\n",d);
	
	return 0;
	
} // Notable point that : a is a value which mean inside main function a is a one type of integer and inside the sum function 
// a is an another type of the function. so  


//Function defintioin is the place where we are going to execute the value of the program.
int sum(int a, int b){//Function defintion
	int resultA;
	resultA = a + b;
	return resultA;
}
int diff(int c, int d){//Function definition 
	
	int resultB;
	resultB = c - d;
	return resultB;
}
int prod(int e, int f){//Function defintion
	
	int resultC;
	resultC = e*f;
	return resultC;
}
int div(int g, int h){//Function definition
	
	int resultD;
	resultD = g/h;
	return resultD;
}
