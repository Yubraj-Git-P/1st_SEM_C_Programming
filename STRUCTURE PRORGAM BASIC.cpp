#include <stdio.h>
#include <string.h>
// Write a program which give a short intro abouts structures::
struct employe{
	
	int code_no;
	float salary;
	char name[10];
};
int main ()

{
	struct employe e1;
	e1.code_no = 1235;
	e1.salary = 98723.7876;
	//e1.name = "SAHIL";// NOTE BY this ways we cannot print the value of chracter array
	// So for the printing of an character arrays we should have to use strcpy...
	strcpy(e1.name,"SAHIL");
	
	printf("The employe code number is %d\n",e1.code_no);
	printf("The salary range of employe is %.1f\n",e1.salary);
	printf("The name of the empoye is %d\n",e1.name);
	
	return 0;
}
