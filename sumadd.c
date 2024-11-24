#include <stdio.h>

// Write a program in C languge which add two number's and found the greatest number.

int main(){
	
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
    int sumA,sumB,sumC,sumD,sumE;
	
	printf("Enter the first number :  /n");
	scanf("%d",&num1);
	
	printf("Enter the second number : /n");
	scanf("%d",&num2);
	
	printf("Enter the third number :  /n");
	scanf("%d",&num3);
	
	printf("Enter the fourth number :  /n");
	scanf("%d",&num4);
	
	print("Enter the fifthnum  :  /n");
	scanf("%d",&num5);
	
	printf("Enter the sixthnum :  /n");
	scanf("%d",&num6);
	
	printf("Enter the seventhnum :  /n");
	scanf("%d",&num7);
	
	printf("Enter the eighthnum :   /n");
	scanf("%d",&num8);
	
	printf("Enter the ninthnum :  /n");
	scanf("%d",&num9);
	
	printf("Enter the tenthnumber :  /n");
	scanf("%d",&num10);
	
	sumA = num1 + num2;
	sumB = num3 + num4;
	sumC = num5 + num6;
	sumD = num7 + num8;
	sumE = num9 + num10;
	
	if(sumA>sumB && sumA>sumC && sumA>sumD && sumA>sumE){
		
		printf("sumA is the greatest number  /n");
		
	} else{
		
		printf("sumA is not the greatest number /n");
	}
	if(sumB>sumA && sumB>sumC && sumB>sumD && sumB>sumE){
		
		printf("sumB is the greatest number  /n");
		
	}else{
		
		printf("sumB is not the greatest number  /n");
	}
	if(sumC>sumA && sumC>sumB && sumC>sumD && sumC>sumE){
		
		printf("sumC is the greatest number   /n");
	} else{
		
		printf("sumC is not the greatest number   /n");
	}
	if(sumD>sumA && sumD>sumB && sumD>sumC && sumD>sumE){
		
		printf("sumD is the greatest number   /n");
	} else{
		
		printf("sumD is not the greatest number  /n");
	}
	if(sumE>sumA && sumE>sumB && sumE>sumC && sumE>sumD){
		
		printf("sumE is the greatest number   /n");
	} else{
		printf("sumE is not the greatest number   \n");
	}
	
	return 0;
}
