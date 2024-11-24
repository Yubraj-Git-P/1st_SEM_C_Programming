#include <stdio.h>

int main ()

{
	int arr[4][5] = {{1,  2,  3,  4,  5},
	                 {6,  7,  8,  9,  10},
					 {11, 12, 13, 14, 15},
					 {16, 17, 18, 19, 20}};
					 
					
		/*	   0  1  2  3  4	
			0//1  2  3  4  5	 
	        1//6  7  8  9  10
	        2//11 12 13 14 15
	        3//16 17 18 19 20 */
	            
	int i,j;
	
	for(i=0; i<=4; i++)
	{
		for(j=0; j<=5; j++){
			
			printf("The marks student in position is %d",arr[i][j]);
			printf("\n");
		}
	}
	
	            
	            
	return 0;
}
