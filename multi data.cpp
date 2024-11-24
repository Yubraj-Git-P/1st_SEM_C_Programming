#include <stdio.h>
// Write a multiplication table of a given number using scanf , loops arrays and Fucntions
int printtable(int multtable[], int num, int n);
int main ()

{   
    int multtable[3][10];
  
    int num1,num2,num3;
    
	printtable(multtable[0],num1,10);
	printtable(multtable[1],num2,10);
	printtable(multtable[2],num3,10);
	
	return 0;
}
int printtable(int multtable[], int num1, int num2, int num3, int n)
{
	
	printf(" Enter your first multiplication no :");
	scanf("%d",&num1);
	
	
	printf(" Enter your first multiplication no :");
	scanf("%d",&num2);
	
	printf(" Enter your first multiplication no :");
	scanf("%d",&num3);
	

	//printf("The multiplication table for the no %d\n",num1);

	for(int i=0; i<10; i++)
	{
		multtable[i] = num1*(i+1);
	}
	for(int i=0; i<10; i++)
	{
		printf("%d * %d = %d\n",num,(i+1),multtable[i]);
	}
	
	printf("************************************************\n");
	printf("************************************************\n");
}
