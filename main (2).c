#include <stdio.h>
//write a program which make addition,subtrsction,multiplication and division of two numbers using Functions.
int sum(int a, int b);
int diff(int c, int d);
int mult(int e, int f);
int divi( int g, int h);

int main () {
    
    int a;
    a = sum(34,16);
    printf("The value of a+b is %d\n",a);
    
    int b;
    b = diff(56,25);
    printf(" The value of a-b is %d\n",b);
    
    int c;
    c = mult(43,23);
    printf(" The value of a*b is %d\n",c);
    
    int d;
    d = divi(555,5);
    printf(" The value of a/b is %d\n",d);
    
    return 0;
}
int sum(int a, int b){
    
    int resultA;
    resultA = a + b;
    return  resultA;
}
int diff(int c, int d){
    
    int resultB;
    resultB = c - d;
    return resultB;
}
int mult(int e , int f){
    
    int resultC;
    resultC = e*f;
    return resultC;
}
int divi(int g,int h){
    
    int resultD;
    resultD = g/h;
    return resultD; 
}