#include <stdio.h>
#include <string.h>
//#include <string.h>
// Write a program which takes input from the user of three employs datas::
struct employe{
	
	int code_num;
	float salary_range;
	char name[10];
};
int main ()

{
	struct employe e1, e2, e3;
	
	//printf("Entering the datas given belows :");
	
	printf("Enter the code number of the employee e1 \n: ");
	scanf("%d",&e1.code_num);
	
	printf("Enter the salary range of the employe e1 \n: ");
	scanf("%f",&e1.salary_range);
	
	printf("Enter the name of the employee e1 \n: ");
	scanf("%s",e1.name);
	
	//printf("\n");
	
	printf("Enter the code number of the employee  e2  \n: ");
	scanf("%d",&e2.code_num);
	
	printf("Enter the salary range of the employe  e2 \n: ");
	scanf("%f",&e2.salary_range);
	
	printf("Enter the name of the employee e2 \n: ");
	scanf("%s",e2.name);
	
	//printf("\n");
	
	printf("Enter the code number of the employee e3 \n: ");
	scanf("%d",&e3.code_num);
	
	printf("Enter the salary range of the employe e3 \n: ");
	scanf("%f",&e3.salary_range);
	
	printf("Enter the name of the employee  e3 \n: ");
	scanf("%s",e3.name);
	
	//printf(" PRINTING THE datas given belows :\n");
	
	/*printf("*****************************************************************\n");
	
	printf("The code number of the employee e1.code_number is %d\n",e1.code_num);
	printf("The salary range of the employee e1.salary_range is %f\n",e1.salary_range);
	printf("The name of the employee e1.name is %s\n",e1.name);

    printf("*****************************************************************\n");
	
	printf("The code number of the employee e2.code_number is %d\n",e2.code_num);
	printf("The salary range of the employe e2.salary_range is %f\n",e2.salary_range);
	printf("The name of the employe e2.name is %s\n",e2.name);
	
	printf("******************************************************************\n");
	
	printf("The code number of the employe e3.code_num is %d\n",e3.code_num);
	printf("The salary range of the employee e3.salary_range is %f\n",e3.salary_range);
	printf("The name of the employee e3.name is  %s\n",e3.name);*/
	
		
	return 0;
}
