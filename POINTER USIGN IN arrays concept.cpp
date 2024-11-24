#include <stdio.h>
// Pionter using arrays
int main () 

{
    int i;// Decalaration of a variable
    int marks[5];//ARRRAYS which store the values upt0 {0,1,2,3,4} 
    
    int *ptr;// Declaration of a POINTER
	ptr = marks[0];
    
    
    for(i=0;i<5;i++)
    
	{
		printf("Enter the makrs of %d student :\n",i+1);
		scanf("%d",ptr);
		ptr++;// pointer arithmetics gets
	}
    
    for(i=0;i<5;i++)
	
	{
    	printf("The marks of %d student is %d \n",i+1,marks[i]);
	}


	return 0;
}
