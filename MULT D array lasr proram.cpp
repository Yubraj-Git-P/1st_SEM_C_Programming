#include <stdio.h>
// Write a program which acesss array from the user and printed on the screen multidimensional array.
int main ()

{    // Here for single dimensional arrays :
// this program i written fro singled dimensional arrays which have the capacity to store more datas
// in single line ..
	/*int array[5];
 	
	int i;
	
    // This loop is for acessing the value from the user
    for(i=0; i<5; i++)
    {
    	printf(" Enter the value of arr[%d]",i);
    	scanf("%d",&array[i]);
    	
    	printf("\n");
	}
	
	int j;
	
	//This loop is for printing the values
    for(j=0; j<5; j++)
	{
		printf(" The value of array[%d] is %d\n",j,array[j]);
	}*/
	
	// For Multidimensional arrays :
	int array[4][5];                                               //  0   1   2   3   4  
	                                                              //0  1,  2,  3,  4,  5
	int i,j;                                                      //1  6,  7,  8,  9,  10 
	                                                              //2  11, 12, 13, 14, 15 
	for(i=0; i<4; i++)//This loops get executed                   //3  16, 17, 18, 19, 20
	{   
	   for(j=0; j<5; j++) // Then at first this loop will get executed until it becomes false.
	   { 
		printf(" Enter the value of array[%d][%d]",i,j);
		scanf("%d",&array[i][j]);
		printf("\n");
		}
	  }
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			printf(" The value of array[%d][%d] is %d",i,j,array[i][j]);
			printf("\n");
		}
	}

	return 0;
}
