#include <stdio.h>

int main(){
	// our first calculator program in c progamlming
	
	// Declaring Variables 
	int firstnumber = 100;
	int secondnumber = 20;
	int add,sub,div,mul,mod;
	
	//Calculating 
	add = firstnumber + secondnumber;
	sub = firstnumber - secondnumber;
	mul = firstnumber * secondnumber;
	div = firstnumber / secondnumber;
    mod = firstnumber % secondnumber;
    
	// printing 
	printf("The sum is %d\n",add);
	printf("The substraction is %d\n",sub);
	printf("The multiplication is %d\n",mul);
	printf("The division is %d\n",div);
	printf("The modulus of the function is %d\n",mod);
	
	

	
}
