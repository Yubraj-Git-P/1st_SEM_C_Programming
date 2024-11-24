//write a program in C language which that write all seven days according to there needs.
#include <stdio.h>

int main (){
	
	int day;
	
	printf("Enter a day :  ");
	scanf("%d",&day);
	
	switch(day) {
		
		case 1 : printf("The day is sunday");
		break;
		
		case 2 : printf("The day is monday");
		break;
		
		case 3 : printf("The day is Tuesday");
		break;
		
		case 4 : printf("The day is Wenesday ");
		break;
		
		case 5 : printf("The day is Thurday");
		break;
		
		case 6 : printf("The day is Friday ");
		break;
		
		case 7 : printf("The day is Saturday ");
		break;
		
		default: printf("The given option is INVALID");
		
	}	
	return 0;
}
