#include <stdio.h>
// Write a program to make encryption of the string value entered by the user:::
void encrypt(char *str);// Funciton decalaration
// encryption is the way by which we can make the human readable language into incomprehensible 
// incomprehensible incomprehensible incomprehensible language or machine understandable languaege
// Encryptioin is the way to convert an human readable language into incomprehensible languauage
int main ()

{   
    char str[] = "I LOVE YOU BABY";
    
    encrypt(str);
    
	printf("The encrypted form of MY NAME IS YUBRAJ PARIYAR is %s",str); 
 	
	return 0;
}
void encrypt(char *str)
{
	
	char *ptr = str;
	
	while(*ptr!='\0')
	{
		*ptr = *ptr+12;
		*ptr++;
	}
}
