#include <stdio.h>

int main ()

{
	int array[5] = {12,23,34,46,56};
	
	//array[0] = 12 + 1234;
	//array[1] = 23324-2134;
	//array[2] = 34 +356;
	//array[3] = 46 *123;
 	//array[4] = 56 /2;
	
/*	printf(" The value of array 0 is : \n");
	scanf("%d",&array[0]);
	
	printf(" The value of array 1 is : \n");
	scanf("%d",&array[1]);
	
	printf(" The value of array 2 is : \n");
	scanf("%d",&array[2]);
	
	printf(" The value of array 3 is : \n");
	scanf("%d",&array[3]);
	
	printf(" The value of array 4 is : \n");
	scanf("%d",&array[4]);*/
	
	
	array[0] = array[1] + array[2];//69
	array[1] = array[2] + array[3];//57
	array[2] = array[3] - array[1];//22
	array[3] = array[2] - array[1];//11
	array[4] = array[1] + array[4];//68
	
	
	printf(" The value of array 0 is %d \n",array[0]);
	printf(" The value of array 1 is %d \n",array[1]);
	printf(" The value of array 2 is %d \n",array[2]);
	printf(" The value of array 3 is %d \n",array[3]);
	printf(" The value of array 4 is %d \n",array[4]);
	
	
	return 0;
}
