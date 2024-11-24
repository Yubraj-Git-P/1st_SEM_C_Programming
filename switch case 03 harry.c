#include <stdio.h>
// Write a program in c language find grade of a stduent according to there percentage. 
int main ()

{
	int marks;
	printf("Enter your marks : ");
	scanf("%d",&marks);
	
	switch(marks){
		
		case 100: printf("OUTstanding A+");
		break;
		
		case 90: printf("excellent, A");
	    break;
	    
		case 80: printf("very Good B+");
		break;
		
		case 70: printf("Good B");	
		break;
			
		case 60: printf("Very nice C+");
        break;
		 	
		case 50: printf("nice C");
		break;
		
		case 40 : printf(" NOT Good D+ ");
		break;
		
		default : printf("YOU are fail");	
		break;		 
	}
	
	return 0;
}
