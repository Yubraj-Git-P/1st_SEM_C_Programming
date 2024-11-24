#include <stdio.h>
#include <math.h>

/* Write a  program of calculator which make addition,subtraction,division
multiplication, exponent,*/
int main (){
	
	int a,b,c,d,add,subs,mul,div,diff,intg;
	
	printf("Enter your first numbers: ");
	scanf("%d",&a);
	
	printf("Enter your second number : ");
	scanf("%d",&b);
	
    printf("Enter your third number : ");
    scanf("%d",&c);
    
    printf("Enter yout fourth number : ");
    scanf("%d",&d);
    
    add = a+b+c+d;
    subs = (a+b)-(c-b);
    mul = a*b*c;
    div = c/a;
    
    //Simple calculations:
    printf("The value of addition is %d \n",add);
    printf("The value of subtraction is %d \n",subs);
    printf("The value of multiplication is %d \n",mul);
    printf("The value of division is %d \n",div);
    
    //Exponential calculations:
    printf("The value of a power b is %f \n",pow(a,b));
    
    
	
	return 0;
}
