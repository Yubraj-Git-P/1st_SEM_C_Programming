#include <stdio.h>
// using concepts of loops passing an arrays :
// print the marks 100 students Using the concepts of loops.
//By passing arrays using functions :
int display(int marks[]);
int main ()
 
{
	int marks[] = {12,3324,345,4546,23,32,465,445,3234,234};
	display(marks);
	
	return 0;
}
int display(int marks[])
{
	int i;
	
	for(i=0;i<=9;i++) {
		
		printf(" The marks of marks[%d] students is %d\n",i+1,marks[i]);
	}
	
}
