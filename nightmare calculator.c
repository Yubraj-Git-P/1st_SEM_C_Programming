#include <stdio.h>

int main (){
	
	int firstnumber,secondnumber;
	int add,sub,mul,div;
	
	printf("Hey consumer give us your first number: \n");
	scanf("%d",&firstnumber);
	
	printf("Hey consumer please enter your second number: \n");
	scanf("%d",&secondnumber);
	
	add = firstnumber + secondnumber;
	sub = firstnumber - secondnumber;
	mul = firstnumber * secondnumber;
	div = firstnumber / secondnumber;
     
	Printf("Hajur ley gareko addition yesto xa %d\n",add);
	printf("Hajur ley gareko subtraction yesto xa %d\n",sub);
	printf("Hajur ley gareko multiplication yesto xa %d\n",mul);
	printf("Hajur ley gareko division yesto xa %d\n",div);
	
	return 0;	
		
}
