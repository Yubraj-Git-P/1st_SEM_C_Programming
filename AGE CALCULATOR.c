#include <stdio.h>

int main () {
	
	int age;
	
	printf(" Enter your birth year : ");
	scanf("%d",&age);
	
	if(age == 1995){
		printf(" You are 27 years Old ");
	} 
	else if( age==1996){
		printf(" You are 26 years old ");
	}
	else if(age==1997){
		printf(" You are 25 years old ");
	}
	else if (age==1998){
		printf(" You are 24 years old");
	}
	else if(age==1999){
		printf(" You are 25 years old");
	}
	else {
		printf(" NOthing");
	}
	return 0;
}
