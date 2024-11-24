#include <stdio.h>

// write a program which make compound effecet of c given number. 
int main () 

{
    int i,num;
    
    printf(" Enter your compounding number : ");
    scanf("%d",&num);
    
    // 2^1 , 2^2, 2^3, 2^4, 2^5, 2^5,
    
    for(i=1;i<=32;i++){
        
        printf(" Compunding power upto 32 is %f",pow(num,i));
        printf("\n");
    }
    
    
    
    return 0;
}