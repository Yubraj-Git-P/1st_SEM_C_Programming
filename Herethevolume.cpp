#include <stdio.h>
#define PI 3.1465

int main (){
	
	//Write a program in C language to calculate the area of volume of the sphere
	
    float radius,volume;
    
    printf("Enter the radius of the sphere: \n");
    scanf("%f",&radius);
    
    volume = PI*radius*radius;
    
    printf("The volume of the sphere is %f",volume);
    
    return 0;
	

} 
