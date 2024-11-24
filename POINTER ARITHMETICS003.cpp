#include <stdio.h>
// POINTER arithmetic's int integer variabel (((4 bytes for single ineteger allocated here)))

            // prorgam which shows the increaments, decreaements, addition, and subtraction in the 
            // POINTER arithmetics which make simple to change the adress of the variables.
     
int main () 

{
	//pointer is a type of spacical variable which is capable of storing the address of the another
	//variable. and pointer to pointer is an variable which is capable of stotring the adress of 
	//pointer itself. and Pointer arithemtics means we can add, subtract, multily and div the pointer.
	
	int i = 25;
	int *ptr = &i;
	
	// INCREAMENT OF pointer operator example 
	// NOTE most important: increament operator increases by the bytes allocate for integer not by the Number.
	// 4 bytes for single mostly... 
	 
	printf(" The value of pointer ptr is %u\n",ptr);//6487572
	ptr++;//6487576 // increament operator increases by bytes allocate for integer not by the number.
    ptr++;//6487580 // increament operator increases by bytes allocate fot integer not by the number. 
	printf(" The value of pointer after increament is %u\n",ptr);//6687580
	ptr++;//6487584 // increament operator increases by bytes allocate for integer not by the number.
	ptr++;//6487588 //  increament operator increases by bytes allocate for integer not by the number
	ptr++;//6487592 // increament operator increases by the bytes allocate for integer not by the number.
	ptr++;//6487596// increament operator increases by the bytes allocate for integer not by the number.
	printf(" The value of pointer after increame int four  times is %u \n",ptr);
	// finally here is the output of this program will be 6487596
	//because the if 6687572 is the intial address of the decalare integer then while we
	//increament the pointer operator which is added by 4 that means each of the integer 
	//allocates 4 bytes of architecture in this computer systems. so in this compilier 
	//memoery one integer carries 4 bytes at a time so, thats why it is added by 4 times.
	
	printf("\n");
	
	{
		
		int j = 30;
		int *pptr = &j;
		
		// DECREAMENT OF THE pointer operator example
		printf(" The value of pptr is %u\n",pptr);// Output address is 6487560
		pptr--;// 6487556 // decreament operator decreases by the bytes allocate not by the number
		pptr--;// 6487552 // decreament operator decrease by the bytes allocate not by number
		printf(" The value of pptr after decareament 2 times is %u \n",pptr);// output is 6487552.
		pptr--;// 6487548 // decreament operator decresses by the bytes allocate not by number.
		pptr--;// 6487544 // decreament operator decreses by the bytes allocate  not by number.
		pptr--;// 6487540 // decreament operator decrease by the bytes allocate not by the number.
		pptr--;// 6487536 // decreament operator decresse by the bytes allocate not by the numbers.
		printf(" The value of pptr after decreament four times is %u \n",pptr);// 6487536
		//Here, whie addressing through the pointer here come the address of the variable is
		//6487560 but after using first decreament its value becomes 6487556 
		//and after decreament in 2 times address becomes 6487552 and afte decreament in 4 times
		//the value of the address becomes 6487536 why this is happining Because each integer in 
		//this system allocates 4 bytes which thats ,mean while we us decreament operator
		//it decreased by 4 times in the address. becz in this computer architecture
		//here the memory allocates 4 bytes for each integer 
		} 
	 
	 printf("\n");
	 
	{
	    int k = 234;
	    int *ppptr = &k;
	    
	    
	    // Here in this case (1) or (2) integer is not added or subtracted to the POINTERS incase
		// the memory allocates for the one integer 4 BYtes is going to stored... 	
	    printf(" The value of ppptr is %u\n",ppptr);//6487548
	    ppptr = ppptr + 1;// here 6487548 + (4) not 1 becz its an integer = 6487552
		ppptr = ppptr + 2;// here 6487552 + 2((1) means+4 and (1)again +4) = 6487560
		// because while addition any of the numbers to the pointer with the address
		// number the add number is not added there incase the integer which 
		// carries 4 for single bytes and 8 for 2 interger that will be added to the 
		// pointer variable
		
		// In this case also (1) or (2) is not going to be stored here incase the memory allocated
		// for integer like 4 byte for singee is going to be stored in this addresses. 	   
	    printf(" The value of ppptr is %u \n",ppptr);// so here come the output is == 6487560;
        ppptr = ppptr - 1;// Here (6487560 - 4) Byte becz here only one integer which have 4 byte == 6487556;
	    ppptr = ppptr - 2;// Here (6487560 - 4 BYte for 1 and 4 for Anothr 1 which equals 2 intger== 6487548;
	    ppptr = ppptr -3;// Here (6487560 - {(1=4)+(1=4)+(1=4) becz one integer allwo 4 Bytes == 6487536;
	    printf(" The value of ppptr is %u \n",ppptr);// Finally here comes the Output is 6487536;  	
	     //Here the intial address of the pointer variable is 6487548 in this case if we decreament the operator
		 //by one or more than the INTEGER (1) or (2) is not subtracted incase the Bytes carry for single integer 
		 //like 4 bytes for singe integer is subtracted form the variables.  	
	     	
		}
	
	
	
	return 0;
}
