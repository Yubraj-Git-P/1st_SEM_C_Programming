#include <stdio.h>

int main (){
	
	int firstnumber,secondnumber;
	int add,sub,mul,div,mod;
	
	printf("Enter your first number: \n");
	scanf("%d",&firstnumber);
	
	printf("Enter your second number: \n");
	scanf("%d",&secondnumber);
	
	add = firstnumber + secondnumber;
	sub = firstnumber - secondnumber;
	mul = firstnumber * secondnumber;
	div = firstnumber / secondnumber;
	mod = firstnumber % secondnumber;
	
	printf("The sum of the Two number is %d\n",add);
	printf("The difference of the two number is %d\n",sub);
	printf("The product of the two number is %d\n",mul);
	printf("The division of the two number is %d \n",div);
	printf("The modulus of the two number is %d \n",mod);
	
	return 0;

	
	
}
