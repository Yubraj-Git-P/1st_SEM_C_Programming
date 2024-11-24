#include <stdio.h>
// Write a program in c language which passing the array to the Fucntion.
int display(int array[]);// THis part is called our Fucntion prototype

int main () 

{
    int arr[] = {1,2,3,4,5};
	display(arr);// This part is callled our Function calls
	
	return 0;
}
int display(int array[]) // This part is called our Function definition
{
	int i;
	
	for(i=0;i<=4;i++){
		
		printf("The value of index array[%d] is %d\n",i,array[i]);
	}
    printf("The value of index array[0] is %d \n",array[0]);
	printf("The value of index array[1] is %d \n",array[1]);
    printf("The value of index array[2] is %d \n",array[2]);
	printf("The value of index array[3] is %d \n",array[3]);
    printf("The value of index array[4] is %d \n",array[4]); 
}
