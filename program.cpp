#include <stdio.h>

int occurrence(char *str, char c); 

int main ()

{
	char str[] = "HELLOW I WANT TO BUY AN HOUSE FOR MY MOM AND DAD";
	
	int a = occurrence(str,'O');
	
	printf("Occurrence of 'H' in the string is %d",a);
	
	
	return 0;
}
int occurrence(char *str, char c)
{
	char *ptr = str;
	
	int count = 0;
	
	while(*ptr!='\0')
	{
		if(*ptr==c)
		{
			count++;
		}
		*ptr++;
	}
	return count;
}
