#include <stdio.h>
// We can also pass the arrays to the Fucntion by decalaring POINTER to which can
// accepts the base addresses of the values.
int pointer[int *ptr];
int main()

{
	int marks = [12,67,89,56,23];
	
	pointer(marks);
	
	return 0;
}
int pointer[int *ptr]
{
	int i;
	
	for(i=0;i<=5;i++)
	{
		printf(" Ankas of marks[%d] is %d\n",i,ptr[i]);
	}
    
}
