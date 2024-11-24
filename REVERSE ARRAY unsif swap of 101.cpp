#include <stdio.h>
// Write a program which prints the array 21 elements  in reverse order using the concept of loops
// Funciton, swapping, and arrays
int reverse(int arr[] , int n); 
int main ()

{
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
	
	reverse(arr,21);
	
    for(int a=0; a<21; a++)
    {
    	
    	printf(" The reversing value of the element %d is %d\n",a,arr[a]);
    	
	}
	
	return 0;
}
int reverse(int arr[] , int n)    //for i = 0// arr[0] = arr[20]
{                                 //for i = 1// arr[1] = arr[19]
	                             // for i = 2// arr[2] = arr[18]
	                             // for i = 3// arr[3] = arr[17]
	for(int i=0; i<=10; i++)     // for i = 4// arr[4] = arr[16]
	{                            // for i = 5// arr[5] = arr[15]
	    int temp;                // for i = 6// arr[6] = arr[14]
	    temp = arr[i];           // for i = 7// arr[7] = arr[13]
	    arr[i] = arr[n-i-1];     // for i = 8// arr[8] = arr[12]
	    arr[n-i-1] = temp;       // for i = 9// arr[9] = arr[11] 
	                             // for i = 10// arr[10] = arr[10]
    }                            
}                    
