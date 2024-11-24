#include <stdio.h>
// Write a program which extract the certain words from the user entered :
void slice(char *string, int a, int b); 
int main ()

{
	char string[] = "MICROMETACRYPROMEROZOITA";
	
	slice(string,2,12);
	
	printf("%s",string);
	
	return 0;
}
void slice(char *string, int a, int b)
{
	int i = 0;
	
	while((i+a)<b)
	{
		string[i] = string[(i+a)];
		i++;
	}
	string[i] = '\0';
}
