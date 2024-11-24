#include <stdio.h>

//Write a program is C language to find the greatest number among given five numbers;

int main (){
	
	int num1,num2,num3,num4,num5;
	
	printf("The first number is num1 :  \n");
	scanf("%d",&num1);
	
	printf("The second number is num2 :  \n");
	scanf("%d",&num2);
	
	printf("The third number is num3 :  \n");
	scanf("%d",&num3);
	
		
	if(num1 > num2 || num1 > num3 || num1 > num4 || num1 > num5){
		
		printf("The first number num1 is the greatest number\n");
		
	} else if(num2 > num1 || num2 > num3 || num2 > num4 || num2 > num5){
		
		printf("The second number num2  is the greatest number \n");
		
	} else {
		
		printf("The third number num3 is the greatest number ");
		
	}	
	return 0;
}
