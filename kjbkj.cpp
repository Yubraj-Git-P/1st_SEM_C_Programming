#include <stdio.h>

int main () 

{
	char name[6];// = { 'P', 'R', 'O', 'G', 'R', 'A'};
	
	printf(" zeroth letter is : \n");
	scanf("%s",&name[0]);
	
	printf(" first letter is : \n");
	scanf("%s",&name[1]);

	printf(" second letter is : \n");
	scanf("%s",&name[2]);


	printf(" third letter is : \n");
	scanf("%s",&name[3]);

	printf(" Fourth letter is : \n");
	scanf("%s",&name[4]);

	printf(" fifth letter is : \n");
	scanf("%s",&name[5]);
	
	printf(" Name zeroth letter is %c \n", name[0]);
	printf(" Name first letter is %c \n", name[1]);
	printf(" Name second letter is %c \n", name[2]);
	printf(" Name third letter is %c \n", name[3]);
	printf(" Name fourth letter is %c \n", name[4]);
	printf(" Name fifth letter is %c \n", name[5]);
	
		
	return 0;
}
