#include <stdio.h>
// Write a program which store and print the detail of three employe..
struct employe{
	
	char name[20];
	int code_number;
	float salary_range;
};
int main ()

{
	struct employe e1;
	strcpy(e1.name,"YUBRAJ PARIYAR");
	e1.code_number = 2309;
	e1.salary_range = 12.34567;
	
	printf("Name of employe is %s\n",e1.name);
	printf("Code number of the employe is %f\n",e1.code_number);
	printf("Salary range of the employe is %d",e1.salary_range);
	
	printf("\n");
	
	struct employe e2;
	strcpy(e2.name,"HIMAL PARIYAR");
	e2.code_number = 456;
	e2.salary_range = 23.546;
	
	printf("Name of employe is %s\n",e2.name);
	printf("Code number of the employe is %f\n",e2.code_number);
	printf("Salary range of the employe is %d",e2.salary_range);
	
	struct employe e3;
	strcpy(e3)
	
	
	
	
	
	
	
	
	return 0;
}
