#include <stdio.h>
// Passing arrays using Functions :
int display(int array[]);

int main () 

{
	int arr[] = {12,23,34,55,87};
	
	printf(" The value of index 0 is %d\n",arr[0]);
	printf(" The value of index 1 is %d\n",arr[1]);
    printf(" The value of index 2 is %d\n",arr[2]);
    printf(" The value of index 3 is %d\n",arr[3]);
    printf(" The value of index 4 is %d\n",arr[4]);

	display(arr);
	
	
    return 0;
}
int display(int array[])
{
    int i;
	
	for(i=0;i<=4;i++){
		
		printf(" The value of %d is %d\n",i,array[i]);
	} 
	
}
