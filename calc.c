#include <stdio.h>
// WAP to make claculator using switch case.
int main (){
	
	int a,b,d;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of  b :");
	scanf("%d",&b);
	
	printf("Enter d ");
	scanf("%d",&d);
	
	switch(d){
		
		
		case 1 : 
		         printf("%d",a+b);
		         break;
		         
		case 2 : printf("%d",a-b);
		        break;
		        
		case 3 : printf("%d",a*b);
		        break;
		        
		case 4 : 
		         printf("%d",a/b);
		         break;
		         
		default : 
		        printf(" %d",a+a+b+b);
		        break;
	}
	
	
	return 0;
}
