#include <stdio.h>
//Write a program in C language which execute the single value from the multiple choice values.
// Using the switch case functional values.
int main (){
	
	int Day;
	printf("Enter your weekly days : ");
	scanf("%d",&Day);
	
	switch(Day){
		
		case 1 : printf("Your day is sunday ");
		
		case 2 : printf("Your day is monday  ");
		
		case 3 : printf("Your day is tuesday ");
		
		case 4 : printf("Your day is wenesday ");
		
		case 5 : printf("Your day is thursday ");
		
		case 6 : printf("Your day is friday ");
		
		case 7 : printf("Your day is saturday");		
		
		
		
	}
		
	return 0;
}
