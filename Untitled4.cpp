#include <stdio.h>

int main (){
	
	int num1,num2,num3;
	
	printf("Enter the first number :  \n");
	scanf("%d",&num1);
	
	printf("Enter the second number :  \n");
	scanf("%d",&num2);
	
	printf("Enter the third number :  \n");
	scanf("%d",&num3);
	
	if( num1 > num2 && num1 > num3) {
		
		printf("NUM1 is the greatest number among all");
	}	else if(num2 > num3 && num2 > num1) {
		
        printf("NUM2 is the greatest numbers among all");
		
	}   else {
		printf("NUM3 is the greatest number among all");
	}
	
	
	
	return 0;
}
