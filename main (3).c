#include <stdio.h>
int sum(int a, int b);// Function prototype which defines the type of a Function
int diff(int c, int d);// Function prototype which defines the type of a Function
int prod(int e, int f);// Function prototype which defines the type of a Function
int divi(int g, int h);// Function prototype which defines the type of a Function
//Write a program which calulate sum diffference prod and division of different number using different functions.
int main ()

{   
    int a;
    a = sum(234,4456);// Funciton call which paste the executed value inside the Function definitio 
    printf(" Value of a + b is %d\n",a);
    
    int b;
    b = diff(1435134,13424);// Function call which paste the executed value inside the Function definitio
    printf(" Value of c - d is %d\n",b);
    
    int c;
    c = prod(3244450,5);// Function call  which paste the executed value inside the Function defintion
    printf(" Value of e * f is %d\n",c);
    
    int d;
    d = divi(1235,5);// Function call which paste the executed value inside the Function defintion
    printf(" Valur of g / h is %d\n",d);
    
}
int sum(int a, int b)// Function defintion place where the value executed.
{
    int resultA;
    resultA = a + b;
    return resultA;
}
int diff(int c, int d)// Function definiton place where the value executed.
{
    int resultB;
    resultB = c-d;
    return resultB;
}
int prod(int e, int f)// Function definition place where the value excecuted
{
    int resultC;
    resultC = e*f;
    return resultC;
}
int divi(int g, int h)// Function defintion place where the value executed
{
    int resultD;
    resultD = g/h;
    return resultD;
}

