#include <stdio.h>
/*Write a program in c language to calculate two numbers you should have to taking input from
by using scanf functions*/
int main(){
	
    int a,b,sum;
    
    printf("enter the first number a : \n");
    scanf("%d",&a);
    
    printf("enter the second number b : \n");
	scanf("%d",&b);
	
	sum = a+b;
	
	printf("Finally the required value of the two numbers is %d",sum);
	
	return 0;
}
