#include <stdio.h>
// write a program in c language which add two numbers and print the number wheather it refer what
// Usinf switch case.
int main ()

{
	int cheese,namkin,namkinpizza;
	
	printf("Enter the price of cheese : ");
	scanf("%d",&cheese);
	
	printf("Enter the price of namkin : ");
	scanf("%d",&namkin);
	
	namkinpizza = cheese + namkin;
	
	switch(namkinpizza) {
		
		case 100: printf("OUTSTANDGING");
		break;
		
		case 200: printf("EXCELLENT");
		break;
		
		case 300: printf("GOOD");
		break;
		
		case 400: printf("NICE");
		break;
		
		default: printf(" UNBELIEAVABLE PRIZE");
	}
	
	return 0;
}
