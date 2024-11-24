#include <stdio.h>

int main (){
	
	int Day;
	printf("Your day is : ");
	scanf("%d",&Day);
	
	switch(Day){
		
		case 1 : 
		printf("sunday");
		break;
		case 2 : 
		printf("monday");
		break;
		case 3 : 
		printf("tuesday");
		break;
	    case 4 : 
		printf("wenesday");
	    break;
		case 5 : 
		printf("thursday");
		break;
		case 6 : 
		printf("friday");
		break;
	    case 7 : 
		printf("saturday");
		break;
		
	}
	
	return 0;
}

