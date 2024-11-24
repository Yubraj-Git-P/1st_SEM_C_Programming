#include <stdio.h>
//Write a program to create an array of 10 integer and store multiplication table of 5 in it :
int main ()

{
	/*5*1 = 5
	5*2 = 10
	5*3 = 15
	5*4 = 20
	5*5 = 25
	5*6 = 30
	5*7 = 35
	5*8 = 40
	5*9 = 45
	5*10 = 50*/
	
	/*int prod[10];
	
	int a;
	
	for(a=0; a<=10; a++)
	{
		printf("The multiplication of 5 * %d is %d\n",(a+1),prod[a]);
	}*/
	
	
	int mult[10];
	int i;
	
	for(i=0; i<=10; i++)
	{
		mult[i] = 5*(i+1);
	}
	for(i=0; i<=10; i++)
	{
		printf(" The multiplication of 5 * %d is %d\n",(i+1),mult[i]);
	}
	
	return 0;
}
