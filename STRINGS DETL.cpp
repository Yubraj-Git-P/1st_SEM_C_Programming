#include <stdio.h>
#include <string.h>
// Write a program in ur own version about strlen program..
int strlen(char *str);
int main ()

{
	char str[] = " YOU ARE MY BORTHER";
	
	int a = strlen(str);
	
	printf(" The total number of character is %d",a); 
	
	return 0;
}
int strlen(char *str)
{
    int len;
    char *ptr = str;
    while(*ptr!='\0')
    {
    	len++;
    	ptr++;
	}
    return len;    
}

