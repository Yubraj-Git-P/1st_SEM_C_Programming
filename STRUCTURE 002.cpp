#include <stdio.h>
#include <string.h>
// Write a program which give short introduction about an student of narayani schoool. 
struct student{
	
	int roll_no;
	float percen_tage;
	char name[20];
};
int main ()

{   
    printf("*****************************************************\n");
    printf("*****************************************************\n");
 
    printf("\n");
    
    printf("INFORMATION ABOUT STUDENT no 1 :");
    
    struct student s1;
    s1.roll_no = 201;
	s1.percen_tage = 77.9876;
	strcpy(s1.name,"RAHUL");
	
	printf("Student roll number is %d\n",s1.roll_no);
	printf("Student obtained percentage is %f\n",s1.percen_tage);
	printf("Student name is %s\n",s1.name); 

	printf("\n");
	
	printf("********************************************************\n");
	printf("********************************************************\n");
	
	//printf("\n");
	
	printf("INFORMATION ABOUT STUDENT NO 2 :");
	
    printf("\n");
	
	struct student s2;
	s2.roll_no = 4325;
	s2.percen_tage = 867.987689;
	strcpy(s2.name,"AMOD_LIMBU");
	
	printf("Student roll number is %d\n",s2.roll_no);
	printf("Student obtained percentage is %f\n",s2.percen_tage);
	printf("Student name is %s\n",s2.name); 

	printf("\n");
	
	printf("*********************************************************\n");
	printf("*********************************************************\n");
	
	//printf("\n");
	
	printf("INFORMATION ABOUT STUDENT NO 3 :");
	
	printf("\n");
	
	struct student s3;
	s3.roll_no = 7654;
	s3.percen_tage = 45678.9878;
	strcpy(s3.name,"Nile Armstrong");
	
	printf("Student roll number is %d\n",s3.roll_no);
	printf("Student obtained percentage is %f\n",s3.percen_tage);
	printf("Student name is %s\n",s3.name); 

	return 0;
}
