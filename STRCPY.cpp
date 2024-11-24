#include <stdio.h>
#include <string.h>
// Write a prgram to copy the program using strcpy
int main ()

{
	char father[] = "DAL BAHADUR";
	char mother[] = "MINA DAMINI";
	
	strcpy(mother,father);
	printf("%s\n",mother);
	
	printf("\n");

	
	strcpy(father,mother);
	printf("%s\n",father);
	
	return 0;
}
