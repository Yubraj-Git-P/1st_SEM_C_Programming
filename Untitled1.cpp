#include <stdio.h>

// Write a program in C multiply two numbers and three numbers and find the greatest one number
 
int main (){
	
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
	int mula,mulb,mulc,muld,mule;
	
	printf("The multiplication of the first number and second number is mula ");
	scanf("%d",&mula);
	
	printf("The multiplcation of the third number and fourth number is mulb ");
	scanf("%d",&mulb);
	
	printf("The multiplication of the fifth number and sixth number is mulc ");
	scanf("%d",&mulc);
	
	printf("The multiplication of the seventh number and eighth number is muld ");
	scanf("%d",&muld);
	
	printf("The multiplication of ninth number and tenth number is mule ");
	scanf("%d",&mule);
	
	mula = num1*num2;
	mulb = num3*num4;
	mulc = num5*num6;
	muld = num7*num8;
	mule = num9*num10;
	
	if(mula>mulb && mula>mulc && mula>muld && mula>mule) {
		
		printf("mula is the greatest number among other number\n");
		
	} else {
		
		printf("mula is not the greatest number among other numbers\n ");
	}
	if(mulb>mula && mulb>mulc  && mulb>muld && mulb>mule){
		
		printf("mulb is the greatest number among other numbers ");
		
	} else{
		
		printf("mulb is not the greatest number among other numbers\n ");
	}
	if(mulc>mula && mulc>mulb && mulc>muld && mulc>mule){
		
		printf("mulc is the greatest number among other number \n");
		
	} else {
		
		printf("mulc is not the greatest number among other numbers\n");
	}
    if(muld>mula && muld>mulb && muld>mulc && muld>mule){
    	
    	printf("muld is the greatest number among other numbers\n");
    	
	} else {
		
		printf("muld is not the greatest number among other numbers\n");
	}
	
	if(mule>mula && mule>mulb && mule>mulc && mule>muld) {
		
		printf("mule is the greatest number among other number\n");
		
	} else{
		
		printf("mule is the greatest number among other number\n");
	}
	
	return 0;
}
