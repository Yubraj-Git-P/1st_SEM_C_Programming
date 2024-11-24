#include <stdio.h>
// Write a program which reverses the array element and print it on the screen using the concept
// of loops and swapping the variables :
int reverse(int arr[] , int n);//Also int reverse[int *arr, int n]
int main ()
// Note that in this program i used the concept of function, loops, swapping , array ::::

{
	int arr[] = {1,2,3,4,5,6,7};// we can exchange or reverses the values By swapping the integers ::
		
	reverse(arr,7);
	
	for(int i=0; i<7; i++)
	{
		
	    printf("The reversing value of %d element is %d\n",i,arr[i]);
		 
	   //return 0;
	}
	
	return 0;
}
int reverse(int arr[] , int n)
{
	//int temp;
	
	for(int i=0; i<=3; i++)
	{
		int temp;            //for i = 0; //  arr[0]  = arr[6]  
		temp = arr[i];       //for i = 1; //  arr[1]  = arr[5]
		arr[i] = arr[n-i-1];// for i = 2;  //  arr[2]  = arr[4]
		arr[n-i-1] = temp;  // for i = 3; // arr[3]  = arr[3]
	}                       // for i = 4; // arr[4] = arr[2]	                   
}	                        // for i = 5; // arr[5] = arr[2]
                            // for i = 6; // arr[6] = arr[0] 
