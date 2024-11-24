#include <stdio.h>

int main (){
	
	/* Write a program in C language to calculate the area of the reactangle,
	and volume of the reactangle and perimeter of the rectangle*/
	
	// Here is the values of the length breadth and height of the rectangle 
	int length,breadth,height;
	int area,volume,perimeter;
	
	// Here is printing values of the function which gives the values of the paramaters
	printf("Enter the length of the rectangle: \n");
	//scanf funtion which is very helpfulness to storing the values of the functions
	scanf("%d",&length);
	
	printf("Enter the breadth of the rectangle: \n");
	scanf("%d",&breadth);
	
	printf("Enter the height of the rectangle:  \n");
	scanf("%d",&height),
	
	// Calculating The values of the Function
	area = length*breadth;
	volume = length*breadth*height;
	perimeter = 2*(length+breadth);
	
	
	//In this mudule we have calculating the valuse of the given parameters
	printf("The required area of the rectangle is %d\n",area);
	printf("The required volume of the rectangle is %d\n",volume);
	printf("The required perimeter of the rectangle is %d\n",perimeter);
	//Finallu we have finish the program by which we can proceed the program
	return 0;	
	
}
