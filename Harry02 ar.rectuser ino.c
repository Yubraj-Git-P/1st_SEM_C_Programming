#include <stdio.h>
/*Write a program in C language to calculate area of reatngle in taking inputs from
 The user */
int main(){
	
	int length,breadth,height;
	int area;
	
	printf("Enter your length : \n");
	scanf("%d",&length);
	
	printf("Enter your breadth : \n");
	scanf("%d",&breadth);
	
	printf("Enter your height : \n");
	scanf("%d",&height);
	
	
	area = length*breadth*height;
	
	printf("The area of the rectangle is %d",area);
	
	return 0;
}
