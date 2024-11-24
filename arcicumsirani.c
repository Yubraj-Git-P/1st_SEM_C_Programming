#include <stdio.h>
// Write a program in C language which find the area,perimeter,and dimension of your 
// bed and the area, circumference of the circular sirani
int main () {
	
	int length,breadth,height;
	int radius_of_sirani;
	float pi,area_of_sirani,circum_of_sirani;
	int area_of_bed,peri_of_bed,dimesion_of_bed;
	
	printf("Enter your length : ");
	scanf("%d",&length);
	
	printf("Enter your breadth : ");
	scanf("%d",&breadth);
	
	printf("Enter your height : ");
	scanf("%d",&height);
	
	//Bed procedder
	area_of_bed = length*breadth;
	peri_of_bed = 2*(length+breadth);
	dimension_of_bed = length*breadth*height;
	
	//Circular sirani procedder
	area_of_sirani = pi*radius_of_sirani*radius_of_sirani;
	circum_of_sirani = 2*pi*radius_of_sirani;
	
	//Printing the bed calculations
	printf("Required area of bed is %d",area_of_bed);
	printf("Required perimeter of your bed is %d",peri_of_bed);
	printf("Required dimension of bed is %d",dimension_of_bed);
	
	//Printing calculations of sirani 
	printf("Required area sirani is %f",area_of_sirani);
	printf("Required circum sirani is %f",circum_of_sirani);
	
	return 0;
}
