#include <stdio.h>
// Write a program in c lnaguage which make discryption of the data which is encrypted now.
void discrypt(char *str);
int main ()

{
	char str[] = " U,X[bQ,e[a,NMNe";
	
	discrypt(str);
	
	printf("The discripted data is %s",str);
	
	return 0;
}
void discrypt(char *str)
{
	char *ptr = str;
	
	while(*ptr!=0)
	{
		*ptr = *ptr-12;
		ptr++;
	}
}
