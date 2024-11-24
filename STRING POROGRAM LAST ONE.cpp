#include <stdio.h>
// Write a program which print the occurrence of the character in an string.
int occ(char *str, char c);

int main ()

{
	char str[] = " helloew";
	
	int t = occ(str,'e');
	
	printf("The no of occurrence of the character is %d",t);
	
	return 0;
}
int occ(char *str, char c)
{
	char *ptr = str;
	
	int count = 0;
	
	while(*ptr!='\0')
	{
		if(*ptr==c)
		{
			count++;
		}
	
	}
	ptr++;
	
	return count;
}
