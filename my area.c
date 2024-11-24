#include <stdio.h>
#define PI 3.1475

int main(){
	// write program to find the area of the circle using c language
	// In this function float function is used to store the floating values
	float radius,area;
	//priting function is used to store the value on the output screen
	printf("Please enter the radius of your circle: \n");
	/*The main use of the scanf function is that to store the value of the
	function given by user and kept the functioin inside the area function by 
	which we can easily calculate the Area of the circle  */
	scanf("%f",&radius);
	
	
	area = PI*radius*radius;
	
	printf("The area of the circle having certain radius is %f",area);

	return 0;
	
} 
