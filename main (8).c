#include <stdio.h>

int sum(int a, int b);

int main()

{   // perfect example of call by values.
    /* 
    from this we can say that the if we put another argunments inside 
    the variable a and b so that also we cannot change the value of 
    the variable from the function to main function
    
    conclusion we cannot change the vallue of the variable from The
    sum function to the main funcion
    
    But by using the call by reference we can change the value of the 
    variable from sum functino to the main funciton.
    
    */
    int a = 23, b = 12;
    
    printf("The value of a + b is %d\n",sum(a,b));
    printf(" The value of a and b is %d and %d\n",a,b);
    printf(" The value of a and b after function call is %d and %d\n",a,b);
    
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    
    return c;
    
    
}