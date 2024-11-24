#include <stdio.h>


int main (){
	
	int num1,num2,num3;
	
	printf("Enter the first number is : \n");
	scanf("%d",&num1);
	
	printf("Enter the second number is : \n");
	scanf("%d",&num2);
	
	printf("Enter the third number is : \n");
	scanf("%d",&num3);
	
	if(num1 > num2 && num3){
		
		printf("NUM1 is greatest nuumber \n"); 
	} else {
		printf("NUM1 is not the greatest number  \n");
	} 
	if(num2 > num1 && num3){
		
		printf("NUM2 is the greatest number   \n");
	} else{
		

		printf("NUM2 is not the greatest number  \n");
	}
	if(num3 > num2 && num3) {
		printf("NUM3 is the greatest number    \n");
	} else {
		printf("NUM3 is not the greatest number   \n");
	}
	
	return 0;
}
	
	
	
	
	
	
	

