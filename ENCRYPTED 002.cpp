#include <stdio.h>
// Write a program which converts your string data in encrypted form...
void encrypt(char *string);
int main ()

{
	char string[] = "HELLOW I WANT TO BUY A HOUSE FOR MY MOM AND DAD";
	
	encrypt(string);
	
	printf("Your data in encrypted form is %s",string);
	
	return 0;
}
void encrypt(char *string)
{
    char *ptr = string;
	
	while(*ptr!='\0')
	{
		*ptr = *ptr + 5;
		*ptr++;
	} 
}
