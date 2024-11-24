#include <stdio.h>

int main (){
	
	int a,b,c,d;
	
	printf("Enter your four number :");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if(a>b && a>c && a>d){
		
		printf("a is the greatest number ");
		
	} else if (b>a && b>c && b>d){
		
		printf(" b is the greatest number");
		
	} else if (c>a && c>b && c>d) {
	
		printf(" c is the greatest number among all");
		
	} else {
		printf("d is the greatest number among all");
	}

	return 0;
}
