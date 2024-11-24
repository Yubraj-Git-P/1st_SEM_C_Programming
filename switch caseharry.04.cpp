#include <stdio.h> 
//  write a program to find the marks in grading.
int main () {
	
    int mark;
    
    printf(" Enter your marks : ");
    scanf("%d",&mark);
    
    // Now we have to use here switch case:
    switch(mark) {
    	
    	case 1 : printf("You have secured A+"); 
    	break;
    	
    	case 2 : printf("You have secured A ");
    	break;
    	
    	case 3 : printf("You have secured B+");
    	break;
			
    	case 4 : printf("You have secured B ");
    	break;
			
    	case 5 : printf("You have secured C+");
    	break;
			
    	case 6 : printf("You have secured C ");
    	break;
    	
    	default : 
		{
    		printf("You are fail fial faoli");
			break;
		}	

	return 0;
}
