#include <stdio.h>
// Write a program which used int,char,float to print as per the 
// values given by the users using arrays.C. and at final printing on the screen compilier.
int main () 

{
	int age[5];
	
	printf(" Enter the age of Nothing : \n");
	scanf("%d",&age[0]);
	
	printf(" Enter the age of father : \n");
	scanf("%d",&age[1]);
	
	printf(" Enter the age of mother : \n");
	scanf("%d",&age[2]);
	
	printf(" Enter the age of Bother  : \n");
	scanf("%d",&age[3]);
	
	printf(" Enter the age of sister : \n");
	scanf("%d",&age[4]);
	
	printf(" The age of nothing is %d \n",age[0]);
	printf(" The age of fahter is %d \n",age[1]);
	printf(" The age of mother is %d \n",age[2]);
	printf(" The age of brother is %d \n",age[3]);
	printf(" The age of sister is %d \n",age[4]);
	
	float fval[5];
	
	printf(" Enter the value of zeroth floating point :\n");
	scanf("%f",&fval[0]);
	
	printf(" Enter the value of first floating point :\n");
	scanf("%f",&fval[1]);
	
	printf(" Enter the value of second floating point :\n");
	scanf("%f",&fval[2]);
	
	printf(" Enter the value of third floating point :\n");
	scanf("%f",&fval[3]);
	
	printf(" Enter the value of fourth floating point :\n");
	scanf("%f",&fval[4]);
	
	printf(" The value of the zeroth floating point is %f \n",fval[0]);	
	printf(" The value of the first floating point is %f \n",fval[1]);
	printf(" The value of the second floating point is %f \n",fval[2]);
	printf(" The value of the third floating point is %f \n",fval[3]);
	printf(" The value of the fourth floating point is %f \n",fval[4]);
	
	char name[5];
	
	name[0] = 'M';
	name[1] = 'I';
	name[2] = 'N';
	name[3] = 'A';
	name[4] = 'S';
	
	printf(" The value of zeroth charachter is %c\n",name[0]);
	printf(" The value of first charachter is %c\n",name[1]);
	printf(" The value of second charachter is %c\n",name[2]);
	printf(" The value of third charachter is %c\n",name[3]);
	printf(" The value of fourth charachter is %c\n",name[4]);
	
	return 0;
}
