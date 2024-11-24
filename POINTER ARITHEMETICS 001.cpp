#include <stdio.h>
// POINTER ARTHEMETICS
int main () 

{ 
    //what is pointer arithemetics :
	//first of all pointer is an special type of variable which is mainly used to store the adress
	//of the vairbale.
	
	//and Pointer to pointer is another type of variable which is used to to store the adress of 
	//anothre pointer.
	
	//POINTER ARITHEMETICS :
	
	//pointer arithemtics is one of those in which we can do increament, decreament, addition,
	//subtraction of a pointer itself called an Pointer arithemeticss. 	
	
	int i = 50;
	int *ptr = &i;
	
	printf(" The value of ptr is %u\n",ptr);
	ptr++;
    ptr++;
    ptr++;
    ptr++;
    ptr++;
    ptr++;
    	
	printf(" The value of ptr is %u\n",ptr);
	
	printf(" The value of a is %d\n",i);
	
	printf(" The value stored at ptr is %d\n",*ptr);
	
	/*Here in case the value let us output for the adress of the pointer ptr is 6687572
	let ptr dress comes 6687572
	
	1). output for ptr++ is 6687576 here its increased by 4 times which means 4 bytes
	so, because ONE integer in my computer architecture allocate 4 bytes thats why 
	it store 4+ whe we added in it.
	
	2). output for ptr++; and ptr++, is 6687580, here address in memory increased by 8 times
	because in this computer architecture my memory allolcate 8 bytes for 2 integer. 
	
	3). output for this is ptr++, ptr++, prt++ :is 6687584, here adress in memory is incresed by
	12 times because in my type of computer architecture my memory allocates 12 bytes for 
	3 ineger so its incresed by three times.c
*/	

	
//	printf(" The value stored at a is %d\n",*a);
//	printf(" The value stored at b is %d\n",*(*b));
	
	
	return 0;
}


