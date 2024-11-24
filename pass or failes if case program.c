#include <stdio.h>
// Write a program in c languge to find whearthe the student is passed or if it require
// 40 in total and 33percentile in each subiject assume 3 subiject and take marks as an input.
int main (){
	
	int physics,chemistry,maths;
	int total_percentile;
	
	printf(" Physics marks: ");
	scanf("%d",&physics);
	
	printf("Chemistry:");
	scanf("%d",&chemistry);
	
	printf("Maths:");
	scanf("%d",&maths);
	
	total_percentile = (physics+chemistry+maths)/3;
	
	if(total_percentile>40 && physics>33 && chemistry>33 && maths>33){
		
		printf("You are passed");
	} else {
		printf("You are failed");
	}
	
	return 0;
}
