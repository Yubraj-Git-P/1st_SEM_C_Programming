#include <stdio.h>
//Create an array of 10 numbers. verify using pointer arithmetic that (ptr+2) points to the third element
// where ptr is a pointer pointing to the first element of the array.

int main ()

{   // here it is a single dimensional arrays which have the capacity to store the multiple type of integer datas.
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	
	printf(" The value of arr[0] is %d\n",arr[0]);//1
	printf(" The value of arr[1] is %d\n",arr[1]);//2
	printf(" The value of arr[2] is %d\n",arr[2]);//3
	printf(" The value of arr[3] is %d\n",arr[3]);//4
	printf(" The value of arr[4] is %d\n",arr[4]);//5
	printf(" The value of arr[5] is %d\n",arr[5]);//6
	printf(" The value of arr[6] is %d\n",arr[6]);//7
	printf(" The value of arr[7] is %d\n",arr[7]);//8
	printf(" The value of arr[8] is %d\n",arr[8]);//9
	printf(" The value of arr[9] is %d\n",arr[9]);//10
	
	printf("\n");
	// Decalaration of a pointer which is called *ptr
	int *ptr;// Aslo valid int *ptr = &arr[0];
	ptr = &arr[0];// Giving the address of the arra[0] element to the ptr pointer.
	
    // Here i printed the addresses of the arrays type values
	printf(" The address of arr[0] 1 is %d\n",ptr);// 6487536
	printf(" The address of arr[1] 1 is %d\n",ptr+1);//6487540
	printf(" The address of arr[2] 1 is %d\n",ptr+2);//6487544
	printf(" The address of arr[3] 1 is %d\n",ptr+3);//6487548
	printf(" The address of arr[4] 1 is %d\n",ptr+4);//6487552
	printf(" The address of arr[5] 1 is %d\n",ptr+5);//6487556
	printf(" The address of arr[6] 1 is %d\n",ptr+6);//6487560
	printf(" The address of arr[7] 1 is %d\n",ptr+7);//6487564
	printf(" The address of arr[8] 1 is %d\n",ptr+8);//6487568
	printf(" The address of arr[9] 1 is %d\n",ptr+9);//6487572
	
	printf("\n");
	// Here i printed the value at the address of the elements using pointers
	printf(" The value stored at ptr is %d\n",*ptr);//6487536
	printf(" The value stored at (ptr+1) is %d\n",*(ptr+1));// for single integer it store 4 bytes inside the memory
	printf(" The value stored at (ptr+2) is %d\n",*(ptr+2));// for double integer it store 8 bytes inside the memory
	printf(" The value stored at (ptr+3) is %d\n",*(ptr+3));// for triple integer it store 12 bytes in the memory
	printf(" The value stored at (ptr+4) is %d\n",*(ptr+4));// for four integer it store 16 bytes in the memory
	printf(" The value stored at (ptr+5) is %d\n",*(ptr+5));// for five integer it store 20 Byte in the memory
	printf(" The value stored at (ptr+6) is %d\n",*(ptr+6));//for six Bytes it store 24 bytes in the memory
	printf(" The value stored at (ptr+7) is %d\n",*(ptr+7));// for 7 bytes it store 28 bytes in the memory
	printf(" The value stored at (ptr+8) is %d\n",*(ptr+8));// for 8 bytes it store 32 bytes in the memory
	printf(" The value stored at (ptr+9) is %d\n",*(ptr+9));// for 9 bytes it will store 36 bytes in the memory
	
	
	return 0;
}
