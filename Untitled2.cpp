#include <stdio.h>

int main ()

{
	int physics,chemistry,math;
	int total;
		
	printf("Enter your physics marks:");
	scanf("%d",&physics);
	
	printf("Enter your chemistry marks:");
	scanf("%d",&chemistry);
	
	printf("Enter your math marks");
	scanf("%d",&math);
	
	total = physics+chemistry+math;
	
	if(total>44 && physics>33 && chemistry>33 && math>33){
		
		printf("You are passed");
		
	}else {
		printf("YOu are fail");
	}
	
	
}
