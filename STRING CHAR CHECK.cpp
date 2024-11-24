#include <stdio.h>
// Write a program to check wheather a given character is present in a string or not .
void check(char *str, char c);
int main ()

{
	char str[] = "HELLOW";
	
	check(str,'O');
	
	return 0;
}
void check(char *str, char c)
{
	char *ptr = str;
	
	while(*ptr!='\0')
	{
		if(*ptr==c)
		{
			printf("The character is present in the string\n");
		}
		else{
			printf("The  character is not present in the string\n");
		}
		*ptr++;
	}
}
