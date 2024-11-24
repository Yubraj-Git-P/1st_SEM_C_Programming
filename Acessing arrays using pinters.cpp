#include <stdio.h>
// Acessing marks of students using pointers.
void pointer(int *marks);// Decalaration of pionter variables.
int main ()

{
	int Ankas[] = {234,345,65767,8789,756,324};
	
	pointer(Ankas);
	
	return 0;
}
void pointer(int *marks)
{
	int a;
	
	for(a=0;a<=5;a++)
	{
		printf(" The marks of %d students is %d\n",a,marks[a]);
	}
}q
