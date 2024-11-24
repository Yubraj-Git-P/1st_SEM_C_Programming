#include <stdio.h>
// Age calculator.
int main () 

{
	int birthyr;
	
	printf(" Enter your birth year : ");
	scanf("%d",&birthyr);
	
	if(birthyr==1995){
		printf(" You are of 26 years old ");
	}
	else if(birthyr==1996){
		printf(" You are of 25 years old ");
	}
	else if(birthyr==1997){
		printf(" You are of 24 years old ");
	}
	else if(birthyr==1998){
		printf(" You are of 23 years old ");
	}
	else if(birthyr==1999){
		printf(" You are of 22 years old ");
	}
	else if(birthyr==2000){
		printf("You are of 21 years old ");
	}
	else if(birthyr==2001){
		printf(" You are of 20 years old ");
	}
	else if(birthyr==2002){
	    printf("You are of 19 years old ");
	}
	else if(birthyr==2003){
		printf(" You are of 18 years old ");
	}
	else{
		printf(" I dont know our age ");
	}
	return 0;
}
