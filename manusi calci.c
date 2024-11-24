#include <stdio.h>

int main (){
	//in this module we have decalaring the variables 
	int firstnumber,secondnumber,add,sub,mul,div;
	// in printf function is used to print the function on the out put screen 
	printf("Hey friend please enter your firstnumber:  \n");
	/* in this module we use the scanf function to scan the given variable as in the
	first number and take that first number into the add function*/ 
	scanf("%d",&firstnumber);
	// printing the function hellow hey hellow my friend//
	printf("Hey friend please enter your secondnumber:  \n");
	scanf("%d",&secondnumber);
	/* calculating the add function,subtracting sub function and multiplication the mul
	mul function as it is in the number and division the div function*/
	add = firstnumber + secondnumber;
	sub = firstnumber - secondnumber;
	mul = firstnumber * secondnumber;
	div = firstnumber / secondnumber;
	
	/*here we have printing  the function and giving the naming of the function  by 
	this method we can present the given function in to the given exploring it into 
	related field so conclusing the satatement functoininig this module*/
	printf("Hajur ley gareko number ko addition yeasto xa %d\n", add);
	printf("Hajur ley gareko number ko subtraction yeasto %d\n", sub);
	printf("Hajur ley gareko number ko multiplication yeasto xa %d\n",mul);
	printf("Hajur ley gareko number ko division yeasto xa %d\n",div);
	
	return 0;
		
}
