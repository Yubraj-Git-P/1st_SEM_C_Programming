#include <stdio.h>
int main ()

{
	char string[6];
	
	for(int g=0; g<6; g++)
	{
		printf(" Enter the value of string[%d] : \n",g);
		scanf("%s",&string[g]);
	}
	for(int h=0; h<6; h++)
	{
		printf("The value of string[%d] is %c\n",h,string[h]);
	}
	
	return 0;
}

