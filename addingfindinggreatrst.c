#include <stdio.h>

// Write a program in C to add number and find the greatest one.

int main (){
	
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
	int sumA,sumB,sumC,sumD,sumE;
	
	printf("num1 is:  \n");
	scanf("%d",&num1);
	
	printf("num2 is:  \n");
	scanf("%d",&num2);
	
	printf("num3 is:  \n");
	scanf("%d",&num3);
	
	printf("num4 is : \n");
	scanf("%d",&num4);
	
	printf("num5 is :  \n");
	scanf("%d",&num5);
	
	printf("num6 is :  \n");
	scanf("%d",&num6);
	
	printf("num7 is:  \n ");
	scanf("%d",&num7);
	
	printf("num8 is :  \n");
	scanf("%d",&num8);
	
	printf("num9 is :   \n");
	scanf("%d",&num9);
	
	printf("num10 is :  \n");
	scanf("%d",&num10);
	
	sumA = num1 + num2;
	sumB = num3 + num4;
	sumC = num5 + num6;
	sumD = num7 + num8;
	sumE = num9 + num10;
	
	if(sumA>sumB && sumA>sumC && sumA>sumD && sumA>sumE) {
		
		printf("The greatest sum of the number is sumA \n");
		
	} else {
		
		printf("The greatest sum of the number is not sumA  \n");
	}
	if(sumB>sumA && sumB>sumC && sumB>sumD && sumB>sumE) {
		
		printf("THe greatest sum of the number is sumB  \n");
		
	} else{
		
		printf("The greatest sum of the number is not sumB  \n");
	}
	if(sumC>sumA && sumC>sumB && sumC>sumD && sumC>sumE) {
		
		printf("The greatest sum of the number is sumC \n");
		
	} else{
		
		printf("The greatest sum of the number is not sumC  \n");
	}
	if(sumD>sumA && sumD>sumB && sumD>sumC && sumD>sumE){
		
      printf("the greatest sum of the number sumD \n");
      
    } else {
    	
    	printf("The greatest sum of the number is not sumD \n");
	}
	if(sumE>sumA && sumE>sumB && sumE>sumC && sumE>sumD) {
		
		printf("The greatest sum of the number is sumE\n");
		
	} else{
		
		printf("The greatest sum of the number is not sumE\n");
	}
	
	return 0;
}
