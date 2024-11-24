#include <stdio.h>
//Write a program in C language to denote the to weekely days ussing switch case.  
int main(){
    
	int Day;
    printf("Enter your weekly days :  ");
    scanf("%d",&Day);
    
    switch(Day) {
    	
    	case 1:
		    printf("The enter day is sunday	");
		    break;
		
    	case 2: 
		    printf("The enter day is monday ");
		    break;
        case 3: 
		    printf("The enter day is Tuesday ");
	 	    break;
			    
		default : 
		    printf("YOU HAVE GIVEN AN INVALID OPTION");		    
	}
  		
	return 0;
}
