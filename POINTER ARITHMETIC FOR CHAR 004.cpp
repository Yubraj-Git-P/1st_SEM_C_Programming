#include <stdio.h>
// POINTER ARITHMETICS FOR TEH character variables.c

       // N charcter stores N Bytes in the computer architecture Or memory 
       
int main( ) 

{
	char a = 'G';
	
	char *chr = &a; // NOte here for the address which is a integer not and int used
	// incase this is charater variable so thats why char should be used here.
	
	printf(" The addresses of the character is %u\n",chr);// Output for this is 6487575
	chr++;// (6487575 + 1increament) becz character allocates only 1 bytes for the integer= 6487576
	chr++;// (6487576 + another 1 increamen ) character store 1 byte = 6497577
	printf(" The adreses of the character after increament 2 time is %u\n",chr);// output = 6487577
	chr++;// 6487578 // here character allocates single bytes for one character in this architeture
	chr++;//6487579// Here character allocates single bytes for one character
	chr++;//6487580// Here character allocates 1 byte for one character
	chr++;//6487581// here character allocates  byte for one chaacter
	printf(" The address of the pointer after increament in 4 times is %d \n",chr);// 6487581
	//here i found that the character allows single bytes i mean single character allocte 1 byte
	//double character allocate 2 byte and tiple character allows tiiple bytes.
	//similarly for (n) number of character the memory allocats n bytes in this computer 
	//architecture
	
	printf("\n");
	
	{
		char c = 'H';
		char *cchr = &c;
		
		printf(" The value of the address is %u \n",cchr);// Here output comes 6487566
		cchr--;// output is 6487565 decreament means 1 minus becz character store 1 byte for 1 chra
		cchr--;// output comes 6487564 here 1 get minus due to decreament bcz character
		// allocates 1 byte for single character
		printf(" The value of the address after double increment is %u \n",cchr);// 6487564
		cchr--;// 6487563 ( here 1 byte decreases from 6487564) because for single character
		// this computer system architecture allocates single Byte (1 byte for 1 character) 
		cchr--;// 6487562 (Here 1 byte decreases for single charcter): 
		cchr--;// 6487561 ( Here 1  byte decreses for single character): 
		cchr--;// 6487560 (here 1 Byte decreses for singel character): 
		
		printf(" The value of the address after four times decreament is %u \n",cchr);//6487660
		
		//here in this case i use decreament pointer so, only 1 is going to decrease
		//because single character store only 1 byte in this computer architecture
		//similarly, for (n) number of character the memory system allows n BYTES. 
		
	}
	printf("\n");
	
	{
		char d = '$';
		char *ccchr = &d;
		
		printf(" The value of the addresses is %u \n",ccchr);//6487557
		ccchr = ccchr + 1;// single byte for single character(1 byte for 1 character) = 6487558
		ccchr = ccchr + 2;// Double byte for double charcter(2 byte for 2 character) = 6487560
		printf(" The value of the addresses after adding 1 & 2 is %u \n",ccchr);//OUTPUT = 6487560.
		ccchr = ccchr - 10;// 6487550 becz (n) byte add or subtract for (n) character.
		ccchr = ccchr - 20;// 6487530 becz (n) byte add or subtrac for n charfacter.
		
		printf(" The value of the addressesd after minus 10 & 20 is %u \n",ccchr);//6487530
		//here i deal with the subtraction and addition of the integer number with the pointers
		//and i found that for 1 charater it allocate 1 Bytes similarly for n character it 
		//allocates n bytes..
		
		}
	
	return 0;
}
