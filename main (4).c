#include <stdio.h>
#include <math.h>
// Write a program to calculate the area of a square using function.
int main ()

{
    int side;
    
    printf(" Enter the value of side :");
    scanf("%d",&side);
    
    printf(" Area of square is %f",pow(side,2));
    
    return 0;
}