/*Write a program in C language that tells your age, eligible for voting or not,*/
// Program using ternary operator 
#include <stdio.h>

int main(){
	
	int rank1,rank2,rank3;
	
	printf("Enter your rank :  \n");
	scanf("%d",&rank1);
	
    rank1 > 90 ? printf("You are topper \n") : printf("You are not a topper");
	
	printf(" Enter your second rank :  ");
	scanf("%d",&rank2);
	
	rank2 > 50 ? printf("You belongs to medium \n") : printf(" you belongs to less medium"); 
	
	printf("Enter your third rank : ");
	scanf("%d",&rank3);
	
	rank3 > 20 ? printf("You are eligible \n") : printf("You are less eligible ");
	
	return 0;
}  
