#include <stdio.h>
/*  Write a program in C language to which calculate area of the circle and volume of the cylinder having h height*/
int main ()

{   // Decalaring the varibles :
    int r;
	int h;	
	float PI = 3.141517,areacircle,volcylinder;
	
	//printing the radius of the circle
	printf("What is your radius : \n");
	//Taking the input from the user
	scanf("%d",&r);
	
	//Printing the height from the user 
	printf("What is your height of cylinder : \n");
	//Taking the input from the user.
	scanf("%d",&h);
	
	//Calculating the area of the circle.
	areacircle = PI*r*r;
	
	//printing the reault of area.
	printf("Hence required area of your circle is %f \n",areacircle);
	
	//calculating the volume of the cylinder.
	volcylinder = areacircle*r*r*h;
	
	//printing the result of volume of cylinder
	printf("Hence required volume of your cylinder is %f \n",volcylinder);
	
	return 0;
}
