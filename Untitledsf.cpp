#include <stdio.h>

int main(){
	
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
	int sumA,sumB,sumC,sumD,sumE;
	
	printf("num1 is : ");
	scanf("%d",&num1);
	
	printf("num2 is  : ");
	scanf("%d",&num2);
	
	printf("num3 is : ");
	scanf("%d",&num3);
	
	printf("num4 is  : ");
	scanf("%d",&num4);
	
	printf("num5 is  :  ");
	scanf("%d",&num5);
	
	printf("num6 is :  ");
	scanf("%d",&num6);
	
	printf("num7 is :  ");
	scanf("%d",&num7);
	
	printf("num8 is :  ");
	scanf("%d",&num8);

	printf("num 9 is :  ");
	scanf("%d",&num9);
	
	printf("num 10 is : ");
	scanf("%d",&num10);
	
	sumA = num1+num2;
	sumB = num3+num4;
	sumC = num5+num6;
	sumD = num7+num8;
	sumE = num9+num10;
	
    if(sumA>sumB && sumA>sumC && sumA>sumD && sumA>sumE) {
    
    	printf("sumA is the greatest addition of multiple \n");
	}else{
		printf("sumA is not the greatest addition \n");
	}
	if(sumB>sumA && sumB>sumC && sumB>sumD && sumB>sumE){
		
		printf("sumB is the greatest addition of multiple  \n");
	}else{
		printf("sumB is not the greatest addition \n");
	}
	if(sumC>sumA && sumC>sumB && sumC>sumD && sumC>sumE){
		
		printf("sumC is the greatest addition of the multiple \n");
	}else {
		printf("sumC is not the greatest additio \n");
	}
	if(sumD>sumA && sumD>sumB && sumD>sumC && sumD>sumE){
		
		printf("sumD is the greatest addition of multiple  /n");
	}else{
		printf("sumD is not the greatest addition /n");
	}
	if(sumE>sumA && sumE>sumB && sumE>sumC && sumE>sumD){
		
		printf("sumE is the greatest addition of the multiple /n");
	}else{
		printf("sumE is not the greatest addition /n");
	}
	
	
	return 0;
}
