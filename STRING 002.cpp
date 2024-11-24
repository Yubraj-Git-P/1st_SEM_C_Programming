#include <stdio.h>
// write a program which print a string plac it inside an double inverted cotation using 
// while loops :
int main ()

{
	//char string[13] = "CONSERVATION";// It added the null character in itsef again
	char string[13] = {'C','O','N','S','E','R','V','A','T','I','O','N','\0'};
	// Here c program will added null character itself :::
	char *ptr;// C program will added the null character in itself automatically :
	//This is an character pointer ::
	ptr = &string[0];// C program will addednull character automaically 
	
	while(*(ptr)!='\0'){
		
		printf("The character stored at %d address is %c",ptr,*(ptr));
		printf("\n");
		ptr++;
	}
	
	return 0;
}
