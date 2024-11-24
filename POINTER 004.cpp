#include <stdio.h>

int main () 

{
	int a = 5;
	int *i,**j;// use of Pointer to pointer
	
	i = &a;
	j = &i;
	
	printf("value of a is %d\n",a);
	printf("Adress if a is %u\n",&a);
	printf("adress of a is%d\n",i);
	printf(" value stored at i is %d\n",*i);
	printf(" adress of j is %d\n",j);
	printf(" value at adress of j is %d\n",*j);
	printf(" value at adress of j is %d\n",**j);
	
	
	
	
	return 0;
}
