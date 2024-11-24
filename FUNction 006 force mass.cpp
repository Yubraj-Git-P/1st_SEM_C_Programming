#include <stdio.h>

float force(float mass);

int main () 
{
	
	float m;
	
	printf(" mass value : ");
	scanf("%d",&m);
	
	printf("The value of force into newton is %d",force(m));
	
	
	return 0;
}
float force(float mass){
	
	float result;
	
	result = mass * 9.8;
	return result;
}
