#include <stdio.h>

int main (){
	/*Write a program in C language to find the area of the given rectangle in which 
	the data for the length breadth and height is written by the user*/
	// Decalaring the variables
	int length,breadth,height;
	int area;
	
	//printing the length on the output screen 
	printf("Please enter the length of the rectangle: \n");
	// scanning the length by the user and written
	scanf("%d",&length);
	
	// printing the breadth of the rectangle on the output screen
	printf("Please enter the breadth of the rectangle: \n");
	// scanning the function breadth on the output screen
	scanf("%d",&breadth);
	
	//printing the height of the rectangle on the output screen
	printf("Please enter the height of the rectangle: \n");
	//scanning the height of the function
	scanf("%d",&height);
	
	//Here we calaulating the area of the rectangle by using given parameters
	area = length*breadth*height;
	
	//Final area of the rectangle is HERE.
	printf("The Required area of the given rectangle is %d",area);
	
	return 0;
	
}
