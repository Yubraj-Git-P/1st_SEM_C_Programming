#include <stdio.h>
// Program to check wheather the enter character is lower case or upper case.

int main ()
{
	char cha;
	
	printf("Enter your character :");
	scanf("%c",&cha);
	
	if(cha<=122 && cha>=98){
		printf("Lower case");
		
	}else {
		printf("NOt lower case");
	}
	
	
	return 0;
}
