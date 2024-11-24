#include <stdio.h>
// Write a program in C language which says your grade according to your marks percentile.
int main ()

{   int marks;
    
    printf("Enter your marks gain : ");
    scanf("%d",&marks);
    
    if(marks>=90 && marks<=100){ 
    
    	printf("Cogratulations you have secured A+");
    	
	}else if(marks>=80 && marks<=90){
		
		printf(" Excellent you have secured A ");

	} else if(marks>=70 && marks<=80){
		
		printf(" very Good you have secered B+");
			
	} else if(marks>=60 && marks<=70){
		
		printf(" Good you have secored B "); 
	} else if(marks>=50 && marks<=40){
		
		printf("Nice you have secered C+");
		
    } else if(marks>=40 && marks<=50) {
    	
    	printf("All right you have secured C");
    	
	} else if(marks>=30 && marks<= 40) {
		
		printf("little bit bad secured D+");
		
	}else if(marks>=20 && marks<=30) {
		
		printf("your result is so bad You have to improve secure D");
	} else {
		printf("You are fail fail fail fail fail fail fail fail fail fali ");
	}
	
	return 0;
}
