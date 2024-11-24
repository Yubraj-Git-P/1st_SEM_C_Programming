#include <stdio.h>

struct employe{
	
	int code_num;
	float salary_range;
	char name;
};
int main ()

{
	struct employe e1;
	
	printf(" Enter the code number of the employe e1 :\n");
	scanf("%d",&e1.code_num);
	
	printf("Enter the salary_rang of the employe e1 :\n");
	scanf("%f",&e1.salary_range);
	
	printf("Enter the name of the employe e1 : \n");
	scanf("%s",e1.name);
	
	
	printf("The code_number of the first employe e1. is %d\n",e1.code_num);
	printf("The salary range of the employe e1. is %f\n",e1.salary_range);
	printf("The name of the employe e1 is %s\n",e1.name);
	
		
	return 0;
}
