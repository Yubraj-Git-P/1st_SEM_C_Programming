#include <stdio.h>
// Write a program which check you are eligible for the job or not.
int main() 
{
	
	// Jobs can be selected according to our exerience.
	int expe;
	
	printf("Your experience work time :");
	scanf("%d",&expe);
	
	if(expe>=1 && expe<=3){
		
		printf("You are not eligible for t50his jobs");
		
	} else if(expe>=4 && expe<=7 ){
	    
	    printf("You are eligible for this job ");
	} else if(expe>=8 && expe<=12) {
		
		printf("You are eligible, and you have well paid job");
	} else if(expe>=13 && expe<=15){
		
		printf("You have got an outstanding job opportunities");
	} else if(expe>=16 && expe<=20){
		
		printf("by your experience you can be the CEO of the company");
	} else if (expe>=21 && expe<=25){
		
		printf("YOU can have the potential to become the boss of the company");
    } else if (expe> 26){
    	
    	printf("You may should retired");
	} else {
		
		printf("You have not any job experince so you cant get job here");
		
	}
    	
	return 0;
}
