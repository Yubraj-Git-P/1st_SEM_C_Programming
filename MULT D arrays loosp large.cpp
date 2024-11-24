#include <stdio.h>
// Multidimensional arrays
int main ()

{   // Write a program which tells age of the age of the student by intializating bench no an position.
	int marks[4][5] = {{1,2,3,4,5},
	                   {6,7,8,9,10},
					   {11,12,13,14,15},
					   {16,17,18,19,20}};
	
	int i,j;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			printf(" %d position Boy who sit in %d bench have age %d",i,j,marks[i][j]);
			printf("\n");	
		}
			
	}
	
	// Write a program which tells sit of girl in differnt bus according to there position
	int sitnum[2][3] = {{12,34,56},
	                    {54,34,57}};
	int a,b;
	
	for(a=0; a<2; a++)
	{
		printf(" Sit num of %d girl of bus no %d have sitposition is %d",a,b,sitnum[a][b]);
		printf("\n");
	}
	
	int lock[3][4] = {{46,78,98,45},
	                  {34,876,32,435}, 
					  {123,34,45,765}};
	int x,y;
	for(x=0; x<3; x++)
	{
		for(y=0; y<4; y++)
		{
			printf(" Value of %d student in %d number is %d",x,y,lock[x][y]);
			printf("\n");
		}
	}
	
	int muarr[3][6] = {{234,43,56,78,89,56},
	                   {234,456,678,34,234,56}, 
					   {123,435,546,657,34,523}};
	
	int f,g;
	
	for(f=0; f<3; f++)
	{
		for(g=0; g<6; g++)
		{
		
			printf(" cost of %d pen staying in %d table is Rs %d",f,g,muarr[f][g]);
			printf("\n");
		}
	}
	
	
	return 0;
}	
	
