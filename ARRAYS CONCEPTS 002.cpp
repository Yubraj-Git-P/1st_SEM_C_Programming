#include <stdio.h>
// write a program which describes the syntax, for int element, float element, and last one
// character variables used in c language.c  
int main () 

{
	int age[5];// This is our integer type Array
	// Array which stores only the integer value of multiple type is called and integer type array.
	
	age[0] = 23;
	age[1] = 34;
	age[2] = 56;
	age[3] = 87;
	age[4] = 90;
	
	printf(" Age of people who sit in 0 bench is %d \n",age[0]);
	printf(" Age of people who sit in 1 bench is %d \n",age[1]);
	printf(" Age of people who sit in 2 bench is %d \n",age[2]);
	printf(" Age of people who sit in 3 bench is %d \n",age[3]);
    printf(" Age of people who sit in 4 bench is %d \n",age[4]);
	
	char name[6];// This is a type of character arrays which help to store the character values
	// of the multipls type
	
	name[0] = 'H' ;// Note character values are enclosed with double inverted comma.
	name[1] = 'I';// Note character values are enclosed with double inverted comma.
	name[2] = 'M';// Note character  values are enclosed with double inverted comma.
	name[3] =  'A';//  Note character values are enclosed with double inverted comma.
	name[4] =  'L';// Note character values are enclosed with double inverted comma.
	name[5] =  'I';// Note character values are enclosed with double inverted comma. 
	
	printf(" Nobodys name is %c \n",name[0]);
	printf(" My father name is %c\n",name[1]);
	printf(" My mother name is %c\n",name[2]);
	printf(" My brother name is %c\n",name[3]);
	printf(" My sister name is %c\n",name[4]);
	printf(" An My name is %c\n",name[5]);
	
	float fvalue[5]; // This is a type of float array whichd helps to store the 
	// Floating values of the multiple type and make easier for us to make the program 
	// faster and more confortable for us : 
	
	fvalue[0] = 234.455;
	fvalue[1] = 34.453;
	fvalue[2] = 235.234;
	fvalue[3] = 123.34545;
	fvalue[4] = 987.78634;
	
	printf("The zeroth floating value is %f\n",fvalue[0]);
	printf("The first floating value is %f\n",fvalue[1]);
	printf("The second floating value is %f\n",fvalue[2]);
	printf("The thirsd floating value is %f\n",fvalue[3]);
	printf("The fourth floating value is %f\n",fvalue[4]);
	printf("The fifth floating value is %f\n",fvalue[5]);
	
	return 0;
}
