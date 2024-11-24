#include <stdio.h>
// Write a program to create a three dimensional array and print its address of its
// element in incresing order...
int main ()

{   // Here is the way to execute or Run the 3D arrays in a loops :::

	int array[2][3][4];
	
	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=3; j++)
		{
			for(int k=0; k<=4; k++)
			{   
			    int a;
				printf(" %d) no:: Address of array array[%d][%d][%d] is %u",a,i,j,k,&array[i][j][k]);
				a++;
				printf("\n");
			}
		}
	}
	
	return 0;
}
