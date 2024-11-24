#include <stdio.h>
// write a program which detects wheather the enter character is vowel or not.
int main () {
	
	char ch;
	
    printf("Enter your character : ");
    scanf("%c",&ch);
    // This || This is our logical or operator 
    // This && is our and operator 
    // ! is our not operator 
    if(ch=='A' || ch=='a'|| ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u'){
    	
    	printf(" The character you have entered is vowel");
	}else{
		printf(" The character you have entered is not vowel");
	}

	return 0;
}
