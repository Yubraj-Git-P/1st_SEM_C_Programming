#include <stdio.h>
// By  Decalaring a pointer to the Function which holds the base adddress of the arrays.
void marks(int *ptr);
int main ()

{
	int array[] = {12,312,234,45,547,567,123434,55612,324,567,342};
	
	marks(array);

    array[3] = 1238;// Here by using this arrays we can easily change acess values inside an arrays
	printf(" VAlue of array[3] is %d\n",array[3]);
	
	array[4] = 3425;// Here by using this systems we can easily change aces values inside an arrays
	printf(" Value of array[4] is %d\n",array[4]);  
      
	return 0;
}
void marks(int *ptr)

{   //Note : Here single 1 stored 4 Bytes and another 2 is and Double integer so it store 8 Bytes
    // 3 is an triple so that it store 12 integer 
    // as like it 4 means there are four integer so that it should store 16 Bytes here.
    // as like it 5 means there are five integer so that it should store 20 Bytes here.
    // as like it 6 means there are six integer so that it should store 24 bytes here.
	// as like it 7 means there are seven integer so thaat it should store 28 bytes here.
	// just like it 8 means there are Eight integer so that it should store 32 Bytes here.
	// just like it 9 means there are nine integer so that it should store 36 Bytes here.
	// just likt it 10 means there are 10 integer so that it should store 40 integer here.
    printf(" The value at zeroth address is %d\n",*ptr);// 6487536
	printf(" The value at first address is %d\n",*(ptr+1));// (6487536 + 1) = (6487540 + 4 Bytes)
	// Here for a single integer 4 bytes is stored inside the address
	printf(" The value at second address is %d\n",*(ptr+2));// (6487536 + 2) = (6487536 + 8 Bytes)
	// Here 2 is a single integer but 8 bytes stored for this
	printf(" The value at third address is %d\n",*(ptr+3));// (6487536 + 3) = (6487536 + 12 Bytes)
	// Here 3 is a single integer but 12 bytes stored for this
	printf(" The value at fourth address is %d\n",*(ptr+4));// (6487536 + 4) =(6487536 + 16 Bytes)
	// Here 4 is a single inteeger But 16 Byts stored for this
	printf(" The value at fifth address is %d\n",*(ptr+5));// (6487536 + 5) = (6487536 + 20 Bytes)
	// Here 5 is a single integer But 20 Bytes stored for this
	printf(" The value at sixth address is %d\n",*(ptr+6));// (6487536 + 6)= (6487536 + 24 Bytes)
	// Here 6 is a singel integer But 24 bytes stored for this
	printf(" The value at seventh address is %d\n",*(ptr+7));// (6487536 + 7)= (6487536 + 28 Bytes)
	// here 7 is single integer But 28 bytes stored for it
	printf(" The value at eighth address is %d\n",*(ptr+8));//(6487536 + 8)= (6487536 + 32 Bytes)
	// here 8 is single integer But 32 Bytes stored foo it
	printf(" The value at nigtht address is %d\n",*(ptr+9));//(6487536 + 9)= (6487536 +  36 Bytes)
	// here 9 is a single integer But 36 bytes stored for it
	printf(" The value at tenth address is %d\n",*(ptr+10));//(6487536 + 10) = (6487536 + 24 Bytes)
	//here 10 is a single integer But 40 bytes stored fo it
	
}
