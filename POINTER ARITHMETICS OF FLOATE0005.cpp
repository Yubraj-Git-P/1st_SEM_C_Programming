#include <stdio.h>
// POINTERS in floats arthimetics

      // NOte similary in integer single floates value allocate 4 bytes as like integer
int main () 

{
	int a = 44.532;
	int *fptr = &a;
	
	printf(" The value of fptr is %u \n",fptr);//OUTPUT = 6487572
	fptr++;// 6487576 as like integer float store 4 byte for sigle float value
	
	printf(" The value of fptr after one time increament is %u\n",fptr);// OUTPUT = 6487576 
	fptr--;// 6487572 as like integer floats also store 4 byte for single float
	
	printf(" The value of fptr after one time decreament is %u \n",fptr);// 6487572
	
	printf("\n");
	
	fptr = fptr + 3;// 6487584 = single float allocate 4 byte in memory as like integer
	printf(" The value of fptr after adding 3 is %u \n",fptr);//6487584
	
	fptr = fptr - 5; // 6487564 as like integer floats store 4 byte for single character
	printf(" The value of fptr after subtrating 5 is %u \n",fptr);// 6487564
	
	// NOTE most important point here as like integer floats store 4 byte for single float values  
	
	
	return 0;
}
