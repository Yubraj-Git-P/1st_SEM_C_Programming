#include <stdio.h>
// Write a program in c language which teach about operator precedence.
int main () {
	
	int x = 8;
	int y = 2;
	/*  Note priority order for the operator precedence
	    
	    first priority order 
	    1st :  *,/,%
	    2nd : + , - , 
	    3rdd : =,,,,,
	    
	*/
	//printf("The value of 3*x+4*y is %d\n ",3-x+4-y);
	
	printf("The value of 3*x / 4*y is %d",3*x/4*y);
	

	return 0;
}
