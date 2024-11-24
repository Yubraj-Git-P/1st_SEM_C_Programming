#include <stdio.h>
//Write a program in C language which print odd number from 1 to 100.
int main(){
	
	int i,j;
	
	// 1, 3, 5, 7, -------,99
	// 1+0, 2+1, 3+2, 4+3, 5+4, 6+5,-----------49+50. 
	for(i=1; i<=49; i++){
	
		for(j=0; j<=50; j++){
		
		a = i+j;
		printf("%d",a);
			
			
	}
	
	return 0;
}
