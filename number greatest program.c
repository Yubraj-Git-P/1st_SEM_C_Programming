#include <stdio.h>

int main (){
	
    int num1,num2,num3,num4,num5;
    
    printf("The first number is NUM1:  \n");
    scanf("%d",&num1);
    
    printf("The second number is NUM2 :  \n");
    scanf("%d",&num2);
    
    printf("The third number is NUM3: \n");
    scanf("%d",&num3);
    
    printf("The fourth number is NUM4:  \n");
    scanf("%d",&num4);
    
    printf("The fifth number is NUM5 :  \n");
    scanf("%d",&num5);
    
    if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5){
    	
    	printf("NUM1 is the greatest number  \n");
    	
	} else if(num2 > num1 && num2 > num3 &&  num2 > num4  &&  num2 > num5) {
		
		printf("NUM2 is the greatest number  \n");
		
	} else if(num3 > num1 &&  num3 > num2 && num3 > num4  && num3 > num5) {
		
		printf(" NUM3 is the greatest number \n");
		
	} else if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5) {
		
		printf("NUM4 is the greatest number \n");
		
	} else{
		
		printf("NUM5 is the greatest number \n");
	}
	
	return 0;
		
}
