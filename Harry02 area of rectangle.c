#include <stdio.h>
//Write a program in c language to calculate the are of a rectangle. 
//including length,bredth,and height of a rectangle.
int main(){
	
	int length = 10;
	int breadth = 20;
	int height = 30;
	int area;
	
	area = length*breadth*height;
	
	printf("The required area of a rectangle is %d",area);
		
	return 0;
}
