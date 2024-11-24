#include <stdio.h>

int main (){
	
	// MY first calculater program using c language
	
	//Decalaring varibles
	int firstnumber,secondnumber,add,sub,mul,div,mod;
	
	//Geeting user inputs
	/*As The main important role of printf function is that to 
	print the statement Iside the output screen*/
	
	printf("Enter the firstnumber:\n");
	scanf("%d",&firstnumber);
	
	//Geeting another inputs
	printf("Enter the secondnumber:\n");
	/*scanf function is one of those who take the input from the user and store in the variables that
	again give value to the function and and proceed there lively*/
	scanf("%d",&secondnumber);
	
	 
	//Working on the functions
	add = firstnumber + secondnumber;
	sub = firstnumber - secondnumber;
	mul = firstnumber * secondnumber;
	div = firstnumber / secondnumber;
	mod = firstnumber % secondnumber;
	
	//Printing the functions
	printf("The sum is %d\n",add);
	printf("The difference is %d\n",sub);
	printf("The product is %d\n",mul);
	printf("The division is %d\n",div);
	printf("The modulus is %d\n",mod);
	
	return 0;
	
}
