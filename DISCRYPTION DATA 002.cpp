#include <stdio.h>
// Write a program which can change your encrypted datas into discrypted form ...
void discrypted(char *str);
int main ()

{
	char str[] = " MJQQT\%N%\FSY%YT%GZ^%F%MTZXJ%KTW%R^%RTR%FSI%IFI ";
	
	discrypted(str);
		
	printf(" The discrypted form of the data is %s",str);
		
	return 0;
}
void discrypted(char *str)
{
	char *ptr = str;
	
	while(*ptr!='\0')
	{
		*ptr = *ptr -5;
		*ptr++;
	}
}
