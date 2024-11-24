#include <stdio.h>
//create a array of 10 numbers varify using pointer arithmetics that (ptr+2) points to the third element
// of where ptr is a pointer pointing the first element of the array.
int main ()

{   
    int array[10];
    
    int *ptr;
    ptr = &array[0];
    
    //printf(" The address of array[0] is %d\n",ptr);//6487536
	
	if((ptr+2)==&array[2])
	{
		printf(" The pointer pointing to the right Location\n");
		printf(" Hence your pointer is verified");
	}
	
	else{
		printf(" The pointer pointing to the wrong location");
    }
	
	return 0;
}
