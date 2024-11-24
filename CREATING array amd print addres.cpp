#include <stdio.h>
// Write a program which make the array of 3 Dimensional array and
// printing the address of the arrays in increasing order.....
int main ()

{                    //0   1   2   3     
	int arr[3][4];// =  {{1,  2,  3,  4},
	                //{5,   6,  7,  8},
				    //{9,  10, 11, 12}};
	
	int *ptr = &arr[0][0];
	
	printf(" The address of the arr[0][0] is %d\n",ptr);
	printf(" The address of the arr[0][1] is %d\n",ptr+1);
	printf(" The address of the arr[0][2] is %d\n",ptr+2);
	printf(" The address of the arr[0][3] is %d\n",ptr+3);
	printf(" The address of the arr[1][0] is %d\n",ptr+4);
	printf(" The address of the arr[1][1] is %d\n",ptr+5);
	printf(" The address of the arr[1][2] is %d\n",ptr+6);
	printf(" The address of the arr[1][3] is %d\n",ptr+7);
	printf(" The address of the arr[2][0] is %d\n",ptr+8);
	printf(" The address of the arr[2][1] is %d\n",ptr+9);
	printf(" The address of the arr[2][2] is %d\n",ptr+10);
	printf(" The address of the arr[2][3] is %d\n",ptr+11);
	
	
	return 0;
}
