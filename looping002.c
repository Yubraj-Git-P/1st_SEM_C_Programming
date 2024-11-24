#include <stdio.h>
#include <math.h>
//WAP which the compound effect of the number with in a given time.
int main () {
	
	
	int num = 2;
	int a;
	// 1, 2, 4, 8, 16, 32, 64, 128,
	//pattern
	//  4*1, 4*2, 4*4, 4*8, 4*16, 4*32, 4*64, 4*128. 
	
	// 0+1, 1+1, 3+1, 7+1, 15+1, 31+1, 63+1, 127+1. 
	
	//     2*1, 2*2, 2*4, 2*8, 2*16,
	
	// 2(0), 2(1),2(2), 2(3), 2(4), 2(5), 2(6), 2(7)
	
	for(a=0;a<=32;a++) {
		
		printf(" %f",pow(num,a));
		printf("\n");
	}
	
	return 0;
}
