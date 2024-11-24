#include <stdio.h>

int main ()  

{   
    //An array is one of the variable which is capable of storing multiples same form of
    //data inside itself by the use of arrays we can make our programs much more easier and\
    //understandable to it

	int marks[5] = {23489,54666,89678,65789,56866};
	//this is an integer type of arrays which is capable of storing multiple forms of same datas
	//inside it and and note one an arrays can be stored in an smarter ways  
	
	
	//marks[0] = 23489; 
	//marks[1] = 54666;
	//marks[2] = 89678;
	//marks[3] = 65789;
	//marks[4] = 56866;
	
	printf(" Value of marks[0] is %d\n",marks[0]);
	printf(" Value of marks[1] is %d\n",marks[1]);
    printf(" Value of marks[2] is %d\n",marks[2]);
    printf(" Value of marks[3] is %d\n",marks[3]);
    printf(" Value of marks[4] is %d\n",marks[4]);
    
    printf("\n");
    
    char name[6] = {'Y','U','B','R','A','J'};
    // this is a characer form array which is used to stored character inside itself
    // and note one thiing this type of character array can be stored in smarter ways
    
	//name[0] = 'Y';
	//name[1] = 'U';
	//name[2] = 'B'; 
	//name[3] = 'R';
	//name[4] = 'A';
	//name[5] = 'J';
	 
    printf(" Zeroth name is %c\n",name[0]);
	printf(" first name is %c\n",name[1]);
    printf(" second name is %c\n",name[2]);
	printf(" third name is %c\n",name[3]);
	printf(" fourth name is %c\n",name[4]);
	printf(" fifth name is %c\n",name[5]);
	 
	printf("\n");
	
	
	float fval[6] = {234.435,342.546,5786.2356,345.457,567.345,13246.678};
	// This is an floating arrays which is capable of storing multiples type of same data like 
	// floats vlaue and note one thing floating values can be arranged in an smarter ways.
	
	
	//fval[0] = 234.435;
	//fval[1] = 342.546;
	//fval[2] = 5786.2356;
	//fval[3] = 345.457;
	//fval[4] = 567.345;
	//fval[5] = 13246.678;
	
	printf(" The zeroth floating value is %f\n",fval[0]);
	printf(" The first floating value is %f\n",fval[1]);
	printf(" The second floating value is %f\n",fval[2]);
	printf(" The third floating value is %f\n",fval[3]);
	printf(" The fourth floating value is %f\n",fval[4]);
	printf(" The fifth floating value is %f\n",fval[5]);
	
    
	return 0;
}
