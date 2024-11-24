#include <stdio.h>

int main (){
	
	
	int firstnumber,secondnumber,add,sub,mul,div,mod;
	
	printf("Enter your firstnumber: \n");
	
	printf("Enter your secondnumber: \n");
    scanf("%d",&firstnumber);

	scanf("%d",&secondnumber);
	
	add = firstnumber + secondnumber;
	sub = firstnumber - secondnumber;
	mul = firstnumber * secondnumber;
	div = firstnumber / secondnumber;
	mod = firstnumber % secondnumber;
	
	printf("The sum of the number is %d\n",add);
	printf("The difference of the number is %d\n",sub);
	printf("The multiplication of the number  is %d\n",mul);
	printf("The division of the number is %d\n",div);
	printf("The modulus of the number  is %d\n",mod);
	 
	return 0;
	
}	
	
	
	
	
	

