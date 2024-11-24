#include <stdio.h>
/* Write a program in c languge which calculate the area,volume,
dimensions,perimeter,thickness, of your bed and also the 
area,circumference,of your circular sirani */
int main ( ) 
{
	
	//Decalaring the varibles about the informations of your bed
	int length,breadth,height;
	int radius;  
	float pi;
	int area_of_bed;
	int perimeter_of_bed;
	int dimension_of_bed;
	float area_of_circular_sirani;
	float circumference_of_sirani;
	
	
	//printing the function on the output screen
	printf("Enter your bed length : ");
	//taking output from the user
	scanf("%d",&length);
	
	//printing the function on the output screen
	printf("Enter your bed breadth : ");
	//taking output from the user 
	scanf("%d",&breadth);
	
	//printing the funtion on the output screen
	printf("Enter your bed height :  ");
	//taking input from the user
	scanf("%d",&height);
	
	printf("Enter the value of Pi :");
	scanf("%d",&pi);
	
	printf("Enter the value of radius : ");
	scanf("%d",&radius);
	
	area_of_bed = length*breadth;
	
	perimeter_of_bed = 2*(length+breadth);
	
	dimension_of_bed = length*breadth*height;
	
	
	printf("The required area your bed is %d\n",area_of_bed);
	printf("The required perimeter of your bed is %d\n",perimeter_of_bed);
	printf("The required dimension of your bed is %d\n",dimension_of_bed);
	
	
	area_of_circular_sirani = pi*radius*radius;
	
	circumference_of_sirani = 2*pi*radius;
	
	
	printf("Hajur ko sirani ko area is :%f\n",area_of_circular_sirani);
	printf("Hajur ko sirani ko circumference is %f\n",circumference_of_sirani);
	
	
	return 0;
}
