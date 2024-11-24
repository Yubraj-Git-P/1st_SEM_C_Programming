#include <stdio.h>

int main () {
	
    char ch;
    
    printf("Enter your character : ");
    scanf("%d",&ch);
    
    if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' ||ch=='o' ||
	ch=='U' || ch=='u'){
		
		printf("Vowel");
	}else{
		
	   printf("Not an vowel");
	}
	
	
	
	return 0;
}
