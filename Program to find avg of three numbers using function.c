#include <stdio.h>
// Write a program to find average of three number using Function.c
int average(int a, int b, int c);

int main () 

{
	//int x;
	//x = average(3,6,9);
	
	printf(" The final average value of three numbers is %d",average(12,15,33));
	
	return 0;
}
int average(int a, int b, int c){
	
	int avg;
	avg = (a+b+c)/3;
	return avg;
}
