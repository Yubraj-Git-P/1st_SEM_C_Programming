#include <stdio.h>
/* Write a program in c languge to check wheather the person is eligible 
for driving licence or not according to there age     */

int main () {
	
	int age,head,guest;
    
    printf("Enter your age : ");
    scanf("%d",&age);
    
    // OR operator || this is
    if((age>=17 || age>=70) || head==100 || guest==500) {
    	
    	printf(" You can apply for dirving license \n");
	}else{
		printf("You cannot appply for driving license \n");
	}
		
	return 0;
}
