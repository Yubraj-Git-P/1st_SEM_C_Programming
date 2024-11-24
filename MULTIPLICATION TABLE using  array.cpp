#include <stdio.h>
//Create an array of size 3*10 Containing multiplication table of 7,9, and 10:
int main ()
{
						                              
	int array[3][10] = {{7, 14, 21, 28, 35, 42, 49, 56, 63, 70},
	                    {9,  18, 27, 36, 45, 54, 63, 72, 81, 90},
					    {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}};
	int i = 0;
	for(int j=0; j<10; j++)
	{
		printf(" The Multiplication of 7 * %d is %d\n",(j+1),array[i][j]);
	}
    
    printf("\n");
    
	int a = 1;
	for(int b=0; b<10; b++)
	{
		printf(" The Multiplication of 9 * %d is %d\n",(b+1),array[a][b]);
	}
	
	printf("\n");
	
	int x = 2;
	for(int y=0; y<10; y++)
	{
		printf(" The Multiplication of 10 * %d is %d\n",(x+1),array[x][y]);
	}
	
	return 0;
}
