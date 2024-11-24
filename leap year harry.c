#include <stdio.h>
// write a program to check wheather a year entered by an user is leap year or not.taking 
// year as an input from the user
int main ()
{
	int year;
	
	printf("Enter your year : ");
	scanf("%d",&year);
	
	//to check wheather the year is leap year or not 
	if((year%4)==0 || (year%400==0))  {
		
		printf("You are in leap year febraury 29th");

	} else{
		
		printf("You are not in an leap year");
	}
	
	
	return 0;
}
