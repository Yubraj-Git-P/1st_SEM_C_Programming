#include <stdio.h>
#include <math.h>
//  WAP a program for me which calculate the compound effect of my given number for me.
int main () {
	
	int num = 2;
	int a;
	
	// 1, 2, 4, 8, 16, 32, 64, 128,
	
	// 2^0, 2^2, 2^3, 2^4, 2^5, 2^6, 2^7, 
	
	for(a=0;a<=32;a++){
		
		printf("%f\n",pow(num,a));
	}
	
	return 0;
}
