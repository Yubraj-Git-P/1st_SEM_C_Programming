#include <stdio.h>
/* Write a C program to which convert celsius into Fohrenheit. */
int main(){
	
	int celsius;
	int conversion_point;
	
	printf("Enter your celsius Degree : \n");
	scanf("%d",&celsius);
	
	conversion_point = (celsius*9/5)+32;
	
	printf("The conversion of celsius degree into fohrenheit is %d",conversion_point);
	
	return 0;
}
