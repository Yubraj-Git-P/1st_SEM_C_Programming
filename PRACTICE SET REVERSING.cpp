#include <stdio.h>
// Write a program containing a function which reverses the array element inside it:
void reverse(int arr[]);

int main ()

{
	//int array[] = {1,2,3,4,5,6,7,8,9,10};
	int array[];
	
	reverse(arr);
	
	return 0;
}
void reverse(int arr[])
{
	int a;
	
	for(a=0; a<=9; a++)
	{
	    printf(" Enter the value of reverse[%d] :::",a);
	    scanf("%d",&array[]);
	    printf("\n");
	}
	
	int i;
	
	for(i=9; i>=0; i--)
	{
		printf(" The reversing of reverse[%d] is %d\n",i,aray[i]);
	}
}
