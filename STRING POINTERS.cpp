#include <stdio.h>
// Write a prgram using to get acess the value of an string array using pointers
int main ()

{
   char string[9] = {'C','O','M','P','U','T','E','R','\0'};// one will be added becz null consder 1 char
   char *ptr;
   ptr = &string[0];
   
   printf("The address of string[0] is  %u\n",ptr);//1687552
   //  becz charcater array will store 1 byte for 1 charater
   printf(" The address of string[1] is %u\n",(ptr+1));//1687553
   // becz character array will store 1 byte for 1 charater
   printf(" The address of string[2] is %u\n",(ptr+2));//1687554
   // becz charater array will store 1 byte for 1 character
   printf(" The address of string[3] is %u\n",(ptr+3));//1687555
   // becz character array will store 1 byte for 1 character
   printf(" The address of string[4] is %u\n",(ptr+4));//1687556
   // becz character array will store 1 byte for 1 character
   printf(" The address of string[5] is %u\n",(ptr+5));//1687557
   // becz charcater array will store 1 byte for 1 character
   printf(" The address of string[6] is %u\n",(ptr+6));//1687558
   //becz character array will store 1 byte for 1 charcater
   printf(" The address of string[7] is %u\n",(ptr+7));//1687559
   // becz charcter array will store 1 byte for 1 charcater
   printf(" The address of string[8] is %u\n",(ptr+8));//1687560
   // becz character array will store 1 byte for 1 character
  
   printf("\n");
  
   //how to acessing the values of the string using pointer :
   printf("The character stored at string[0] is %c\n",*ptr);
   ptr++;// 1byte stored for 1 character
   printf(" The character stored at string[1] is %c\n",*ptr);
   ptr++;// 1 byte stored for 1 single character
   printf(" The charcater stored at string[2] is %c\n",*ptr);
   ptr++;// 1 byte stored for 1 single charater
   printf(" The character stored at string[4] is %c\n",*ptr);
   ptr++;// 1 byte stored for 1 single character
   printf(" The character stored at string[5] is %c\n",*ptr);
   ptr++;// 1 byte stored for 1 single character
   printf(" The character stored at string[6] is %c\n",*ptr);
   ptr++;// 1 byte stored for 1 single character
   printf(" The character stored at string[7] is %c\n",*ptr);
   ptr++;// 1 byte stored for 1 single character
   printf(" The character stored at string[8] is %c\n",*ptr);
   ptr++;// 1 byte stored for 1 single character
   
   printf("\n");
   
   ptr--;
   printf(" The charcater stored at string[8] is %c\n",*ptr);
   ptr--;// 1 byte will be stored for 1 single character
   printf(" The character stored at string[7] is %c\n",*ptr);
   ptr--;// 1 byte will be stored for 1 single character
   printf(" The character stored at string[6] is %c\n",*ptr);
   ptr--;// 1 byte will be stored for 1 single character
   printf(" The character stored at string[5] is %c\n",*ptr);
   ptr--;// 1 byte will be stored for 1 single character
   printf(" The character stored at string[3] is %c\n",*ptr);
   ptr--;// 1 byte will be stored for 1 single character
   printf(" The character stored at string[2] is %c\n",*ptr);
   ptr--;// 1 byte will be stored for 1 single character
   printf(" The character stored at string[1] is %c\n",*ptr);
   ptr--;// 1 byte will be stored for 1 single character
   printf(" The character stored at string[0] is %c\n",*ptr);
  
   //RANDOM VALUE ACESS THROUGH charater using the concept of pointer:  
   printf("\n");
   //note : 1687552
   ptr = (ptr+2); // 1687554 for single character one bytes will be stored
   printf(" The character stored at string[2] is %c\n",*ptr);// M
   ptr = (ptr+5);// 1687559 for single character one bytes will be stored
   printf(" The character stored at string[6] is %c\n",*ptr);// R 
   ptr = (ptr-4);// 1687555 for single character on bytes will be stored
   printf(" The character stored at string[3] is %c\n",*ptr);// P
   ptr = (ptr-2);// 1687553 for single character on bytes will be stored
   printf(" The character stored at string[1] is %c\n",*ptr);// O
   ptr = (ptr+3); // for single character one bytes will be stored
   printf(" The character stored at string[1] is %c \n",*ptr);// U
   // Note : down IN pointer arithmetics one bytes will be stored for one character 
   // its means single charcter takes 1 bytes for single character :::
   
   
   
	return 0;
}
