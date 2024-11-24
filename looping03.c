#include <stdio.h>
/*
Write a program to print star rectangular line.
*****
*****
*****
*****
*****
*/
int main(){
	
	int i,n,j;
	printf("Enter your row : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		
		for(j=n; j>=1; j--)
		
		printf("*");
		printf("\n");
	}

	return 0;
}
