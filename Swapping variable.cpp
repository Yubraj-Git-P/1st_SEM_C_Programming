#include <stdio.h>

int main () 

{
	int a,b,temp;
	
	printf(" Value of a and b is :");
	scanf("%d %d",&a,&b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("Value of a is %d\n",a);
	printf("Value of b is %d\n",b);
	
	return 0;
}
