#include <stdio.h>

// Write a program in C which find vowel character
 
int main(){
	
	char sen;
	
	printf(" Enter the character :  \n");
	scanf("%c",&sen);
	
	if(sen == 'A' || sen == 'a' || sen == 'E' || sen == 'e' || sen == 'I'
	|| sen == 'i' || sen == 'O' || sen == 'o' || sen == 'U' || sen == 'u'){
		
	printf("The character is Vowel");
	
	}else {
		printf("The character is not vowel");
	}
	
	return 0;
}
