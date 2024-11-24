#include <stdio.h>
// Write a program which take inputs inputs using %s and %c from the user and compare equals
int main ()

{
	char str[6];
	
	for(int i=0; i<6; i++)
	{
		printf(" Enter the chr value of str[%d] ::\n",i);
		scanf("%s",str);
	}
	for(int x=0; x<6; x++)
	{
		printf(" The value of str[%d] is %c\n",x,str);
	}
	
	
	
	return 0;
}
