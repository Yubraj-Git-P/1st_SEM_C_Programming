#include <stdio.h>
// Write a program which discrypt the data you previous entered.
void discrypt(char *str);// *str is the way of representatin of an STRING VALUE Funcion prototype
int main ()

{
	char str[] = " MJQQT\%N%\FSY%YT%GZ^%F%MTZXJ%KTW%R^%RTR%FSI%IFI ";
 	
    discrypt(str);// function call
    
    printf("The discrypted form of the given data is %s",str);

	return 0;
}
void discrypt(char *str)// Function function decalaration
{
	char *ptr = str;
	while(*ptr!='\0')
	{
	    *ptr = *ptr - 5;
	    *ptr++;
	}
}

