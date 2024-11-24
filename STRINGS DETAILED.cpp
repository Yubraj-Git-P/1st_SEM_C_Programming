#include <stdio.h>
#include <string.h>
// Write a program of your own version using strlen function from <string.h>
int strlen(char *str); 
int main ()

{
	char str[] = "HELLW FRIENDS MY NAME IS YUBRAJ FROM NEPAL CURRRENTLY LIVE IN KATHMANDU";
	
	int a = strlen(str);
	
	printf(" The no of character inside inside the given string is %d\n",a);
	
	return 0;
}
int strlen(char *str)
{
	int len = 0;
	char *ptr = str;
	while(*ptr!='\0')
	{    
	    len++;// In this steps at first the value of len = 0; and after len++: one will added,
		ptr++;// by this condition is going to be checked again.
	}
	return len;
}
