#include <stdio.h>
#include <string.h>
// Write a program which store the datas of three empoye using the concept of structures.
struct employe{
	// This is the way define an structure which helps to store different types of datas 
	// in a single data type
	// BY the help of structure we are able to prepare the custom data type
	// by the help of structures we are able to prepare custom data type.
	//By the helpl of structure we are able to prepare custom data type.
	// By the help of sturcuture we are able to prepare custom data type.
	// By the help of structure we are able to prepare custom data type.
	//By the help of structures we are able to prepare customo data type.
	// BY the help of structures we are able to prepare custom data type.
	// BY the help of structures we can be able to prepare custom data type.
	// BY the help of strucutures we can be able to prepare custom data type.
	// BY the help of structures we can be able to prepare custom data type.
	// BY the help of structures we can be able to prepare custom data type.
	// By the help of structures we can be able to prepare custom data type..
	
	 // and BY using custom data type : We can enter different form of datas in a singel 
	 // custom user data type ::
	char name [20];
	int code_number;
	float salary_range;
}; 

int main ()

{
	struct employe e1;
	// Wrong way e1.name = "YUBRAJ PARIYAR"//  BY THIS ways it is restricted decalare string.
	strcpy(e1.name,"YUBRAJ PARIYAR");
    e1.code_number = 1234;
    e1.salary_range = 56.3456;
    
	  
    printf("Name of the employe is %s\n",e1.name);
    printf("Code number of the employe is %d\n",e1.code_number);
    printf("Salary range of the employe is %.2f\n",e1.salary_range);
    
    printf("\n");
    
    struct employe e2;
    //wrong ways e2.name = "DAL BAHADUR PARIYAR";// This is the wrong way to decalare a strings
    strcpy(e2.name,"DAL BAHADUR PARIYAR");
    e2.code_number = 5677;
    e2.salary_range = 56.4556;
    
    printf("Name of the employee is %s\n",e2.name);
    printf("Code number of the employe is %d\n",e2.code_number);
    printf("Salary range of the employe is %.3f\n",e2.salary_range);
	
	printf("\n");
	
	struct employe e3;
	// wronge3.name = "MINA PARIYAR"; //  This is the wrong way to declare a string in structure
	strcpy(e3.name,"MINA PARIYAR");
	e3.code_number = 6789;
	e3.salary_range = 78.4567;
	
	printf("Name of the employe is %s\n",e3.name);
	printf("Code number of the employee is %d\n",e3.code_number);
	printf("Salary range of the employe is %.1f\n",e3.salary_range);
	
	
	return 0;
}
