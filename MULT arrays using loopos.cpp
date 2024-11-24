#include <stdio.h>
// Write a program in C language which take print the value from the 2D arrays :
int main ()
 
{   
    // Multidimensional arrays which can store the combination of arrays of arrays :
	int arr[4][5] = {{1,  2,  3,  4,  5},
	                 {6,  7,  8,  9,  10}, 
					 {11, 12, 13, 14, 15},
					 {16, 17, 18, 19, 20}};
	
	int i,j;                        //     0   1  2  3  4   
	                                // 0// 1, 2, 3, 4, 5,                                       
	for(i=0; i<4; i++)               // 1// 6, 7, 8, 9, 10  
	{                                // 2// 11,12,13,14,15
		for(j=0; j<5; j++)//at first
		// this loop get run untill the the condition for j will be false  //3// 16,17,18,19,20
		// first this loop will get executed until the condition for j will be false
		// First this loop will get executed untill the condition for j will be false
		// Firsrt this loop will get executed untill the condition for j will be false
		// Frist this loop will get executed untill the condition for j will be false 
		{
			printf(" The marks obtained by %d student who sit in %d bench is %d",i,j,arr[i][j]);
			printf("\n");
		}	
	}
	return 0;
}
