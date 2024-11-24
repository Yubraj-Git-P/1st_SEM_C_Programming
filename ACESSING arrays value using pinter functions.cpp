#include <stdio.h>

void point(int *ptr);
int main()

{
	int array[] = {123,34,45,46,67,43};
	
	point(array);
	
	return 0;
}
void point(int *ptr)
{
	int i;
	
	for(i=0;i<=5;i++)
	{
		printf("The value at %d is %d \n",i,*(ptr+i));
	}
	
}
